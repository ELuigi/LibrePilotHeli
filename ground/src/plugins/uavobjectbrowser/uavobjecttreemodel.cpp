/**
 ******************************************************************************
 *
 * @file       uavobjecttreemodel.cpp
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      
 * @see        The GNU Public License (GPL) Version 3
 * @defgroup   uavobjectbrowser
 * @{
 * 
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include "uavobjecttreemodel.h"
#include "treeitem.h"
#include "uavobjects/uavobjectmanager.h"
#include "uavobjects/uavdataobject.h"
#include "uavobjects/uavmetaobject.h"
#include "uavobjects/uavobjectfields.h"
#include "extensionsystem/pluginmanager.h"
#include <QtGui/QColor>
#include <QtCore/QTimer>
#include <QtCore/QSignalMapper>
#include <QtCore/QDebug>

UAVObjectTreeModel::UAVObjectTreeModel(QObject *parent) :
        QAbstractItemModel(parent),
        m_recentlyUpdatedTimeout(500), // ms
        m_recentlyUpdatedColor(QColor(255, 230, 230)),
        m_manuallyChangedColor(QColor(230, 230, 255))
{
    ExtensionSystem::PluginManager *pm = ExtensionSystem::PluginManager::instance();
    UAVObjectManager *objManager = pm->getObject<UAVObjectManager>();

    m_signalMapper = new QSignalMapper();
    connect(m_signalMapper, SIGNAL(mapped(QObject*)), this, SLOT(resetHighlightObject(QObject*)));
    connect(objManager, SIGNAL(newObject(UAVObject*)), this, SLOT(newObject(UAVObject*)));
    connect(objManager, SIGNAL(newInstance(UAVObject*)), this, SLOT(newObject(UAVObject*)));

    setupModelData(objManager);
}

void UAVObjectTreeModel::setupModelData(UAVObjectManager *objManager)
{
    // root
    QList<QVariant> rootData;
    rootData << tr("Property") << tr("Value") << tr("Unit");
    m_rootItem = new TreeItem(rootData);

    m_settingsTree = new TopTreeItem(tr("Settings"), m_rootItem);
    m_rootItem->appendChild(m_settingsTree);
    m_nonSettingsTree = new TopTreeItem(tr("Data Objects"), m_rootItem);
    m_rootItem->appendChild(m_nonSettingsTree);

    QList< QList<UAVDataObject*> > objList = objManager->getDataObjects();
    foreach (QList<UAVDataObject*> list, objList) {
        foreach (UAVDataObject* obj, list) {
            addDataObject(obj);
        }
    }
}

void UAVObjectTreeModel::newObject(UAVObject *obj)
{
    UAVDataObject *dobj = qobject_cast<UAVDataObject*>(obj);
    if (dobj)
        addDataObject(dobj);
}

void UAVObjectTreeModel::addDataObject(UAVDataObject *obj)
{
    TopTreeItem *root = obj->isSettings() ? m_settingsTree : m_nonSettingsTree;
    if (root->objIds().contains(obj->getObjID())) {
        int index = root->objIds().indexOf(obj->getObjID());
        addInstance(obj, root->child(index));
    } else {
        DataObjectTreeItem *data = new DataObjectTreeItem(obj->getName());
        int index = root->nameIndex(obj->getName());
        root->insert(index, data);
        root->insertObjId(index, obj->getObjID());
        UAVMetaObject *meta = obj->getMetaObject();
        addMetaObject(meta, data);
        addInstance(obj, data);
    }
}

void UAVObjectTreeModel::addMetaObject(UAVMetaObject *obj, TreeItem *parent)
{
    MetaObjectTreeItem *meta = new MetaObjectTreeItem(tr("Meta Data"));
    foreach (UAVObjectField *field, obj->getFields()) {
        if (field->getNumElements() > 1) {
            addArrayField(field, meta);
        } else {
            addSingleField(0, field, meta);
        }
    }
    parent->appendChild(meta);
}

void UAVObjectTreeModel::addInstance(UAVObject *obj, TreeItem *parent)
{
    connect(obj, SIGNAL(objectUpdatedAuto(UAVObject*)), this, SLOT(highlightUpdatedObject(UAVObject*)));
    TreeItem *item;
    if (obj->isSingleInstance()) {
        item = parent;
        DataObjectTreeItem *p = static_cast<DataObjectTreeItem*>(parent);
        p->setObject(obj);
    } else {
        QString name = tr("Instance") +  " " + QString::number(obj->getInstID());
        item = new InstanceTreeItem(obj, name);
        parent->appendChild(item);
    }
    foreach (UAVObjectField *field, obj->getFields()) {
        if (field->getNumElements() > 1) {
            addArrayField(field, item);
        } else {
            addSingleField(0, field, item);
        }
    }
}


void UAVObjectTreeModel::addArrayField(UAVObjectField *field, TreeItem *parent)
{
    TreeItem *item = new ArrayFieldTreeItem(field->getName());
    for (uint i = 0; i < field->getNumElements(); ++i) {
        addSingleField(i, field, item);
    }
    parent->appendChild(item);
}

void UAVObjectTreeModel::addSingleField(int index, UAVObjectField *field, TreeItem *parent)
{
    QList<QVariant> data;
    if (field->getNumElements() == 1)
        data.append(field->getName());
    else
        data.append(QString("[%1]").arg(index));
    UAVObjectFieldEnum *enumField = dynamic_cast<UAVObjectFieldEnum*>(field);
    UAVObjectFieldInt8 *int8Field = dynamic_cast<UAVObjectFieldInt8*>(field);
    UAVObjectFieldInt16 *int16Field = dynamic_cast<UAVObjectFieldInt16*>(field);
    UAVObjectFieldInt32 *int32Field = dynamic_cast<UAVObjectFieldInt32*>(field);
    UAVObjectFieldUInt8 *uInt8Field = dynamic_cast<UAVObjectFieldUInt8*>(field);
    UAVObjectFieldUInt16 *uInt16Field = dynamic_cast<UAVObjectFieldUInt16*>(field);
    UAVObjectFieldUInt32 *uInt32Field = dynamic_cast<UAVObjectFieldUInt32*>(field);
    UAVObjectFieldFloat *floatField = dynamic_cast<UAVObjectFieldFloat*>(field);

    FieldTreeItem *item;
    if (enumField) {
        data.append(enumField->getSelectedIndex(index));
        data.append(field->getUnits());
        item = new EnumFieldTreeItem(enumField, index, data);
    } else if (int8Field) {
        data.append(int8Field->getValue(index));
        data.append(field->getUnits());
        item = new Int8FieldTreeItem(int8Field, index, data);
    } else if (int16Field) {
        data.append(int16Field->getValue(index));
        data.append(field->getUnits());
        item = new Int16FieldTreeItem(int16Field, index, data);
    } else if (int32Field) {
        data.append(int32Field->getValue(index));
        data.append(field->getUnits());
        item = new Int32FieldTreeItem(int32Field, index, data);
    } else if (uInt8Field) {
        data.append(uInt8Field->getValue(index));
        data.append(field->getUnits());
        item = new UInt8FieldTreeItem(uInt8Field, index, data);
    } else if (uInt16Field) {
        data.append(uInt16Field->getValue(index));
        data.append(field->getUnits());
        item = new UInt16FieldTreeItem(uInt16Field, index, data);
    } else if (uInt32Field) {
        data.append(uInt32Field->getValue(index));
        data.append(field->getUnits());
        item = new UInt32FieldTreeItem(uInt32Field, index, data);
    } else if (floatField) {
        data.append(floatField->getValue(index));
        data.append(field->getUnits());
        item = new FloatFieldTreeItem(floatField, index, data);
    } else {
        data.append("Data Error");
        data.append(field->getUnits());
        item = new FieldTreeItem(index, data);
    }
    parent->appendChild(item);
}

QModelIndex UAVObjectTreeModel::index(int row, int column, const QModelIndex &parent)
        const
{
    if (!hasIndex(row, column, parent))
        return QModelIndex();

    TreeItem *parentItem;

    if (!parent.isValid())
        parentItem = m_rootItem;
    else
        parentItem = static_cast<TreeItem*>(parent.internalPointer());

    TreeItem *childItem = parentItem->child(row);
    if (childItem)
        return createIndex(row, column, childItem);
    else
        return QModelIndex();
}

QModelIndex UAVObjectTreeModel::parent(const QModelIndex &index) const
{
    if (!index.isValid())
        return QModelIndex();

    TreeItem *childItem = static_cast<TreeItem*>(index.internalPointer());
    TreeItem *parentItem = childItem->parent();

    if (parentItem == m_rootItem)
        return QModelIndex();

    return createIndex(parentItem->row(), 0, parentItem);
}

int UAVObjectTreeModel::rowCount(const QModelIndex &parent) const
{
    TreeItem *parentItem;
    if (parent.column() > 0)
        return 0;

    if (!parent.isValid())
        parentItem = m_rootItem;
    else
        parentItem = static_cast<TreeItem*>(parent.internalPointer());

    return parentItem->childCount();
}

int UAVObjectTreeModel::columnCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return static_cast<TreeItem*>(parent.internalPointer())->columnCount();
    else
        return m_rootItem->columnCount();
}

QVariant UAVObjectTreeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (index.column() == 1 && role == Qt::EditRole) {
        TreeItem *item = static_cast<TreeItem*>(index.internalPointer());
        return item->data(index.column());
    }

    TreeItem *item = static_cast<TreeItem*>(index.internalPointer());

    if (index.column() == 0 && role == Qt::BackgroundRole) {
        DataObjectTreeItem *dataItem = dynamic_cast<DataObjectTreeItem*>(item);
        if (dataItem && dataItem->highlight())
            return QVariant(m_recentlyUpdatedColor);
    }
    if (index.column() == 1 && role == Qt::BackgroundRole) {
        FieldTreeItem *fieldItem = dynamic_cast<FieldTreeItem*>(item);
        if (fieldItem && fieldItem->highlight())
            return QVariant(m_recentlyUpdatedColor);
        if (fieldItem && fieldItem->isChanged())
            return QVariant(m_manuallyChangedColor);
    }

    if (role != Qt::DisplayRole)
        return QVariant();

    if (index.column() == 1) {
        EnumFieldTreeItem *fieldItem = dynamic_cast<EnumFieldTreeItem*>(item);
        if (fieldItem) {
            int enumIndex = fieldItem->data(index.column()).toInt();
            return fieldItem->enumOptions.at(enumIndex);
        }
    }

    return item->data(index.column());
}

bool UAVObjectTreeModel::setData(const QModelIndex &index, const QVariant & value, int role)
{
    TreeItem *item = static_cast<TreeItem*>(index.internalPointer());
    item->setData(value, index.column());
    return true;
}


Qt::ItemFlags UAVObjectTreeModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return 0;

    if (index.column() == 1) {
        TreeItem *item = static_cast<TreeItem*>(index.internalPointer());
        if (item->isEditable())
            return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
    }

    return Qt::ItemIsEnabled | Qt::ItemIsSelectable;
}

QVariant UAVObjectTreeModel::headerData(int section, Qt::Orientation orientation,
                                        int role) const
{
    if (orientation == Qt::Horizontal && role == Qt::DisplayRole)
        return m_rootItem->data(section);

    return QVariant();
}

void UAVObjectTreeModel::highlightUpdatedObject(UAVObject *object)
{
    UAVDataObject *obj = qobject_cast<UAVDataObject*>(object);
    if (!obj)
        return;
    DataObjectTreeItem * dobj = findDataObjectTreeItem(obj);
    if (dobj) {
        dobj->setHighlight(true);
        dobj->update();
        emit dataChanged(QModelIndex(), QModelIndex());
    }

    // any updates while highlighted will not reset timer
    if (m_timerMap.contains(obj))
        return;

    QTimer *timer = new QTimer(this);
    timer->setSingleShot(true);

    m_timerMap.insert(obj, timer);
    connect(timer, SIGNAL(timeout()), m_signalMapper, SLOT(map()));
    m_signalMapper->setMapping(timer, obj);
    timer->start(m_recentlyUpdatedTimeout);
}

void UAVObjectTreeModel::resetHighlightObject(QObject *object)
{
    UAVDataObject *obj = qobject_cast<UAVDataObject*>(object);
    if (!obj)
        return;
    QTimer *timer = m_timerMap.value(obj);
    delete timer;
    m_timerMap.remove(obj);

    DataObjectTreeItem * dobj = findDataObjectTreeItem(obj);
    if (dobj) {
        dobj->setHighlight(false);
        dobj->update();
        emit dataChanged(QModelIndex(), QModelIndex());
    }
}

DataObjectTreeItem *UAVObjectTreeModel::findDataObjectTreeItem(UAVDataObject *obj)
{
    TopTreeItem *root = obj->isSettings() ? m_settingsTree : m_nonSettingsTree;
    foreach (TreeItem *child, root->children()) {
        DataObjectTreeItem *dobj = dynamic_cast<DataObjectTreeItem*>(child);
        if (dobj && dobj->object() && dobj->object()->isSingleInstance()) {
            if(dobj->object() == obj) {
                return dobj;
            }
        } else {
            foreach (TreeItem *c, dobj->children()) {
                DataObjectTreeItem *d = dynamic_cast<DataObjectTreeItem*>(c);
                if (d && d->object() == obj)
                    return dobj;
            }
        }
    }
    return 0;
}


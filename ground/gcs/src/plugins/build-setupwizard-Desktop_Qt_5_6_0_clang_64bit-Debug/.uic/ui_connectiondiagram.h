/********************************************************************************
** Form generated from reading UI file 'connectiondiagram.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONDIAGRAM_H
#define UI_CONNECTIONDIAGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectionDiagram
{
public:
    QVBoxLayout *verticalLayout;
    QGraphicsView *connectionDiagram;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QPushButton *closeButton;

    void setupUi(QDialog *ConnectionDiagram)
    {
        if (ConnectionDiagram->objectName().isEmpty())
            ConnectionDiagram->setObjectName(QStringLiteral("ConnectionDiagram"));
        ConnectionDiagram->resize(800, 440);
        ConnectionDiagram->setSizeGripEnabled(true);
        ConnectionDiagram->setModal(true);
        verticalLayout = new QVBoxLayout(ConnectionDiagram);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        connectionDiagram = new QGraphicsView(ConnectionDiagram);
        connectionDiagram->setObjectName(QStringLiteral("connectionDiagram"));
        connectionDiagram->setFrameShape(QFrame::WinPanel);
        connectionDiagram->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        connectionDiagram->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        connectionDiagram->setBackgroundBrush(brush);
        connectionDiagram->setRenderHints(QPainter::HighQualityAntialiasing|QPainter::TextAntialiasing);

        verticalLayout->addWidget(connectionDiagram);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveButton = new QPushButton(ConnectionDiagram);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(saveButton->sizePolicy().hasHeightForWidth());
        saveButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(saveButton);

        closeButton = new QPushButton(ConnectionDiagram);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        sizePolicy.setHeightForWidth(closeButton->sizePolicy().hasHeightForWidth());
        closeButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ConnectionDiagram);
        QObject::connect(closeButton, SIGNAL(clicked()), ConnectionDiagram, SLOT(close()));

        closeButton->setDefault(true);


        QMetaObject::connectSlotsByName(ConnectionDiagram);
    } // setupUi

    void retranslateUi(QDialog *ConnectionDiagram)
    {
        ConnectionDiagram->setWindowTitle(QApplication::translate("ConnectionDiagram", "Dialog", 0));
        saveButton->setText(QApplication::translate("ConnectionDiagram", "Save", 0));
        closeButton->setText(QApplication::translate("ConnectionDiagram", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ConnectionDiagram: public Ui_ConnectionDiagram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONDIAGRAM_H

/********************************************************************************
** Form generated from reading UI file 'vehicletemplateexportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLETEMPLATEEXPORTDIALOG_H
#define UI_VEHICLETEMPLATEEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "vehicletemplateselectorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_VehicleTemplateExportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLineEdit *Propeller;
    QLabel *label_11;
    QLineEdit *Size;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_8;
    QLineEdit *Servo;
    QLineEdit *Owner;
    QLabel *label_12;
    QLabel *label_10;
    QFrame *line;
    QLineEdit *Name;
    QLabel *label_2;
    QLineEdit *Motor;
    QLabel *label_5;
    QLineEdit *Battery;
    QLabel *label_14;
    QLineEdit *Type;
    QLabel *label_7;
    QComboBox *Controllers;
    QLabel *label_3;
    QLineEdit *ForumNick;
    QLineEdit *Esc;
    QLineEdit *Weight;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_13;
    QTextEdit *Comment;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QGraphicsView *Photo;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_15;
    QPushButton *ImportButton;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *saveAsBtn;
    QPushButton *exportBtn;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    VehicleTemplateSelectorWidget *selectionWidget;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cancelBtn_2;
    QPushButton *importBtn;

    void setupUi(QDialog *VehicleTemplateExportDialog)
    {
        if (VehicleTemplateExportDialog->objectName().isEmpty())
            VehicleTemplateExportDialog->setObjectName(QStringLiteral("VehicleTemplateExportDialog"));
        VehicleTemplateExportDialog->setWindowModality(Qt::ApplicationModal);
        VehicleTemplateExportDialog->resize(600, 560);
        VehicleTemplateExportDialog->setMinimumSize(QSize(600, 560));
        VehicleTemplateExportDialog->setSizeGripEnabled(true);
        VehicleTemplateExportDialog->setModal(true);
        verticalLayout = new QVBoxLayout(VehicleTemplateExportDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(VehicleTemplateExportDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 6, 2, 1, 1);

        Propeller = new QLineEdit(frame);
        Propeller->setObjectName(QStringLiteral("Propeller"));

        gridLayout->addWidget(Propeller, 11, 1, 1, 1);

        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 10, 2, 1, 1);

        Size = new QLineEdit(frame);
        Size->setObjectName(QStringLiteral("Size"));

        gridLayout->addWidget(Size, 6, 1, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 10, 0, 1, 1);

        Servo = new QLineEdit(frame);
        Servo->setObjectName(QStringLiteral("Servo"));

        gridLayout->addWidget(Servo, 10, 1, 1, 1);

        Owner = new QLineEdit(frame);
        Owner->setObjectName(QStringLiteral("Owner"));

        gridLayout->addWidget(Owner, 4, 1, 1, 1);

        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 11, 0, 1, 1);

        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 4, 2, 1, 1);

        line = new QFrame(frame);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 5, 0, 1, 5);

        Name = new QLineEdit(frame);
        Name->setObjectName(QStringLiteral("Name"));

        gridLayout->addWidget(Name, 2, 1, 1, 4);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        Motor = new QLineEdit(frame);
        Motor->setObjectName(QStringLiteral("Motor"));

        gridLayout->addWidget(Motor, 8, 1, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        Battery = new QLineEdit(frame);
        Battery->setObjectName(QStringLiteral("Battery"));

        gridLayout->addWidget(Battery, 10, 3, 1, 2);

        label_14 = new QLabel(frame);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 11, 2, 1, 1);

        Type = new QLineEdit(frame);
        Type->setObjectName(QStringLiteral("Type"));
        Type->setAutoFillBackground(false);
        Type->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 0);"));
        Type->setFrame(false);
        Type->setReadOnly(true);

        gridLayout->addWidget(Type, 1, 1, 1, 4);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 2, 1, 1);

        Controllers = new QComboBox(frame);
        Controllers->setObjectName(QStringLiteral("Controllers"));

        gridLayout->addWidget(Controllers, 11, 3, 1, 2);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        ForumNick = new QLineEdit(frame);
        ForumNick->setObjectName(QStringLiteral("ForumNick"));

        gridLayout->addWidget(ForumNick, 4, 3, 1, 2);

        Esc = new QLineEdit(frame);
        Esc->setObjectName(QStringLiteral("Esc"));

        gridLayout->addWidget(Esc, 8, 3, 1, 2);

        Weight = new QLineEdit(frame);
        Weight->setObjectName(QStringLiteral("Weight"));

        gridLayout->addWidget(Weight, 6, 3, 1, 2);


        verticalLayout_5->addWidget(frame);

        frame_6 = new QFrame(tab);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setMinimumSize(QSize(0, 0));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame_6);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_3->addWidget(label_13, 0, Qt::AlignTop);

        Comment = new QTextEdit(frame_3);
        Comment->setObjectName(QStringLiteral("Comment"));
        sizePolicy.setHeightForWidth(Comment->sizePolicy().hasHeightForWidth());
        Comment->setSizePolicy(sizePolicy);
        Comment->setMinimumSize(QSize(0, 0));
        Comment->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        Comment->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout_3->addWidget(Comment);


        horizontalLayout_2->addWidget(frame_3);

        frame_4 = new QFrame(frame_6);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        Photo = new QGraphicsView(frame_4);
        Photo->setObjectName(QStringLiteral("Photo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Photo->sizePolicy().hasHeightForWidth());
        Photo->setSizePolicy(sizePolicy2);
        Photo->setStyleSheet(QStringLiteral("background-color: rgba(254, 254, 254, 0);"));
        Photo->setFrameShape(QFrame::NoFrame);
        Photo->setFrameShadow(QFrame::Sunken);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        Photo->setBackgroundBrush(brush);
        Photo->setInteractive(false);
        Photo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(Photo);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QStringLiteral("frame_7"));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_7);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(frame_7);
        label_15->setObjectName(QStringLiteral("label_15"));
        QFont font;
        font.setPointSize(8);
        label_15->setFont(font);

        horizontalLayout_3->addWidget(label_15);

        ImportButton = new QPushButton(frame_7);
        ImportButton->setObjectName(QStringLiteral("ImportButton"));

        horizontalLayout_3->addWidget(ImportButton);


        verticalLayout_4->addWidget(frame_7);


        horizontalLayout_2->addWidget(frame_4);

        frame_4->raise();
        frame_3->raise();

        verticalLayout_5->addWidget(frame_6);

        frame_5 = new QFrame(tab);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(frame_5);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        horizontalLayout->addWidget(cancelBtn);

        saveAsBtn = new QPushButton(frame_5);
        saveAsBtn->setObjectName(QStringLiteral("saveAsBtn"));
        saveAsBtn->setEnabled(false);
        saveAsBtn->setAutoDefault(false);

        horizontalLayout->addWidget(saveAsBtn);

        exportBtn = new QPushButton(frame_5);
        exportBtn->setObjectName(QStringLiteral("exportBtn"));
        exportBtn->setEnabled(false);
        exportBtn->setAutoDefault(false);

        horizontalLayout->addWidget(exportBtn);


        verticalLayout_5->addWidget(frame_5);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        selectionWidget = new VehicleTemplateSelectorWidget(tab_2);
        selectionWidget->setObjectName(QStringLiteral("selectionWidget"));
        sizePolicy1.setHeightForWidth(selectionWidget->sizePolicy().hasHeightForWidth());
        selectionWidget->setSizePolicy(sizePolicy1);

        verticalLayout_6->addWidget(selectionWidget);

        frame_8 = new QFrame(tab_2);
        frame_8->setObjectName(QStringLiteral("frame_8"));
        frame_8->setFrameShape(QFrame::NoFrame);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_8);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        cancelBtn_2 = new QPushButton(frame_8);
        cancelBtn_2->setObjectName(QStringLiteral("cancelBtn_2"));

        horizontalLayout_4->addWidget(cancelBtn_2);

        importBtn = new QPushButton(frame_8);
        importBtn->setObjectName(QStringLiteral("importBtn"));
        importBtn->setEnabled(false);
        importBtn->setCheckable(false);
        importBtn->setAutoDefault(false);

        horizontalLayout_4->addWidget(importBtn);


        verticalLayout_6->addWidget(frame_8);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(Type, Name);
        QWidget::setTabOrder(Name, Owner);
        QWidget::setTabOrder(Owner, ForumNick);
        QWidget::setTabOrder(ForumNick, Size);
        QWidget::setTabOrder(Size, Weight);
        QWidget::setTabOrder(Weight, Motor);
        QWidget::setTabOrder(Motor, Esc);
        QWidget::setTabOrder(Esc, Servo);
        QWidget::setTabOrder(Servo, Battery);
        QWidget::setTabOrder(Battery, Propeller);
        QWidget::setTabOrder(Propeller, Controllers);
        QWidget::setTabOrder(Controllers, Comment);
        QWidget::setTabOrder(Comment, ImportButton);
        QWidget::setTabOrder(ImportButton, exportBtn);
        QWidget::setTabOrder(exportBtn, cancelBtn);
        QWidget::setTabOrder(cancelBtn, Photo);

        retranslateUi(VehicleTemplateExportDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VehicleTemplateExportDialog);
    } // setupUi

    void retranslateUi(QDialog *VehicleTemplateExportDialog)
    {
        VehicleTemplateExportDialog->setWindowTitle(QApplication::translate("VehicleTemplateExportDialog", "Vehicle Templates", 0));
        label_9->setText(QApplication::translate("VehicleTemplateExportDialog", "Weight:", 0));
        Propeller->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Size and angle", 0));
        label_11->setText(QApplication::translate("VehicleTemplateExportDialog", "Battery:", 0));
        Size->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Size of the vehicle in mm", 0));
        label_6->setText(QApplication::translate("VehicleTemplateExportDialog", "Motor:", 0));
        label->setText(QApplication::translate("VehicleTemplateExportDialog", "Name:", 0));
        label_8->setText(QApplication::translate("VehicleTemplateExportDialog", "Servo:", 0));
        Servo->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Brand and name", 0));
        Owner->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Your name", 0));
        label_12->setText(QApplication::translate("VehicleTemplateExportDialog", "Propeller:", 0));
        label_10->setText(QApplication::translate("VehicleTemplateExportDialog", "Forum name:", 0));
        Name->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "The name of the vehicle, brand etc", 0));
        label_2->setText(QApplication::translate("VehicleTemplateExportDialog", "Owner:", 0));
        Motor->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Brand, size and Kv", 0));
        label_5->setText(QApplication::translate("VehicleTemplateExportDialog", "Size:", 0));
        Battery->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "How many cells etc?", 0));
        label_14->setText(QApplication::translate("VehicleTemplateExportDialog", "Controller:", 0));
        label_7->setText(QApplication::translate("VehicleTemplateExportDialog", "ESC:", 0));
        Controllers->clear();
        Controllers->insertItems(0, QStringList()
         << QApplication::translate("VehicleTemplateExportDialog", "None", 0)
         << QApplication::translate("VehicleTemplateExportDialog", "CC", 0)
         << QApplication::translate("VehicleTemplateExportDialog", "CC3D", 0)
         << QApplication::translate("VehicleTemplateExportDialog", "Atom", 0)
         << QApplication::translate("VehicleTemplateExportDialog", "Revolution", 0)
         << QApplication::translate("VehicleTemplateExportDialog", "Nano", 0)
         << QApplication::translate("VehicleTemplateExportDialog", "Sparky2", 0)
        );
        label_3->setText(QApplication::translate("VehicleTemplateExportDialog", "Type:", 0));
        ForumNick->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Forum nickname", 0));
        Esc->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Brand and name", 0));
        Weight->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Weight in grams", 0));
        label_13->setText(QApplication::translate("VehicleTemplateExportDialog", "Comment:", 0));
        Comment->setPlaceholderText(QApplication::translate("VehicleTemplateExportDialog", "Put comments here that don't fit in the categories above", 0));
        label_4->setText(QApplication::translate("VehicleTemplateExportDialog", "Photo:", 0));
        label_15->setText(QApplication::translate("VehicleTemplateExportDialog", "Photo will be scaled to 500x500px", 0));
        ImportButton->setText(QApplication::translate("VehicleTemplateExportDialog", "Select Image...", 0));
        cancelBtn->setText(QApplication::translate("VehicleTemplateExportDialog", "Close", 0));
        saveAsBtn->setText(QApplication::translate("VehicleTemplateExportDialog", "Save as", 0));
        exportBtn->setText(QApplication::translate("VehicleTemplateExportDialog", "Export", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("VehicleTemplateExportDialog", "Export template", 0));
        cancelBtn_2->setText(QApplication::translate("VehicleTemplateExportDialog", "Close", 0));
        importBtn->setText(QApplication::translate("VehicleTemplateExportDialog", "Import", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("VehicleTemplateExportDialog", "Import template", 0));
    } // retranslateUi

};

namespace Ui {
    class VehicleTemplateExportDialog: public Ui_VehicleTemplateExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLETEMPLATEEXPORTDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'controllerpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROLLERPAGE_H
#define UI_CONTROLLERPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_ControllerPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *boardImg;
    QGridLayout *gridLayout;
    QComboBox *deviceCombo;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *boardTypeCombo;
    QPushButton *connectButton;

    void setupUi(QWizardPage *ControllerPage)
    {
        if (ControllerPage->objectName().isEmpty())
            ControllerPage->setObjectName(QStringLiteral("ControllerPage"));
        ControllerPage->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ControllerPage->sizePolicy().hasHeightForWidth());
        ControllerPage->setSizePolicy(sizePolicy);
        ControllerPage->setMinimumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(ControllerPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ControllerPage);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 9, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_4->setContentsMargins(6, 6, 6, 6);
        boardImg = new QLabel(ControllerPage);
        boardImg->setObjectName(QStringLiteral("boardImg"));
        boardImg->setMinimumSize(QSize(100, 100));
        boardImg->setMaximumSize(QSize(250, 250));
        boardImg->setText(QStringLiteral(""));
        boardImg->setScaledContents(true);

        horizontalLayout_4->addWidget(boardImg);


        verticalLayout->addLayout(horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, -1, 0);
        deviceCombo = new QComboBox(ControllerPage);
        deviceCombo->setObjectName(QStringLiteral("deviceCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deviceCombo->sizePolicy().hasHeightForWidth());
        deviceCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(deviceCombo, 0, 1, 1, 1);

        label_3 = new QLabel(ControllerPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(150, 0));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_2 = new QLabel(ControllerPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 0));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        boardTypeCombo = new QComboBox(ControllerPage);
        boardTypeCombo->setObjectName(QStringLiteral("boardTypeCombo"));
        boardTypeCombo->setEnabled(false);
        sizePolicy1.setHeightForWidth(boardTypeCombo->sizePolicy().hasHeightForWidth());
        boardTypeCombo->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(boardTypeCombo, 1, 1, 1, 1);

        connectButton = new QPushButton(ControllerPage);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(connectButton->sizePolicy().hasHeightForWidth());
        connectButton->setSizePolicy(sizePolicy2);
        connectButton->setMinimumSize(QSize(130, 0));
        connectButton->setMaximumSize(QSize(130, 16777215));

        gridLayout->addWidget(connectButton, 0, 2, 2, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(ControllerPage);

        QMetaObject::connectSlotsByName(ControllerPage);
    } // setupUi

    void retranslateUi(QWizardPage *ControllerPage)
    {
        ControllerPage->setWindowTitle(QApplication::translate("ControllerPage", "WizardPage", 0));
        label->setText(QApplication::translate("ControllerPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Board Identification</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">To continue, the wizard needs to determine the configuration required for the type of flight controller you have. When connected, the wizard will attempt to automatically detect the type of board.</span></p>\n"
"<p style=\" margin-top:12px; margi"
                        "n-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">If the board is already connected and successfully detected, the board type will already be displayed. You can </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600;\">Disconnect</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> and select another device if you need to detect another board.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">If your board is not connected, please connect the board to a USB port on your computer and select the device from the list below. Then press </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600;\">Connect</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">.</span></p></body></htm"
                        "l>", 0));
        label_3->setText(QApplication::translate("ControllerPage", "Detected board type:", 0));
        label_2->setText(QApplication::translate("ControllerPage", "Connection device:", 0));
        connectButton->setText(QApplication::translate("ControllerPage", "Connect", 0));
    } // retranslateUi

};

namespace Ui {
    class ControllerPage: public Ui_ControllerPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROLLERPAGE_H

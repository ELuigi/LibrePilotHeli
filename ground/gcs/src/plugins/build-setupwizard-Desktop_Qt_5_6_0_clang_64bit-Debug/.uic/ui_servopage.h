/********************************************************************************
** Form generated from reading UI file 'servopage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVOPAGE_H
#define UI_SERVOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_ServoPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *defaultESCButton;
    QToolButton *ServoTypeButton;

    void setupUi(QWizardPage *ServoPage)
    {
        if (ServoPage->objectName().isEmpty())
            ServoPage->setObjectName(QStringLiteral("ServoPage"));
        ServoPage->resize(600, 400);
        verticalLayout = new QVBoxLayout(ServoPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ServoPage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        defaultESCButton = new QToolButton(ServoPage);
        defaultESCButton->setObjectName(QStringLiteral("defaultESCButton"));
        QFont font;
        font.setPointSize(10);
        defaultESCButton->setFont(font);
        defaultESCButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-servo-standard-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-servo-standard-dwn.png"), QSize(), QIcon::Normal, QIcon::On);
        defaultESCButton->setIcon(icon);
        defaultESCButton->setIconSize(QSize(200, 100));
        defaultESCButton->setCheckable(true);
        defaultESCButton->setChecked(true);
        defaultESCButton->setAutoExclusive(true);
        defaultESCButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        defaultESCButton->setAutoRaise(true);

        horizontalLayout->addWidget(defaultESCButton);

        ServoTypeButton = new QToolButton(ServoPage);
        ServoTypeButton->setObjectName(QStringLiteral("ServoTypeButton"));
        ServoTypeButton->setFont(font);
        ServoTypeButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/setupwizard/resources/bttn-servo-digital-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/setupwizard/resources/bttn-servo-digital-dwn.png"), QSize(), QIcon::Normal, QIcon::On);
        ServoTypeButton->setIcon(icon1);
        ServoTypeButton->setIconSize(QSize(200, 100));
        ServoTypeButton->setCheckable(true);
        ServoTypeButton->setChecked(false);
        ServoTypeButton->setAutoExclusive(true);
        ServoTypeButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ServoTypeButton->setAutoRaise(true);

        horizontalLayout->addWidget(ServoTypeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ServoPage);

        QMetaObject::connectSlotsByName(ServoPage);
    } // setupUi

    void retranslateUi(QWizardPage *ServoPage)
    {
        ServoPage->setWindowTitle(QApplication::translate("ServoPage", "WizardPage", 0));
        label->setText(QApplication::translate("ServoPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Output Signal Configuration</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">To set an optimal configuration of the output signals powering your servos, the wizard needs to know what type of servos you will use and what their capabilities are.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Please select one of the options below. If you are unsure about the capabilities of your servos, just leave the default option selected and continue the wizard.</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        defaultESCButton->setToolTip(QApplication::translate("ServoPage", "Analog Servo 50Hz", 0));
#endif // QT_NO_TOOLTIP
        defaultESCButton->setText(QApplication::translate("ServoPage", "Analog Servos", 0));
#ifndef QT_NO_TOOLTIP
        ServoTypeButton->setToolTip(QApplication::translate("ServoPage", "Digital Servo 333Hz", 0));
#endif // QT_NO_TOOLTIP
        ServoTypeButton->setText(QApplication::translate("ServoPage", "Digital Servos", 0));
    } // retranslateUi

};

namespace Ui {
    class ServoPage: public Ui_ServoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVOPAGE_H

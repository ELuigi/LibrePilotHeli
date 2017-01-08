/********************************************************************************
** Form generated from reading UI file 'escpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESCPAGE_H
#define UI_ESCPAGE_H

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

class Ui_EscPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *defaultESCButton;
    QToolButton *rapidESCButton;
    QToolButton *oneshotESCButton;

    void setupUi(QWizardPage *EscPage)
    {
        if (EscPage->objectName().isEmpty())
            EscPage->setObjectName(QStringLiteral("EscPage"));
        EscPage->resize(641, 400);
        verticalLayout = new QVBoxLayout(EscPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(EscPage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        defaultESCButton = new QToolButton(EscPage);
        defaultESCButton->setObjectName(QStringLiteral("defaultESCButton"));
        QFont font;
        font.setPointSize(10);
        defaultESCButton->setFont(font);
        defaultESCButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-ESC-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-ESC-down.png"), QSize(), QIcon::Normal, QIcon::On);
        defaultESCButton->setIcon(icon);
        defaultESCButton->setIconSize(QSize(200, 100));
        defaultESCButton->setCheckable(true);
        defaultESCButton->setChecked(false);
        defaultESCButton->setAutoExclusive(true);
        defaultESCButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        defaultESCButton->setAutoRaise(true);

        horizontalLayout->addWidget(defaultESCButton);

        rapidESCButton = new QToolButton(EscPage);
        rapidESCButton->setObjectName(QStringLiteral("rapidESCButton"));
        rapidESCButton->setFont(font);
        rapidESCButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/setupwizard/resources/bttn-rapid-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/setupwizard/resources/bttn-rapid-dwn.png"), QSize(), QIcon::Normal, QIcon::On);
        rapidESCButton->setIcon(icon1);
        rapidESCButton->setIconSize(QSize(200, 100));
        rapidESCButton->setCheckable(true);
        rapidESCButton->setChecked(true);
        rapidESCButton->setAutoExclusive(true);
        rapidESCButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        rapidESCButton->setAutoRaise(true);

        horizontalLayout->addWidget(rapidESCButton);

        oneshotESCButton = new QToolButton(EscPage);
        oneshotESCButton->setObjectName(QStringLiteral("oneshotESCButton"));
        oneshotESCButton->setEnabled(false);
        oneshotESCButton->setFont(font);
        oneshotESCButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/setupwizard/resources/bttn-oneshot-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/setupwizard/resources/bttn-oneshot-dwn.png"), QSize(), QIcon::Normal, QIcon::On);
        oneshotESCButton->setIcon(icon2);
        oneshotESCButton->setIconSize(QSize(200, 100));
        oneshotESCButton->setCheckable(true);
        oneshotESCButton->setChecked(false);
        oneshotESCButton->setAutoExclusive(true);
        oneshotESCButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        oneshotESCButton->setAutoRaise(true);

        horizontalLayout->addWidget(oneshotESCButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(EscPage);

        QMetaObject::connectSlotsByName(EscPage);
    } // setupUi

    void retranslateUi(QWizardPage *EscPage)
    {
        EscPage->setWindowTitle(QApplication::translate("EscPage", "WizardPage", 0));
        label->setText(QApplication::translate("EscPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Output Signal Configuration</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">To set an optimal configuration of the output signals powering your motors, the wizard needs to know what type of Electronic Speed Controllers (ESCs) you will use and what their capabilities are.</span></p>\n"
"<p style=\" margin-top:12px;"
                        " margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Please select one of the options below. If you are unsure about the capabilities of your ESCs, just leave the default option selected and continue the wizard.</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        defaultESCButton->setToolTip(QApplication::translate("EscPage", "Standard ESC: Slow refresh rate (50Hz), not recommended for Multirotors.", 0));
#endif // QT_NO_TOOLTIP
        defaultESCButton->setText(QApplication::translate("EscPage", "Standard ESC", 0));
#ifndef QT_NO_TOOLTIP
        rapidESCButton->setToolTip(QApplication::translate("EscPage", "Rapid ESC: Usually Simonk, 490Hz refresh rate.", 0));
#endif // QT_NO_TOOLTIP
        rapidESCButton->setText(QApplication::translate("EscPage", "Rapid ESC", 0));
#ifndef QT_NO_TOOLTIP
        oneshotESCButton->setToolTip(QApplication::translate("EscPage", "OneShot ESC: BLHeli, Kiss...", 0));
#endif // QT_NO_TOOLTIP
        oneshotESCButton->setText(QApplication::translate("EscPage", "OneShot ESC", 0));
    } // retranslateUi

};

namespace Ui {
    class EscPage: public Ui_EscPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESCPAGE_H

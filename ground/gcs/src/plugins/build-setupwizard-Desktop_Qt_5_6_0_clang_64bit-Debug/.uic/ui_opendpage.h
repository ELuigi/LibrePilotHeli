/********************************************************************************
** Form generated from reading UI file 'opendpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENDPAGE_H
#define UI_OPENDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_OPEndPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *inputWizardButton;

    void setupUi(QWizardPage *OPEndPage)
    {
        if (OPEndPage->objectName().isEmpty())
            OPEndPage->setObjectName(QStringLiteral("OPEndPage"));
        OPEndPage->resize(600, 400);
        OPEndPage->setMinimumSize(QSize(600, 400));
        verticalLayout = new QVBoxLayout(OPEndPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(OPEndPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        inputWizardButton = new QToolButton(OPEndPage);
        inputWizardButton->setObjectName(QStringLiteral("inputWizardButton"));
        inputWizardButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-txwizard-off.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-txwizard-off.png"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-txwizard-on.png"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-txwizard-on.png"), QSize(), QIcon::Active, QIcon::On);
        inputWizardButton->setIcon(icon);
        inputWizardButton->setIconSize(QSize(300, 120));
        inputWizardButton->setAutoRaise(true);

        horizontalLayout->addWidget(inputWizardButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(OPEndPage);

        QMetaObject::connectSlotsByName(OPEndPage);
    } // setupUi

    void retranslateUi(QWizardPage *OPEndPage)
    {
        OPEndPage->setWindowTitle(QApplication::translate("OPEndPage", "WizardPage", 0));
        label_2->setText(QApplication::translate("OPEndPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Congratulations!</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Setup wizard is completed.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-s"
                        "ize:10pt;\">This part of the setup procedure is now complete and you are one step away from completing the setup of your flight controller.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">To complete the setup please click the button below to close this wizard and go directly to the Transmitter Setup Wizard.</span></p></body></html>", 0));
        inputWizardButton->setText(QApplication::translate("OPEndPage", "Go to Input Wizard...", 0));
    } // retranslateUi

};

namespace Ui {
    class OPEndPage: public Ui_OPEndPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENDPAGE_H

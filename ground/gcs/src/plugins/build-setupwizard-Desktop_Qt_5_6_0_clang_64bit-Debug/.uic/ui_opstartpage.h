/********************************************************************************
** Form generated from reading UI file 'opstartpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPSTARTPAGE_H
#define UI_OPSTARTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_OPStartPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;

    void setupUi(QWizardPage *OPStartPage)
    {
        if (OPStartPage->objectName().isEmpty())
            OPStartPage->setObjectName(QStringLiteral("OPStartPage"));
        OPStartPage->resize(600, 584);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OPStartPage->sizePolicy().hasHeightForWidth());
        OPStartPage->setSizePolicy(sizePolicy);
        OPStartPage->setMinimumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(OPStartPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(OPStartPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);


        retranslateUi(OPStartPage);

        QMetaObject::connectSlotsByName(OPStartPage);
    } // setupUi

    void retranslateUi(QWizardPage *OPStartPage)
    {
        OPStartPage->setWindowTitle(QApplication::translate("OPStartPage", "WizardPage", 0));
        label_2->setText(QApplication::translate("OPStartPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Welcome to the Setup Wizard</span><img src=\":/setupwizard/resources/wizard.png\" style=\"float: right;\" /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">This wizard will guide you through the basic steps required to setup your flight controller for the first time. You will be asked questions about your platform (mult"
                        "irotor/heli/fixed-wing) which this wizard will use to configure your controller for its first flight.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">This wizard does not configure all of the advanced settings available in the GCS Configuration. All basic and advanced configuration parameters can be modified later by using the GCS Configuration plugin.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#f"
                        "f0000;\">WARNING: YOU MUST REMOVE ALL PROPELLERS </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; color:#ff0000;\">FROM THE VEHICLE BEFORE PROCEEDING!</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Disregarding this warning puts you at</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600; color:#000000;\"> risk of injury</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">!</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Now that your props are removed we can get started. Ready?</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class OPStartPage: public Ui_OPStartPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPSTARTPAGE_H

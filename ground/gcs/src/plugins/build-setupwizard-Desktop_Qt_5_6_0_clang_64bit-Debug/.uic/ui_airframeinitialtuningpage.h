/********************************************************************************
** Form generated from reading UI file 'airframeinitialtuningpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIRFRAMEINITIALTUNINGPAGE_H
#define UI_AIRFRAMEINITIALTUNINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>
#include "vehicletemplateselectorwidget.h"

QT_BEGIN_NAMESPACE

class Ui_AirframeInitialTuningPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label_main;
    VehicleTemplateSelectorWidget *selectorWidget;

    void setupUi(QWizardPage *AirframeInitialTuningPage)
    {
        if (AirframeInitialTuningPage->objectName().isEmpty())
            AirframeInitialTuningPage->setObjectName(QStringLiteral("AirframeInitialTuningPage"));
        AirframeInitialTuningPage->resize(600, 598);
        verticalLayout_2 = new QVBoxLayout(AirframeInitialTuningPage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_main = new QLabel(AirframeInitialTuningPage);
        label_main->setObjectName(QStringLiteral("label_main"));
        label_main->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_main->setWordWrap(true);

        verticalLayout_2->addWidget(label_main);

        selectorWidget = new VehicleTemplateSelectorWidget(AirframeInitialTuningPage);
        selectorWidget->setObjectName(QStringLiteral("selectorWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectorWidget->sizePolicy().hasHeightForWidth());
        selectorWidget->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(selectorWidget);


        retranslateUi(AirframeInitialTuningPage);

        QMetaObject::connectSlotsByName(AirframeInitialTuningPage);
    } // setupUi

    void retranslateUi(QWizardPage *AirframeInitialTuningPage)
    {
        AirframeInitialTuningPage->setWindowTitle(QApplication::translate("AirframeInitialTuningPage", "WizardPage", 0));
        label_main->setText(QApplication::translate("AirframeInitialTuningPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Initial Tuning</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2,sans-serif'; font-size:10pt;\">This section of the Wizard allows you to select a set of initial tuning parameters for your airframe. Presented below is a list of common airframe types, select the one that matches your airframe the closest, if unsure select the generic var"
                        "iant.</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class AirframeInitialTuningPage: public Ui_AirframeInitialTuningPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIRFRAMEINITIALTUNINGPAGE_H

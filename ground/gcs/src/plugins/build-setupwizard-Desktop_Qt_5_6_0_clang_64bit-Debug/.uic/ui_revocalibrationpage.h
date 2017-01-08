/********************************************************************************
** Form generated from reading UI file 'revocalibrationpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVOCALIBRATIONPAGE_H
#define UI_REVOCALIBRATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_RevoCalibrationPage
{
public:
    QLabel *label;

    void setupUi(QWizardPage *RevoCalibrationPage)
    {
        if (RevoCalibrationPage->objectName().isEmpty())
            RevoCalibrationPage->setObjectName(QStringLiteral("RevoCalibrationPage"));
        RevoCalibrationPage->resize(600, 400);
        label = new QLabel(RevoCalibrationPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 582, 150));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        retranslateUi(RevoCalibrationPage);

        QMetaObject::connectSlotsByName(RevoCalibrationPage);
    } // setupUi

    void retranslateUi(QWizardPage *RevoCalibrationPage)
    {
        RevoCalibrationPage->setWindowTitle(QApplication::translate("RevoCalibrationPage", "WizardPage", 0));
        label->setText(QApplication::translate("RevoCalibrationPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">OpenPilot Revolution Calibration Procedure</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">The calibration procedure for the OpenPilot Revolution controller is not yet implemented in this setup wizard. To calibrate your OpenPilot Revolution controller please use the calibration utility found in the configuration p"
                        "lugin after you have finished this wizard.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Future versions of will have an easy to use calibration procedure implemented.</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class RevoCalibrationPage: public Ui_RevoCalibrationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVOCALIBRATIONPAGE_H

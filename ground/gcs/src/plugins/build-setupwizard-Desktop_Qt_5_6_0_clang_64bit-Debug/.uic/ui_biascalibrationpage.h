/********************************************************************************
** Form generated from reading UI file 'biascalibrationpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIASCALIBRATIONPAGE_H
#define UI_BIASCALIBRATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_BiasCalibrationPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *levelButton;
    QLabel *progressLabel;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *levellinProgressBar;

    void setupUi(QWizardPage *BiasCalibrationPage)
    {
        if (BiasCalibrationPage->objectName().isEmpty())
            BiasCalibrationPage->setObjectName(QStringLiteral("BiasCalibrationPage"));
        BiasCalibrationPage->resize(600, 400);
        verticalLayout = new QVBoxLayout(BiasCalibrationPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(BiasCalibrationPage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        levelButton = new QToolButton(BiasCalibrationPage);
        levelButton->setObjectName(QStringLiteral("levelButton"));
        levelButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-calculate-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-calculate-down.png"), QSize(), QIcon::Normal, QIcon::On);
        levelButton->setIcon(icon);
        levelButton->setIconSize(QSize(200, 70));

        horizontalLayout->addWidget(levelButton);


        verticalLayout->addLayout(horizontalLayout);

        progressLabel = new QLabel(BiasCalibrationPage);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));

        verticalLayout->addWidget(progressLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        levellinProgressBar = new QProgressBar(BiasCalibrationPage);
        levellinProgressBar->setObjectName(QStringLiteral("levellinProgressBar"));
        levellinProgressBar->setStyleSheet(QLatin1String("QProgressBar {\n"
"     border: 2px solid grey;\n"
"     border-radius: 5px;\n"
"     text-align: center;\n"
" }\n"
"QProgressBar::chunk {\n"
"     background-color: #3D6699;\n"
"     width: 10px;\n"
"     margin: 0.5px;\n"
" }"));
        levellinProgressBar->setValue(0);

        horizontalLayout_2->addWidget(levellinProgressBar);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(BiasCalibrationPage);

        QMetaObject::connectSlotsByName(BiasCalibrationPage);
    } // setupUi

    void retranslateUi(QWizardPage *BiasCalibrationPage)
    {
        BiasCalibrationPage->setWindowTitle(QApplication::translate("BiasCalibrationPage", "WizardPage", 0));
        label->setText(QApplication::translate("BiasCalibrationPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Sensor Calibration Procedure</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">The wizard needs to get information from the controller to determine in which position the vehicle is normally considered to be level. To be able to successfully perform these measurements, you need to place the vehicle on a surface that "
                        "is as flat and level as possible. Examples of such surfaces could be a table top or the floor. Be careful to ensure that the vehicle really is level, since this step will affect the accelerometer and gyro bias in the controller software.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">To perform the calibration, please push the Calculate button and wait for the process to finish.</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        levelButton->setToolTip(QApplication::translate("BiasCalibrationPage", "Calculate gyro and accelerometer bias", 0));
#endif // QT_NO_TOOLTIP
        levelButton->setText(QApplication::translate("BiasCalibrationPage", "Calculate", 0));
        progressLabel->setText(QString());
        levellinProgressBar->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class BiasCalibrationPage: public Ui_BiasCalibrationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIASCALIBRATIONPAGE_H

/********************************************************************************
** Form generated from reading UI file 'esccalibrationpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESCCALIBRATIONPAGE_H
#define UI_ESCCALIBRATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_EscCalibrationPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *securityCheckBox1;
    QCheckBox *securityCheckBox2;
    QCheckBox *securityCheckBox3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *nonconnectedLabel;
    QLabel *connectedLabel;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *outputLow;
    QFrame *line;
    QLabel *outputLevel;
    QFrame *line_2;
    QPushButton *outputHigh;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *startButton;
    QPushButton *stopButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWizardPage *EscCalibrationPage)
    {
        if (EscCalibrationPage->objectName().isEmpty())
            EscCalibrationPage->setObjectName(QStringLiteral("EscCalibrationPage"));
        EscCalibrationPage->resize(750, 625);
        verticalLayout = new QVBoxLayout(EscCalibrationPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(EscCalibrationPage);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 290));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        securityCheckBox1 = new QCheckBox(EscCalibrationPage);
        securityCheckBox1->setObjectName(QStringLiteral("securityCheckBox1"));
        securityCheckBox1->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(securityCheckBox1);

        securityCheckBox2 = new QCheckBox(EscCalibrationPage);
        securityCheckBox2->setObjectName(QStringLiteral("securityCheckBox2"));

        verticalLayout_2->addWidget(securityCheckBox2);

        securityCheckBox3 = new QCheckBox(EscCalibrationPage);
        securityCheckBox3->setObjectName(QStringLiteral("securityCheckBox3"));

        verticalLayout_2->addWidget(securityCheckBox3);

        verticalLayout_2->setStretch(0, 1000);
        verticalLayout_2->setStretch(1, 100);
        verticalLayout_2->setStretch(2, 100);

        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        nonconnectedLabel = new QLabel(EscCalibrationPage);
        nonconnectedLabel->setObjectName(QStringLiteral("nonconnectedLabel"));
        nonconnectedLabel->setMinimumSize(QSize(155, 70));
        nonconnectedLabel->setMaximumSize(QSize(155, 70));
        nonconnectedLabel->setPixmap(QPixmap(QString::fromUtf8(":/setupwizard/resources/not-connected.png")));
        nonconnectedLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(nonconnectedLabel);

        connectedLabel = new QLabel(EscCalibrationPage);
        connectedLabel->setObjectName(QStringLiteral("connectedLabel"));
        connectedLabel->setEnabled(false);
        connectedLabel->setMinimumSize(QSize(155, 70));
        connectedLabel->setMaximumSize(QSize(155, 70));
        connectedLabel->setPixmap(QPixmap(QString::fromUtf8(":/setupwizard/resources/connected.png")));
        connectedLabel->setScaledContents(true);

        horizontalLayout_3->addWidget(connectedLabel);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);
        outputLow = new QPushButton(EscCalibrationPage);
        outputLow->setObjectName(QStringLiteral("outputLow"));
        outputLow->setEnabled(false);
        outputLow->setMinimumSize(QSize(100, 22));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QLinearGradient gradient(0.507, 0, 0.507, 0.772);
        gradient.setSpread(QGradient::ReflectSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0.208955, QColor(34, 34, 200, 255));
        gradient.setColorAt(0.78607, QColor(6, 6, 150, 255));
        QBrush brush1(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QLinearGradient gradient1(0.507, 0, 0.507, 0.772);
        gradient1.setSpread(QGradient::ReflectSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0.208955, QColor(34, 34, 200, 255));
        gradient1.setColorAt(0.78607, QColor(6, 6, 150, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QLinearGradient gradient2(0.507, 0, 0.507, 0.772);
        gradient2.setSpread(QGradient::ReflectSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0.208955, QColor(34, 34, 200, 255));
        gradient2.setColorAt(0.78607, QColor(6, 6, 150, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QLinearGradient gradient3(0.507, 0, 0.507, 0.772);
        gradient3.setSpread(QGradient::ReflectSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0.208955, QColor(34, 34, 200, 255));
        gradient3.setColorAt(0.78607, QColor(6, 6, 150, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QLinearGradient gradient4(0.507, 0, 0.507, 0.772);
        gradient4.setSpread(QGradient::ReflectSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0.208955, QColor(34, 34, 200, 255));
        gradient4.setColorAt(0.78607, QColor(6, 6, 150, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QLinearGradient gradient5(0.507, 0, 0.507, 0.772);
        gradient5.setSpread(QGradient::ReflectSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0.208955, QColor(34, 34, 200, 255));
        gradient5.setColorAt(0.78607, QColor(6, 6, 150, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QBrush brush7(QColor(159, 158, 158, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        QBrush brush8(QColor(100, 150, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        QBrush brush9(QColor(242, 241, 240, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        outputLow->setPalette(palette);
        outputLow->setStyleSheet(QLatin1String("QPushButton:enabled {\n"
"	background-color: qlineargradient(spread:reflect, x1:0.507, y1:0, x2:0.507, y2:0.772, stop:0.208955 rgba(34, 34, 200, 255), stop:0.78607 rgba(6, 6, 150, 255));\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius: 5;\n"
"}"));
        outputLow->setFlat(true);

        horizontalLayout_4->addWidget(outputLow);

        line = new QFrame(EscCalibrationPage);
        line->setObjectName(QStringLiteral("line"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy);
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setFrameShape(QFrame::HLine);

        horizontalLayout_4->addWidget(line);

        outputLevel = new QLabel(EscCalibrationPage);
        outputLevel->setObjectName(QStringLiteral("outputLevel"));
        outputLevel->setEnabled(false);

        horizontalLayout_4->addWidget(outputLevel);

        line_2 = new QFrame(EscCalibrationPage);
        line_2->setObjectName(QStringLiteral("line_2"));
        sizePolicy.setHeightForWidth(line_2->sizePolicy().hasHeightForWidth());
        line_2->setSizePolicy(sizePolicy);
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        outputHigh = new QPushButton(EscCalibrationPage);
        outputHigh->setObjectName(QStringLiteral("outputHigh"));
        outputHigh->setEnabled(false);
        outputHigh->setMinimumSize(QSize(100, 22));
        outputHigh->setStyleSheet(QLatin1String("QPushButton:enabled {\n"
"	background-color: qlineargradient(spread:reflect, x1:0.507, y1:0, x2:0.507, y2:0.772, stop:0.208955 rgba(200, 14, 14, 255),  stop:0.78607 rgba(160,  6, 6, 255));\n"
"	color: rgb(255, 255, 255);\n"
"	border-radius: 5;\n"
"}"));
        outputHigh->setFlat(true);

        horizontalLayout_4->addWidget(outputHigh);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        startButton = new QPushButton(EscCalibrationPage);
        startButton->setObjectName(QStringLiteral("startButton"));
        startButton->setEnabled(false);
        startButton->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(startButton);

        stopButton = new QPushButton(EscCalibrationPage);
        stopButton->setObjectName(QStringLiteral("stopButton"));
        stopButton->setEnabled(false);
        stopButton->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(stopButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(EscCalibrationPage);

        QMetaObject::connectSlotsByName(EscCalibrationPage);
    } // setupUi

    void retranslateUi(QWizardPage *EscCalibrationPage)
    {
        EscCalibrationPage->setWindowTitle(QApplication::translate("EscCalibrationPage", "WizardPage", 0));
        label->setText(QApplication::translate("EscCalibrationPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">ESC Calibration Procedure</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">As you have selected to use a MultiRotor and Fast / Flashed ESCs, we need to calibrate the endpoints of these ESCs so they can see the full throttle range sent from the flight controller.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\"><span style=\" font-size:10pt;\">This part of the wizard will tell you to connect the battery to your aircraft, before doing so you absolutely </span><span style=\" font-size:10pt; font-weight:600; color:#f30f1d;\">must remove the propellers from all motors</span><span style=\" font-size:10pt;\">. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">The steps to perform this calibration are as follows:</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">1.</span><span style=\" font-size:10pt;\"> Confirm all safety questions,<br /></span><span style=\" font-size:10pt; font-weight:600;\">2.</span><span style=\" font-size:10pt;\"> Press the Start button when it becomes enabled, </span><span style=\" font-size:10pt; font-weight:600;\">batt"
                        "ery not connected</span><span style=\" font-size:10pt;\">,<br /></span><span style=\" font-size:10pt; font-weight:600;\">3.</span><span style=\" font-size:10pt;\"> Connect the battery to your airframe,<br /></span><span style=\" font-size:10pt; font-weight:600;\">4.</span><span style=\" font-size:10pt;\"> Wait for ESC calibration beep(s),<br /></span><span style=\" font-size:10pt; font-weight:600;\">5.</span><span style=\" font-size:10pt;\"> Press the Stop button,<br /></span><span style=\" font-size:10pt; font-weight:600;\">6.</span><span style=\" font-size:10pt;\"> Wait for ESC confirmation beep(s),<br /></span><span style=\" font-size:10pt; font-weight:600;\">7.</span><span style=\" font-size:10pt;\"> Disconnect battery.</span></p></body></html>", 0));
        securityCheckBox1->setText(QApplication::translate("EscCalibrationPage", "I have removed ALL propellers from ALL motors of my vehicle.", 0));
        securityCheckBox2->setText(QApplication::translate("EscCalibrationPage", "The vehicle is NOT powered by any external power source but USB", 0));
        securityCheckBox3->setText(QApplication::translate("EscCalibrationPage", "I confirm i have read and understood the above instructions in full", 0));
        nonconnectedLabel->setText(QString());
        connectedLabel->setText(QString());
        outputLow->setText(QApplication::translate("EscCalibrationPage", "Low/Off", 0));
        outputLevel->setText(QApplication::translate("EscCalibrationPage", "N/A", 0));
        outputHigh->setText(QApplication::translate("EscCalibrationPage", "High", 0));
        startButton->setText(QApplication::translate("EscCalibrationPage", "Start", 0));
        stopButton->setText(QApplication::translate("EscCalibrationPage", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class EscCalibrationPage: public Ui_EscCalibrationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESCCALIBRATIONPAGE_H

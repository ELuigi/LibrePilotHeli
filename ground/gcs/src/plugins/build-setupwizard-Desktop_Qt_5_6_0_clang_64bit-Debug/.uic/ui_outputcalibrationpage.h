/********************************************************************************
** Form generated from reading UI file 'outputcalibrationpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTCALIBRATIONPAGE_H
#define UI_OUTPUTCALIBRATIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_OutputCalibrationPage
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QGraphicsView *vehicleView;
    QStackedWidget *calibrationStack;
    QWidget *intro;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QWidget *motorNeutral;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *motorInfo;
    QCheckBox *calibrateAllMotors;
    QSpacerItem *verticalSpacer_2;
    QLabel *motorPWMValue;
    QSlider *motorNeutralSlider;
    QPushButton *motorNeutralButton;
    QWidget *servoNeutral;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_3;
    QLabel *servoPWMValue;
    QWidget *widget;
    QFormLayout *formLayout;
    QSlider *servoMinAngleSlider;
    QSlider *servoCenterAngleSlider;
    QSlider *servoMaxAngleSlider;
    QCheckBox *reverseCheckbox;
    QLabel *label_1;
    QLabel *label_5;
    QLabel *label_7;
    QPushButton *servoButton;
    QWidget *dualservoNeutral;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QSpacerItem *verticalSpacer;
    QLabel *servoPWMValue1;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QSlider *servoMinAngleSlider1;
    QSlider *servoCenterAngleSlider1;
    QSlider *servoMaxAngleSlider1;
    QCheckBox *reverseCheckbox1;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *servoPWMValue2;
    QWidget *widget2;
    QFormLayout *formLayout_3;
    QSlider *servoMinAngleSlider2;
    QSlider *servoCenterAngleSlider2;
    QSlider *servoMaxAngleSlider2;
    QCheckBox *reverseCheckbox2;
    QLabel *label_14;
    QLabel *label_12;
    QLabel *label_13;
    QPushButton *dualservoButton;

    void setupUi(QWizardPage *OutputCalibrationPage)
    {
        if (OutputCalibrationPage->objectName().isEmpty())
            OutputCalibrationPage->setObjectName(QStringLiteral("OutputCalibrationPage"));
        OutputCalibrationPage->resize(776, 675);
        gridLayout = new QGridLayout(OutputCalibrationPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(OutputCalibrationPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        vehicleView = new QGraphicsView(OutputCalibrationPage);
        vehicleView->setObjectName(QStringLiteral("vehicleView"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vehicleView->sizePolicy().hasHeightForWidth());
        vehicleView->setSizePolicy(sizePolicy);
        vehicleView->setMinimumSize(QSize(200, 200));
        vehicleView->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(vehicleView, 1, 1, 1, 1);

        calibrationStack = new QStackedWidget(OutputCalibrationPage);
        calibrationStack->setObjectName(QStringLiteral("calibrationStack"));
        intro = new QWidget();
        intro->setObjectName(QStringLiteral("intro"));
        verticalLayout_3 = new QVBoxLayout(intro);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(intro);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        calibrationStack->addWidget(intro);
        motorNeutral = new QWidget();
        motorNeutral->setObjectName(QStringLiteral("motorNeutral"));
        verticalLayout_4 = new QVBoxLayout(motorNeutral);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_4 = new QLabel(motorNeutral);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(300, 0));
        label_4->setTextFormat(Qt::RichText);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_4->setWordWrap(true);

        verticalLayout_4->addWidget(label_4);

        motorInfo = new QLabel(motorNeutral);
        motorInfo->setObjectName(QStringLiteral("motorInfo"));
        motorInfo->setTextFormat(Qt::RichText);
        motorInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        motorInfo->setWordWrap(true);

        verticalLayout_4->addWidget(motorInfo);

        calibrateAllMotors = new QCheckBox(motorNeutral);
        calibrateAllMotors->setObjectName(QStringLiteral("calibrateAllMotors"));

        verticalLayout_4->addWidget(calibrateAllMotors);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        motorPWMValue = new QLabel(motorNeutral);
        motorPWMValue->setObjectName(QStringLiteral("motorPWMValue"));

        verticalLayout_4->addWidget(motorPWMValue);

        motorNeutralSlider = new QSlider(motorNeutral);
        motorNeutralSlider->setObjectName(QStringLiteral("motorNeutralSlider"));
        motorNeutralSlider->setEnabled(false);
        motorNeutralSlider->setMinimum(1000);
        motorNeutralSlider->setMaximum(1500);
        motorNeutralSlider->setSingleStep(1);
        motorNeutralSlider->setPageStep(10);
        motorNeutralSlider->setOrientation(Qt::Horizontal);
        motorNeutralSlider->setInvertedAppearance(false);
        motorNeutralSlider->setTickPosition(QSlider::TicksBelow);
        motorNeutralSlider->setTickInterval(20);

        verticalLayout_4->addWidget(motorNeutralSlider);

        motorNeutralButton = new QPushButton(motorNeutral);
        motorNeutralButton->setObjectName(QStringLiteral("motorNeutralButton"));
        motorNeutralButton->setCheckable(true);
        motorNeutralButton->setChecked(false);

        verticalLayout_4->addWidget(motorNeutralButton);

        calibrationStack->addWidget(motorNeutral);
        servoNeutral = new QWidget();
        servoNeutral->setObjectName(QStringLiteral("servoNeutral"));
        verticalLayout_6 = new QVBoxLayout(servoNeutral);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(servoNeutral);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_6->setWordWrap(true);

        verticalLayout_6->addWidget(label_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        servoPWMValue = new QLabel(servoNeutral);
        servoPWMValue->setObjectName(QStringLiteral("servoPWMValue"));

        verticalLayout_6->addWidget(servoPWMValue);

        widget = new QWidget(servoNeutral);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        servoMinAngleSlider = new QSlider(widget);
        servoMinAngleSlider->setObjectName(QStringLiteral("servoMinAngleSlider"));
        servoMinAngleSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border: 1px solid #7"
                        "77;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    border-radius:"
                        " 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoMinAngleSlider->setMinimum(600);
        servoMinAngleSlider->setMaximum(2400);
        servoMinAngleSlider->setValue(1500);
        servoMinAngleSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(0, QFormLayout::FieldRole, servoMinAngleSlider);

        servoCenterAngleSlider = new QSlider(widget);
        servoCenterAngleSlider->setObjectName(QStringLiteral("servoCenterAngleSlider"));
        servoCenterAngleSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border:"
                        " 1px solid #777;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    b"
                        "order-radius: 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoCenterAngleSlider->setMinimum(600);
        servoCenterAngleSlider->setMaximum(2400);
        servoCenterAngleSlider->setValue(1500);
        servoCenterAngleSlider->setOrientation(Qt::Horizontal);

        formLayout->setWidget(1, QFormLayout::FieldRole, servoCenterAngleSlider);

        servoMaxAngleSlider = new QSlider(widget);
        servoMaxAngleSlider->setObjectName(QStringLiteral("servoMaxAngleSlider"));
        servoMaxAngleSlider->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border: 1px solid #7"
                        "77;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    border-radius:"
                        " 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoMaxAngleSlider->setMinimum(600);
        servoMaxAngleSlider->setMaximum(2400);
        servoMaxAngleSlider->setValue(1500);
        servoMaxAngleSlider->setOrientation(Qt::Horizontal);
        servoMaxAngleSlider->setInvertedAppearance(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, servoMaxAngleSlider);

        reverseCheckbox = new QCheckBox(widget);
        reverseCheckbox->setObjectName(QStringLiteral("reverseCheckbox"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, reverseCheckbox);

        label_1 = new QLabel(widget);
        label_1->setObjectName(QStringLiteral("label_1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);


        verticalLayout_6->addWidget(widget);

        servoButton = new QPushButton(servoNeutral);
        servoButton->setObjectName(QStringLiteral("servoButton"));
        servoButton->setCheckable(true);
        servoButton->setChecked(false);

        verticalLayout_6->addWidget(servoButton);

        calibrationStack->addWidget(servoNeutral);
        dualservoNeutral = new QWidget();
        dualservoNeutral->setObjectName(QStringLiteral("dualservoNeutral"));
        verticalLayout_5 = new QVBoxLayout(dualservoNeutral);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_11 = new QLabel(dualservoNeutral);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_11->setWordWrap(true);

        verticalLayout_5->addWidget(label_11);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        servoPWMValue1 = new QLabel(dualservoNeutral);
        servoPWMValue1->setObjectName(QStringLiteral("servoPWMValue1"));

        verticalLayout_5->addWidget(servoPWMValue1);

        widget1 = new QWidget(dualservoNeutral);
        widget1->setObjectName(QStringLiteral("widget1"));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setHorizontalSpacing(6);
        formLayout_2->setVerticalSpacing(6);
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        servoMinAngleSlider1 = new QSlider(widget1);
        servoMinAngleSlider1->setObjectName(QStringLiteral("servoMinAngleSlider1"));
        servoMinAngleSlider1->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border: 1px solid #7"
                        "77;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    border-radius:"
                        " 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoMinAngleSlider1->setMinimum(600);
        servoMinAngleSlider1->setMaximum(2400);
        servoMinAngleSlider1->setValue(1500);
        servoMinAngleSlider1->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, servoMinAngleSlider1);

        servoCenterAngleSlider1 = new QSlider(widget1);
        servoCenterAngleSlider1->setObjectName(QStringLiteral("servoCenterAngleSlider1"));
        servoCenterAngleSlider1->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border:"
                        " 1px solid #777;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    b"
                        "order-radius: 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoCenterAngleSlider1->setMinimum(600);
        servoCenterAngleSlider1->setMaximum(2400);
        servoCenterAngleSlider1->setValue(1500);
        servoCenterAngleSlider1->setOrientation(Qt::Horizontal);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, servoCenterAngleSlider1);

        servoMaxAngleSlider1 = new QSlider(widget1);
        servoMaxAngleSlider1->setObjectName(QStringLiteral("servoMaxAngleSlider1"));
        servoMaxAngleSlider1->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border: 1px solid #7"
                        "77;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    border-radius:"
                        " 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoMaxAngleSlider1->setMinimum(600);
        servoMaxAngleSlider1->setMaximum(2400);
        servoMaxAngleSlider1->setValue(1500);
        servoMaxAngleSlider1->setOrientation(Qt::Horizontal);
        servoMaxAngleSlider1->setInvertedAppearance(false);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, servoMaxAngleSlider1);

        reverseCheckbox1 = new QCheckBox(widget1);
        reverseCheckbox1->setObjectName(QStringLiteral("reverseCheckbox1"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, reverseCheckbox1);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        label_10 = new QLabel(widget1);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_10);


        verticalLayout_5->addWidget(widget1);

        servoPWMValue2 = new QLabel(dualservoNeutral);
        servoPWMValue2->setObjectName(QStringLiteral("servoPWMValue2"));

        verticalLayout_5->addWidget(servoPWMValue2);

        widget2 = new QWidget(dualservoNeutral);
        widget2->setObjectName(QStringLiteral("widget2"));
        formLayout_3 = new QFormLayout(widget2);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setHorizontalSpacing(6);
        formLayout_3->setVerticalSpacing(6);
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        servoMinAngleSlider2 = new QSlider(widget2);
        servoMinAngleSlider2->setObjectName(QStringLiteral("servoMinAngleSlider2"));
        servoMinAngleSlider2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border: 1px solid #7"
                        "77;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    border-radius:"
                        " 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoMinAngleSlider2->setMinimum(600);
        servoMinAngleSlider2->setMaximum(2400);
        servoMinAngleSlider2->setValue(1500);
        servoMinAngleSlider2->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, servoMinAngleSlider2);

        servoCenterAngleSlider2 = new QSlider(widget2);
        servoCenterAngleSlider2->setObjectName(QStringLiteral("servoCenterAngleSlider2"));
        servoCenterAngleSlider2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border:"
                        " 1px solid #777;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    b"
                        "order-radius: 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoCenterAngleSlider2->setMinimum(600);
        servoCenterAngleSlider2->setMaximum(2400);
        servoCenterAngleSlider2->setValue(1500);
        servoCenterAngleSlider2->setOrientation(Qt::Horizontal);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, servoCenterAngleSlider2);

        servoMaxAngleSlider2 = new QSlider(widget2);
        servoMaxAngleSlider2->setObjectName(QStringLiteral("servoMaxAngleSlider2"));
        servoMaxAngleSlider2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    height: 6px;\n"
"    border-radius: 2px;\n"
"    margin 10px 10px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    height: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    height: 28px;\n"
"    margin: -2px 0;\n"
"    border-radius: 3px;\n"
"    border: 1px solid #7"
                        "77;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    border: 1px solid rgb(196, 196, 196);\n"
"    background: white;\n"
"    width: 6px;\n"
"    border-radius: 2px;\n"
"    margin 0px -10px;\n"
"    margin-top: 5px;\n"
"    margin-bottom: 5px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #fff;\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #eee;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical {\n"
"    background: rgb(78, 147, 246);\n"
"    border: 1px solid #777;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:vertical:disabled {\n"
"    background: #ccc;\n"
"    border: 1px solid #999;\n"
"    width: 1px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: rgb(196, 196, 196);\n"
"    width: 18px;\n"
"    margin: -6 -6;\n"
"    border-radius:"
                        " 3px;\n"
"    border: 1px solid #777;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1, stop:0 #fff, stop:1 #ddd);\n"
"    border: 1px solid #444;\n"
"    border-radius: 4px;\n"
"}"));
        servoMaxAngleSlider2->setMinimum(600);
        servoMaxAngleSlider2->setMaximum(2400);
        servoMaxAngleSlider2->setValue(1500);
        servoMaxAngleSlider2->setOrientation(Qt::Horizontal);
        servoMaxAngleSlider2->setInvertedAppearance(false);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, servoMaxAngleSlider2);

        reverseCheckbox2 = new QCheckBox(widget2);
        reverseCheckbox2->setObjectName(QStringLiteral("reverseCheckbox2"));

        formLayout_3->setWidget(3, QFormLayout::SpanningRole, reverseCheckbox2);

        label_14 = new QLabel(widget2);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_14);

        label_12 = new QLabel(widget2);
        label_12->setObjectName(QStringLiteral("label_12"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(widget2);
        label_13->setObjectName(QStringLiteral("label_13"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_13);


        verticalLayout_5->addWidget(widget2);

        dualservoButton = new QPushButton(dualservoNeutral);
        dualservoButton->setObjectName(QStringLiteral("dualservoButton"));
        dualservoButton->setCheckable(true);
        dualservoButton->setChecked(false);

        verticalLayout_5->addWidget(dualservoButton);

        calibrationStack->addWidget(dualservoNeutral);

        gridLayout->addWidget(calibrationStack, 1, 0, 1, 1);


        retranslateUi(OutputCalibrationPage);

        calibrationStack->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(OutputCalibrationPage);
    } // setupUi

    void retranslateUi(QWizardPage *OutputCalibrationPage)
    {
        OutputCalibrationPage->setWindowTitle(QApplication::translate("OutputCalibrationPage", "WizardPage", 0));
        label_2->setText(QApplication::translate("OutputCalibrationPage", "Output calibration", 0));
        label_3->setText(QApplication::translate("OutputCalibrationPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:10pt;\">It is now time to calibrate the output levels for the signals controlling your vehicle. </span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:10pt; font-weight:600; color:#ff0000;\">VERY IMPORTANT!</span><span style=\" font-family:'Lucida Grande'; font-size:10pt;\"><br /></span><span style=\" font-family:'Lucida Grande'; font-size:10pt; font-wei"
                        "ght:600; color:#ff0000;\">REMOVE ALL PROPELLERS FROM THE VEHICLE BEFORE PROCEEDING!</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:10pt;\">Connect all components according to the illustration on the summary page, and provide power using an external power supply such as a battery before continuing.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Lucida Grande'; font-size:10pt;\">Depending on what vehicle you have selected, both the motors controlled by ESCs and/or servos controlled directly by the flight controller may have to be calibrated. The following steps will guide you safely through this process. </span></p></body></html>", 0));
        label_4->setText(QApplication::translate("OutputCalibrationPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">In this step we will set the neutral rate for the motor highlighted in the illustration to the right. <br />Please pay attention to the details and in particular the motors position and its rotation direction. Ensure the motors are spinning in the correct direction as shown in the diagram. Swap any 2 motor wires to change the direction of a motor. </span></p></body></html>", 0));
        motorInfo->setText(QApplication::translate("OutputCalibrationPage", "<html><head/><body><p><span style=\" font-size:10pt;\">To find </span><span style=\" font-size:10pt; font-weight:600;\">the neutral rate for this motor</span><span style=\" font-size:10pt;\">, press the Start button below and slide the slider to the right until the motor just starts to spin stable. <br/><br/>When done press button again to stop.</span></p></body></html>", 0));
        calibrateAllMotors->setText(QApplication::translate("OutputCalibrationPage", "Calibrate all motor outputs at the same time", 0));
        motorPWMValue->setText(QApplication::translate("OutputCalibrationPage", "Output value: 1000\302\265s", 0));
        motorNeutralButton->setText(QApplication::translate("OutputCalibrationPage", "Start", 0));
        label_6->setText(QApplication::translate("OutputCalibrationPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">This step calibrates</span><span style=\" font-size:10pt; font-weight:600;\"> the minimum, center and maximum angle of the servo</span><span style=\" font-size:10pt;\">. To set the angles for this servo, press the Start button below and slide the slider for the angle to set. The servo will follow the sliders position. <br />When done press button again to stop.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;"
                        "\">Check Reverse to reverse servo action if green arrow </span><a name=\"result_box\"></a>does not match the movement of the servo.</p></body></html>", 0));
        servoPWMValue->setText(QApplication::translate("OutputCalibrationPage", "Output value: 1000\302\265s", 0));
        reverseCheckbox->setText(QApplication::translate("OutputCalibrationPage", "Reverse", 0));
        label_1->setText(QApplication::translate("OutputCalibrationPage", "Min", 0));
        label_5->setText(QApplication::translate("OutputCalibrationPage", "Center", 0));
        label_7->setText(QApplication::translate("OutputCalibrationPage", "Max", 0));
        servoButton->setText(QApplication::translate("OutputCalibrationPage", "Start", 0));
        label_11->setText(QApplication::translate("OutputCalibrationPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">This step calibrates</span><span style=\" font-size:10pt; font-weight:600;\"> the minimum, center and maximum angle of the two servo</span><span style=\" font-size:10pt;\">, at same time. To set the angles for those servo, press the Start button below and slide the slider for the angle to set. The servo will follow the sliders position. Please adjust and compare the two servo's movement.<br />When done press button again to stop.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">Check Reverse to reverse servo action if green arrow </span><a name=\"result_box\"></a>does not match the movement of the servo.</p></body></html>", 0));
        servoPWMValue1->setText(QApplication::translate("OutputCalibrationPage", "Output value: 1000\302\265s", 0));
        reverseCheckbox1->setText(QApplication::translate("OutputCalibrationPage", "Reverse", 0));
        label_8->setText(QApplication::translate("OutputCalibrationPage", "Min", 0));
        label_9->setText(QApplication::translate("OutputCalibrationPage", "Center", 0));
        label_10->setText(QApplication::translate("OutputCalibrationPage", "Max", 0));
        servoPWMValue2->setText(QApplication::translate("OutputCalibrationPage", "Output value: 1000\302\265s", 0));
        reverseCheckbox2->setText(QApplication::translate("OutputCalibrationPage", "Reverse", 0));
        label_14->setText(QApplication::translate("OutputCalibrationPage", "Min", 0));
        label_12->setText(QApplication::translate("OutputCalibrationPage", "Center", 0));
        label_13->setText(QApplication::translate("OutputCalibrationPage", "Max", 0));
        dualservoButton->setText(QApplication::translate("OutputCalibrationPage", "Start", 0));
    } // retranslateUi

};

namespace Ui {
    class OutputCalibrationPage: public Ui_OutputCalibrationPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTCALIBRATIONPAGE_H

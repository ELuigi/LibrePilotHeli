/********************************************************************************
** Form generated from reading UI file 'vehiclepage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLEPAGE_H
#define UI_VEHICLEPAGE_H

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

class Ui_VehiclePage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *multirotorButton;
    QToolButton *fixedwingButton;
    QToolButton *heliButton;
    QToolButton *surfaceButton;

    void setupUi(QWizardPage *VehiclePage)
    {
        if (VehiclePage->objectName().isEmpty())
            VehiclePage->setObjectName(QStringLiteral("VehiclePage"));
        VehiclePage->resize(600, 400);
        verticalLayout = new QVBoxLayout(VehiclePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(VehiclePage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        multirotorButton = new QToolButton(VehiclePage);
        multirotorButton->setObjectName(QStringLiteral("multirotorButton"));
        QFont font;
        font.setPointSize(10);
        multirotorButton->setFont(font);
        multirotorButton->setAutoFillBackground(false);
        multirotorButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-multi-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-multi-down.png"), QSize(), QIcon::Normal, QIcon::On);
        multirotorButton->setIcon(icon);
        multirotorButton->setIconSize(QSize(100, 100));
        multirotorButton->setCheckable(true);
        multirotorButton->setChecked(true);
        multirotorButton->setAutoExclusive(true);
        multirotorButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        multirotorButton->setAutoRaise(true);

        horizontalLayout->addWidget(multirotorButton);

        fixedwingButton = new QToolButton(VehiclePage);
        fixedwingButton->setObjectName(QStringLiteral("fixedwingButton"));
        fixedwingButton->setEnabled(true);
        fixedwingButton->setFont(font);
        fixedwingButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/setupwizard/resources/bttn-plane-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/setupwizard/resources/bttn-plane-down.png"), QSize(), QIcon::Normal, QIcon::On);
        fixedwingButton->setIcon(icon1);
        fixedwingButton->setIconSize(QSize(100, 100));
        fixedwingButton->setCheckable(true);
        fixedwingButton->setChecked(false);
        fixedwingButton->setAutoExclusive(true);
        fixedwingButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        fixedwingButton->setAutoRaise(true);

        horizontalLayout->addWidget(fixedwingButton);

        heliButton = new QToolButton(VehiclePage);
        heliButton->setObjectName(QStringLiteral("heliButton"));
        heliButton->setEnabled(true);
        heliButton->setFont(font);
        heliButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/setupwizard/resources/bttn-heli-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/setupwizard/resources/bttn-heli-down.png"), QSize(), QIcon::Normal, QIcon::On);
        heliButton->setIcon(icon2);
        heliButton->setIconSize(QSize(100, 100));
        heliButton->setCheckable(true);
        heliButton->setAutoExclusive(true);
        heliButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        heliButton->setAutoRaise(true);

        horizontalLayout->addWidget(heliButton);

        surfaceButton = new QToolButton(VehiclePage);
        surfaceButton->setObjectName(QStringLiteral("surfaceButton"));
        surfaceButton->setEnabled(true);
        surfaceButton->setFont(font);
        surfaceButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/setupwizard/resources/bttn-land-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/setupwizard/resources/bttn-land-down.png"), QSize(), QIcon::Normal, QIcon::On);
        surfaceButton->setIcon(icon3);
        surfaceButton->setIconSize(QSize(100, 100));
        surfaceButton->setCheckable(true);
        surfaceButton->setAutoExclusive(true);
        surfaceButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        surfaceButton->setAutoRaise(true);

        horizontalLayout->addWidget(surfaceButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(VehiclePage);

        QMetaObject::connectSlotsByName(VehiclePage);
    } // setupUi

    void retranslateUi(QWizardPage *VehiclePage)
    {
        VehiclePage->setWindowTitle(QApplication::translate("VehiclePage", "WizardPage", 0));
        label_2->setText(QApplication::translate("VehiclePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Vehicle Type Selection</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">To continue, the wizard needs to know what type of vehicle the flight controller board is going to be used with. This step is crucial since much of the following configuration is unique per vehicle type.</span></p>\n"
"<p style=\" margin-top:12"
                        "px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Go ahead and select the type of vehicle for which you want to create a configuration.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">The current version only provides functionality for Multirotors, Fixed-wing aircraft and Ground vehicle.</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        multirotorButton->setToolTip(QApplication::translate("VehiclePage", "Tricopter, Quadcopter, Hexacopter", 0));
#endif // QT_NO_TOOLTIP
        multirotorButton->setText(QApplication::translate("VehiclePage", "Multirotor", 0));
#ifndef QT_NO_TOOLTIP
        fixedwingButton->setToolTip(QApplication::translate("VehiclePage", "Airplane, Sloper, Jet", 0));
#endif // QT_NO_TOOLTIP
        fixedwingButton->setText(QApplication::translate("VehiclePage", "Fixed wing", 0));
#ifndef QT_NO_TOOLTIP
        heliButton->setToolTip(QApplication::translate("VehiclePage", "CCPM Helicopters", 0));
#endif // QT_NO_TOOLTIP
        heliButton->setText(QApplication::translate("VehiclePage", "Helicopter", 0));
#ifndef QT_NO_TOOLTIP
        surfaceButton->setToolTip(QApplication::translate("VehiclePage", "Car, Boat, U-Boat", 0));
#endif // QT_NO_TOOLTIP
        surfaceButton->setText(QApplication::translate("VehiclePage", "Surface", 0));
    } // retranslateUi

};

namespace Ui {
    class VehiclePage: public Ui_VehiclePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLEPAGE_H

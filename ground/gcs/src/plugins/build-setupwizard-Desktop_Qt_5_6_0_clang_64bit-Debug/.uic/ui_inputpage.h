/********************************************************************************
** Form generated from reading UI file 'inputpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPAGE_H
#define UI_INPUTPAGE_H

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

class Ui_InputPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *pwmButton;
    QToolButton *ppmButton;
    QToolButton *sbusButton;
    QHBoxLayout *horizontalLayout;
    QToolButton *spectrumButton;
    QToolButton *multiplexButton;
    QToolButton *graupnerButton;
    QToolButton *jetiButton;
    QToolButton *flyskyButton;

    void setupUi(QWizardPage *InputPage)
    {
        if (InputPage->objectName().isEmpty())
            InputPage->setObjectName(QStringLiteral("InputPage"));
        InputPage->resize(753, 494);
        verticalLayout = new QVBoxLayout(InputPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(InputPage);
        label->setObjectName(QStringLiteral("label"));
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 20);
        pwmButton = new QToolButton(InputPage);
        pwmButton->setObjectName(QStringLiteral("pwmButton"));
        QFont font;
        font.setPointSize(10);
        pwmButton->setFont(font);
        pwmButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-pwm-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-pwm-down.png"), QSize(), QIcon::Normal, QIcon::On);
        pwmButton->setIcon(icon);
        pwmButton->setIconSize(QSize(100, 100));
        pwmButton->setCheckable(true);
        pwmButton->setChecked(true);
        pwmButton->setAutoExclusive(true);
        pwmButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pwmButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(pwmButton);

        ppmButton = new QToolButton(InputPage);
        ppmButton->setObjectName(QStringLiteral("ppmButton"));
        ppmButton->setFont(font);
        ppmButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/setupwizard/resources/bttn-ppm-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/setupwizard/resources/bttn-ppm-down.png"), QSize(), QIcon::Normal, QIcon::On);
        ppmButton->setIcon(icon1);
        ppmButton->setIconSize(QSize(100, 100));
        ppmButton->setCheckable(true);
        ppmButton->setAutoExclusive(true);
        ppmButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ppmButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(ppmButton);

        sbusButton = new QToolButton(InputPage);
        sbusButton->setObjectName(QStringLiteral("sbusButton"));
        sbusButton->setFont(font);
        sbusButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/setupwizard/resources/bttn-sbus-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/setupwizard/resources/bttn-sbus-down.png"), QSize(), QIcon::Normal, QIcon::On);
        sbusButton->setIcon(icon2);
        sbusButton->setIconSize(QSize(100, 100));
        sbusButton->setCheckable(true);
        sbusButton->setAutoExclusive(true);
        sbusButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        sbusButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(sbusButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        spectrumButton = new QToolButton(InputPage);
        spectrumButton->setObjectName(QStringLiteral("spectrumButton"));
        spectrumButton->setFont(font);
        spectrumButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/setupwizard/resources/bttn-sat-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QStringLiteral(":/setupwizard/resources/bttn-sat-down.png"), QSize(), QIcon::Normal, QIcon::On);
        spectrumButton->setIcon(icon3);
        spectrumButton->setIconSize(QSize(100, 100));
        spectrumButton->setCheckable(true);
        spectrumButton->setAutoExclusive(true);
        spectrumButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        spectrumButton->setAutoRaise(true);

        horizontalLayout->addWidget(spectrumButton);

        multiplexButton = new QToolButton(InputPage);
        multiplexButton->setObjectName(QStringLiteral("multiplexButton"));
        multiplexButton->setFont(font);
        multiplexButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/setupwizard/resources/bttn-srxl-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QStringLiteral(":/setupwizard/resources/bttn-srxl-down.png"), QSize(), QIcon::Normal, QIcon::On);
        multiplexButton->setIcon(icon4);
        multiplexButton->setIconSize(QSize(100, 100));
        multiplexButton->setCheckable(true);
        multiplexButton->setAutoExclusive(true);
        multiplexButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        multiplexButton->setAutoRaise(true);

        horizontalLayout->addWidget(multiplexButton);

        graupnerButton = new QToolButton(InputPage);
        graupnerButton->setObjectName(QStringLiteral("graupnerButton"));
        graupnerButton->setFont(font);
        graupnerButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/setupwizard/resources/bttn-hott-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QStringLiteral(":/setupwizard/resources/bttn-hott-down.png"), QSize(), QIcon::Normal, QIcon::On);
        graupnerButton->setIcon(icon5);
        graupnerButton->setIconSize(QSize(100, 100));
        graupnerButton->setCheckable(true);
        graupnerButton->setAutoExclusive(true);
        graupnerButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        graupnerButton->setAutoRaise(true);

        horizontalLayout->addWidget(graupnerButton);

        jetiButton = new QToolButton(InputPage);
        jetiButton->setObjectName(QStringLiteral("jetiButton"));
        jetiButton->setFont(font);
        jetiButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/setupwizard/resources/bttn-exbus-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QStringLiteral(":/setupwizard/resources/bttn-exbus-down.png"), QSize(), QIcon::Normal, QIcon::On);
        jetiButton->setIcon(icon6);
        jetiButton->setIconSize(QSize(100, 100));
        jetiButton->setCheckable(true);
        jetiButton->setAutoExclusive(true);
        jetiButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        jetiButton->setAutoRaise(true);

        horizontalLayout->addWidget(jetiButton);

        flyskyButton = new QToolButton(InputPage);
        flyskyButton->setObjectName(QStringLiteral("flyskyButton"));
        flyskyButton->setFont(font);
        flyskyButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/setupwizard/resources/bttn-ibus-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon7.addFile(QStringLiteral(":/setupwizard/resources/bttn-ibus-down.png"), QSize(), QIcon::Normal, QIcon::On);
        flyskyButton->setIcon(icon7);
        flyskyButton->setIconSize(QSize(100, 100));
        flyskyButton->setCheckable(true);
        flyskyButton->setAutoExclusive(true);
        flyskyButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        flyskyButton->setAutoRaise(true);

        horizontalLayout->addWidget(flyskyButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(InputPage);

        QMetaObject::connectSlotsByName(InputPage);
    } // setupUi

    void retranslateUi(QWizardPage *InputPage)
    {
        InputPage->setWindowTitle(QApplication::translate("InputPage", "WizardPage", 0));
        label->setText(QApplication::translate("InputPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Input Signal Configuration</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">The flight controller supports many different types of input signals. Please select the type of input that matches your receiver configuration. If you are unsure, just leave the default option selected and continue the wizard.</span></p>\n"
""
                        "<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Some input options require the flight controller to be rebooted before the changes can take place. If an option that requires a reboot is selected, you will be instructed to do so on the next page of this wizard.</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        pwmButton->setToolTip(QApplication::translate("InputPage", "PWM - One cable per channel", 0));
#endif // QT_NO_TOOLTIP
        pwmButton->setText(QApplication::translate("InputPage", "PWM", 0));
#ifndef QT_NO_TOOLTIP
        ppmButton->setToolTip(QApplication::translate("InputPage", "PPM - One cable for all channels", 0));
#endif // QT_NO_TOOLTIP
        ppmButton->setText(QApplication::translate("InputPage", "PPM", 0));
#ifndef QT_NO_TOOLTIP
        sbusButton->setToolTip(QApplication::translate("InputPage", "Futaba S-BUS", 0));
#endif // QT_NO_TOOLTIP
        sbusButton->setText(QApplication::translate("InputPage", "S.Bus", 0));
#ifndef QT_NO_TOOLTIP
        spectrumButton->setToolTip(QApplication::translate("InputPage", "Spektrum Satellite", 0));
#endif // QT_NO_TOOLTIP
        spectrumButton->setText(QApplication::translate("InputPage", "DSM Sat", 0));
#ifndef QT_NO_TOOLTIP
        multiplexButton->setToolTip(QApplication::translate("InputPage", "Multiplex SRXL", 0));
#endif // QT_NO_TOOLTIP
        multiplexButton->setText(QApplication::translate("InputPage", "SRXL", 0));
#ifndef QT_NO_TOOLTIP
        graupnerButton->setToolTip(QApplication::translate("InputPage", "Graupner HoTT", 0));
#endif // QT_NO_TOOLTIP
        graupnerButton->setText(QApplication::translate("InputPage", "HoTT", 0));
#ifndef QT_NO_TOOLTIP
        jetiButton->setToolTip(QApplication::translate("InputPage", "Jeti EX.Bus", 0));
#endif // QT_NO_TOOLTIP
        jetiButton->setText(QApplication::translate("InputPage", "EX.Bus", 0));
#ifndef QT_NO_TOOLTIP
        flyskyButton->setToolTip(QApplication::translate("InputPage", "FlySky IBus", 0));
#endif // QT_NO_TOOLTIP
        flyskyButton->setText(QApplication::translate("InputPage", "IBus", 0));
    } // retranslateUi

};

namespace Ui {
    class InputPage: public Ui_InputPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPAGE_H

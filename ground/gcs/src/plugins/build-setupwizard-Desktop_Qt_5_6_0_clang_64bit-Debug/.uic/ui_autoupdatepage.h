/********************************************************************************
** Form generated from reading UI file 'autoupdatepage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOUPDATEPAGE_H
#define UI_AUTOUPDATEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_AutoUpdatePage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QCheckBox *eraseSettings;
    QHBoxLayout *horizontalLayout;
    QToolButton *startUpdate;
    QVBoxLayout *verticalLayout_2;
    QLabel *statusLabel;
    QProgressBar *levellinProgressBar;
    QLabel *progressLabel;

    void setupUi(QWizardPage *AutoUpdatePage)
    {
        if (AutoUpdatePage->objectName().isEmpty())
            AutoUpdatePage->setObjectName(QStringLiteral("AutoUpdatePage"));
        AutoUpdatePage->resize(600, 400);
        verticalLayout = new QVBoxLayout(AutoUpdatePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(AutoUpdatePage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        eraseSettings = new QCheckBox(AutoUpdatePage);
        eraseSettings->setObjectName(QStringLiteral("eraseSettings"));
        eraseSettings->setChecked(true);

        verticalLayout->addWidget(eraseSettings, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startUpdate = new QToolButton(AutoUpdatePage);
        startUpdate->setObjectName(QStringLiteral("startUpdate"));
        startUpdate->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-upgrade-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-upgrade-down.png"), QSize(), QIcon::Normal, QIcon::On);
        startUpdate->setIcon(icon);
        startUpdate->setIconSize(QSize(200, 70));

        horizontalLayout->addWidget(startUpdate);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        statusLabel = new QLabel(AutoUpdatePage);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));

        verticalLayout_2->addWidget(statusLabel);

        levellinProgressBar = new QProgressBar(AutoUpdatePage);
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

        verticalLayout_2->addWidget(levellinProgressBar);


        verticalLayout->addLayout(verticalLayout_2);

        progressLabel = new QLabel(AutoUpdatePage);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));

        verticalLayout->addWidget(progressLabel);


        retranslateUi(AutoUpdatePage);

        QMetaObject::connectSlotsByName(AutoUpdatePage);
    } // setupUi

    void retranslateUi(QWizardPage *AutoUpdatePage)
    {
        AutoUpdatePage->setWindowTitle(QApplication::translate("AutoUpdatePage", "WizardPage", 0));
        label->setText(QApplication::translate("AutoUpdatePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Firmware Update</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">It is necessary that your firmware and ground control software are the same version.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS "
                        "Shell Dlg 2'; font-size:10pt;\">When you are ready you can start the upgrade below by pushing the button. It is critical that nothing disturbs the board while the firmware is being written.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">It is recommended that you erase all settings on the board when upgrading firmware. Using saved settings for a previous version of the firmware </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600;\">may result in undefined behaviour</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> and in worst case danger. It is possible to suppress the erase by deselecting the check box below.</span></p></body></html>", 0));
        eraseSettings->setText(QApplication::translate("AutoUpdatePage", "Erase all settings", 0));
#ifndef QT_NO_TOOLTIP
        startUpdate->setToolTip(QApplication::translate("AutoUpdatePage", "Upgrade now", 0));
#endif // QT_NO_TOOLTIP
        startUpdate->setText(QApplication::translate("AutoUpdatePage", "Upgrade", 0));
        statusLabel->setText(QApplication::translate("AutoUpdatePage", "Ready...", 0));
        levellinProgressBar->setFormat(QString());
        progressLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AutoUpdatePage: public Ui_AutoUpdatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOUPDATEPAGE_H

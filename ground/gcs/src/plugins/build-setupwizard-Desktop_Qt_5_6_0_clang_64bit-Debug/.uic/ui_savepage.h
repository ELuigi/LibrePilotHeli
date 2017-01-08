/********************************************************************************
** Form generated from reading UI file 'savepage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEPAGE_H
#define UI_SAVEPAGE_H

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

class Ui_SavePage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QToolButton *saveButton;
    QLabel *saveProgressLabel;
    QProgressBar *saveProgressBar;

    void setupUi(QWizardPage *SavePage)
    {
        if (SavePage->objectName().isEmpty())
            SavePage->setObjectName(QStringLiteral("SavePage"));
        SavePage->resize(600, 400);
        verticalLayout = new QVBoxLayout(SavePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SavePage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        saveButton = new QToolButton(SavePage);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setStyleSheet(QStringLiteral("QToolButton { border: none }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-save-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-save-down.png"), QSize(), QIcon::Normal, QIcon::On);
        saveButton->setIcon(icon);
        saveButton->setIconSize(QSize(200, 70));
        saveButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(saveButton);


        verticalLayout->addLayout(horizontalLayout);

        saveProgressLabel = new QLabel(SavePage);
        saveProgressLabel->setObjectName(QStringLiteral("saveProgressLabel"));
        QFont font;
        font.setPointSize(10);
        saveProgressLabel->setFont(font);

        verticalLayout->addWidget(saveProgressLabel);

        saveProgressBar = new QProgressBar(SavePage);
        saveProgressBar->setObjectName(QStringLiteral("saveProgressBar"));
        saveProgressBar->setStyleSheet(QLatin1String("QProgressBar {\n"
"     border: 2px solid grey;\n"
"     border-radius: 5px;\n"
"     text-align: center;\n"
" }\n"
"QProgressBar::chunk {\n"
"     background-color: #3D6699;\n"
"     width: 10px;\n"
"     margin: 0.5px;\n"
" }"));
        saveProgressBar->setValue(0);

        verticalLayout->addWidget(saveProgressBar);


        retranslateUi(SavePage);

        QMetaObject::connectSlotsByName(SavePage);
    } // setupUi

    void retranslateUi(QWizardPage *SavePage)
    {
        SavePage->setWindowTitle(QApplication::translate("SavePage", "WizardPage", 0));
        label->setText(QApplication::translate("SavePage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Configuration ready to save</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">The wizard is now ready to save the configuration directly to your flight controller. </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\""
                        " font-family:'MS Shell Dlg 2'; font-size:10pt;\">If any of the selections made in this wizard require a reboot of the controller, then power cycling the flight controller board will have to be performed after you save in this step.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Press the Save button to save the configuration.</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        saveButton->setToolTip(QApplication::translate("SavePage", "Write configuration to controller", 0));
#endif // QT_NO_TOOLTIP
        saveButton->setText(QApplication::translate("SavePage", "Save", 0));
        saveProgressLabel->setText(QApplication::translate("SavePage", "Ready...", 0));
        saveProgressBar->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class SavePage: public Ui_SavePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEPAGE_H

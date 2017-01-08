/********************************************************************************
** Form generated from reading UI file 'summarypage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUMMARYPAGE_H
#define UI_SUMMARYPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_SummaryPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QTextEdit *configurationSummary;
    QToolButton *illustrationButton;

    void setupUi(QWizardPage *SummaryPage)
    {
        if (SummaryPage->objectName().isEmpty())
            SummaryPage->setObjectName(QStringLiteral("SummaryPage"));
        SummaryPage->resize(600, 400);
        verticalLayout = new QVBoxLayout(SummaryPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SummaryPage);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 4, -1, -1);
        configurationSummary = new QTextEdit(SummaryPage);
        configurationSummary->setObjectName(QStringLiteral("configurationSummary"));
        configurationSummary->setMaximumSize(QSize(16777215, 220));
        QFont font;
        font.setPointSize(10);
        configurationSummary->setFont(font);
        configurationSummary->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        configurationSummary->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        configurationSummary->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(configurationSummary);

        illustrationButton = new QToolButton(SummaryPage);
        illustrationButton->setObjectName(QStringLiteral("illustrationButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(illustrationButton->sizePolicy().hasHeightForWidth());
        illustrationButton->setSizePolicy(sizePolicy);
        illustrationButton->setMinimumSize(QSize(0, 0));
        illustrationButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/setupwizard/resources/bttn-illustration-color-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        illustrationButton->setIcon(icon);
        illustrationButton->setIconSize(QSize(210, 210));
        illustrationButton->setCheckable(false);
        illustrationButton->setChecked(false);
        illustrationButton->setAutoExclusive(true);
        illustrationButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout->addWidget(illustrationButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SummaryPage);

        QMetaObject::connectSlotsByName(SummaryPage);
    } // setupUi

    void retranslateUi(QWizardPage *SummaryPage)
    {
        SummaryPage->setWindowTitle(QApplication::translate("SummaryPage", "WizardPage", 0));
        label->setText(QApplication::translate("SummaryPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Cantarell'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">Configuration Summary</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">The first part of this wizard is now complete. All information required to create a basic flight controller configuration for a specific vehicle has been collected.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px;"
                        " margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">Below is a summary of the configuration and a button that links to a diagram illustrating how to connect required hardware and the flight controller with the current configuration.</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\">The following steps require that your flight controller is connected according to the diagram, remains connected to the computer by USB, and that you have a battery ready but </span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:600;\">do not</span><span style=\" font-family:'MS Shell Dlg 2'; font-size:10pt;\"> connect it right now, you will be told when to in later steps of this wizard.</span></p></body></html>", 0));
#ifndef QT_NO_TOOLTIP
        illustrationButton->setToolTip(QApplication::translate("SummaryPage", "Show connection diagram for configuration", 0));
#endif // QT_NO_TOOLTIP
        illustrationButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SummaryPage: public Ui_SummaryPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUMMARYPAGE_H

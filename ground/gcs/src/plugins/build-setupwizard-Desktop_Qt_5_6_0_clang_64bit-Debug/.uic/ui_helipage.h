/********************************************************************************
** Form generated from reading UI file 'helipage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELIPAGE_H
#define UI_HELIPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_HeliPage
{
public:
    QLabel *label_2;

    void setupUi(QWizardPage *HeliPage)
    {
        if (HeliPage->objectName().isEmpty())
            HeliPage->setObjectName(QStringLiteral("HeliPage"));
        HeliPage->resize(600, 400);
        label_2 = new QLabel(HeliPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 500, 41));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_2->setWordWrap(true);

        retranslateUi(HeliPage);

        QMetaObject::connectSlotsByName(HeliPage);
    } // setupUi

    void retranslateUi(QWizardPage *HeliPage)
    {
        HeliPage->setWindowTitle(QApplication::translate("HeliPage", "WizardPage", 0));
        label_2->setText(QApplication::translate("HeliPage", "<html><head/><body><p align=\"center\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">The Helicopter section of the Setup Wizard is not yet implemented</span><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class HeliPage: public Ui_HeliPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELIPAGE_H

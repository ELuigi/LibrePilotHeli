/********************************************************************************
** Form generated from reading UI file 'notyetimplementedpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTYETIMPLEMENTEDPAGE_H
#define UI_NOTYETIMPLEMENTEDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_NotYetImplementedPage
{
public:
    QLabel *label_2;

    void setupUi(QWizardPage *NotYetImplementedPage)
    {
        if (NotYetImplementedPage->objectName().isEmpty())
            NotYetImplementedPage->setObjectName(QStringLiteral("NotYetImplementedPage"));
        NotYetImplementedPage->resize(600, 400);
        label_2 = new QLabel(NotYetImplementedPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 170, 551, 51));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);

        retranslateUi(NotYetImplementedPage);

        QMetaObject::connectSlotsByName(NotYetImplementedPage);
    } // setupUi

    void retranslateUi(QWizardPage *NotYetImplementedPage)
    {
        NotYetImplementedPage->setWindowTitle(QApplication::translate("NotYetImplementedPage", "WizardPage", 0));
        label_2->setText(QApplication::translate("NotYetImplementedPage", "<html><head/><body><p align=\"center\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600;\">This section of the Setup Wizard is not yet implemented</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class NotYetImplementedPage: public Ui_NotYetImplementedPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTYETIMPLEMENTEDPAGE_H

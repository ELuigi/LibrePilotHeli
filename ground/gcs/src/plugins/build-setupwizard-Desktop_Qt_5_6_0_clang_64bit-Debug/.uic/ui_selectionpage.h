/********************************************************************************
** Form generated from reading UI file 'selectionpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTIONPAGE_H
#define UI_SELECTIONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_SelectionPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *text;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *typeCombo;
    QTextEdit *typeDescription;
    QGraphicsView *typeGraphicsView;

    void setupUi(QWizardPage *SelectionPage)
    {
        if (SelectionPage->objectName().isEmpty())
            SelectionPage->setObjectName(QStringLiteral("SelectionPage"));
        SelectionPage->resize(600, 400);
        verticalLayout = new QVBoxLayout(SelectionPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SelectionPage);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setText(QStringLiteral("placeholder_text"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        text = new QLabel(SelectionPage);
        text->setObjectName(QStringLiteral("text"));
        text->setText(QStringLiteral("TextLabel"));
        text->setWordWrap(true);

        verticalLayout->addWidget(text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(9);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(9);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, 0, -1);
        label_2 = new QLabel(SelectionPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        typeCombo = new QComboBox(SelectionPage);
        typeCombo->setObjectName(QStringLiteral("typeCombo"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(typeCombo->sizePolicy().hasHeightForWidth());
        typeCombo->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(typeCombo);


        verticalLayout_2->addLayout(horizontalLayout_2);

        typeDescription = new QTextEdit(SelectionPage);
        typeDescription->setObjectName(QStringLiteral("typeDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(typeDescription->sizePolicy().hasHeightForWidth());
        typeDescription->setSizePolicy(sizePolicy2);
        typeDescription->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        typeDescription->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        typeDescription->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(typeDescription);


        horizontalLayout->addLayout(verticalLayout_2);

        typeGraphicsView = new QGraphicsView(SelectionPage);
        typeGraphicsView->setObjectName(QStringLiteral("typeGraphicsView"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(typeGraphicsView->sizePolicy().hasHeightForWidth());
        typeGraphicsView->setSizePolicy(sizePolicy3);
        typeGraphicsView->setMinimumSize(QSize(200, 200));
        typeGraphicsView->setAutoFillBackground(true);
        typeGraphicsView->setFrameShape(QFrame::NoFrame);
        typeGraphicsView->setFrameShadow(QFrame::Plain);
        typeGraphicsView->setLineWidth(0);
        typeGraphicsView->setMidLineWidth(0);
        typeGraphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        typeGraphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::NoBrush);
        typeGraphicsView->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::NoBrush);
        typeGraphicsView->setForegroundBrush(brush1);
        typeGraphicsView->setInteractive(false);
        typeGraphicsView->setRenderHints(QPainter::Antialiasing|QPainter::HighQualityAntialiasing);

        horizontalLayout->addWidget(typeGraphicsView);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SelectionPage);

        QMetaObject::connectSlotsByName(SelectionPage);
    } // setupUi

    void retranslateUi(QWizardPage *SelectionPage)
    {
        SelectionPage->setWindowTitle(QApplication::translate("SelectionPage", "WizardPage", 0));
        label_2->setText(QApplication::translate("SelectionPage", "Select:", 0));
    } // retranslateUi

};

namespace Ui {
    class SelectionPage: public Ui_SelectionPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTIONPAGE_H

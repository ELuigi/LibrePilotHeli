/********************************************************************************
** Form generated from reading UI file 'vehicletemplateselectorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICLETEMPLATESELECTORWIDGET_H
#define UI_VEHICLETEMPLATESELECTORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VehicleTemplateSelectorWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *templateList;
    QHBoxLayout *horizontalLayout;
    QFrame *buttonFrame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *addTemplateButton;
    QPushButton *deleteTemplateButton;
    QGraphicsView *templateImage;
    QTextEdit *templateDescription;

    void setupUi(QWidget *VehicleTemplateSelectorWidget)
    {
        if (VehicleTemplateSelectorWidget->objectName().isEmpty())
            VehicleTemplateSelectorWidget->setObjectName(QStringLiteral("VehicleTemplateSelectorWidget"));
        VehicleTemplateSelectorWidget->resize(626, 400);
        verticalLayout_2 = new QVBoxLayout(VehicleTemplateSelectorWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(VehicleTemplateSelectorWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 6);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        templateList = new QListWidget(layoutWidget);
        templateList->setObjectName(QStringLiteral("templateList"));
        templateList->setMinimumSize(QSize(0, 250));
        templateList->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        templateList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        templateList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        templateList->setAlternatingRowColors(false);

        verticalLayout->addWidget(templateList);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        buttonFrame = new QFrame(layoutWidget);
        buttonFrame->setObjectName(QStringLiteral("buttonFrame"));
        buttonFrame->setFrameShape(QFrame::NoFrame);
        buttonFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(buttonFrame);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        addTemplateButton = new QPushButton(buttonFrame);
        addTemplateButton->setObjectName(QStringLiteral("addTemplateButton"));

        horizontalLayout_3->addWidget(addTemplateButton);

        deleteTemplateButton = new QPushButton(buttonFrame);
        deleteTemplateButton->setObjectName(QStringLiteral("deleteTemplateButton"));
        deleteTemplateButton->setEnabled(false);

        horizontalLayout_3->addWidget(deleteTemplateButton);


        horizontalLayout->addWidget(buttonFrame);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout);

        templateImage = new QGraphicsView(layoutWidget);
        templateImage->setObjectName(QStringLiteral("templateImage"));
        templateImage->setMinimumSize(QSize(200, 200));
        templateImage->setStyleSheet(QStringLiteral("background-color: rgba(254, 254, 254, 0);"));
        templateImage->setInteractive(false);
        templateImage->setRenderHints(QPainter::Antialiasing|QPainter::HighQualityAntialiasing|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);
        templateImage->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        horizontalLayout_2->addWidget(templateImage);

        splitter->addWidget(layoutWidget);
        templateDescription = new QTextEdit(splitter);
        templateDescription->setObjectName(QStringLiteral("templateDescription"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(templateDescription->sizePolicy().hasHeightForWidth());
        templateDescription->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        templateDescription->setFont(font);
        templateDescription->setUndoRedoEnabled(false);
        templateDescription->setReadOnly(true);
        splitter->addWidget(templateDescription);

        verticalLayout_2->addWidget(splitter);


        retranslateUi(VehicleTemplateSelectorWidget);

        QMetaObject::connectSlotsByName(VehicleTemplateSelectorWidget);
    } // setupUi

    void retranslateUi(QWidget *VehicleTemplateSelectorWidget)
    {
        VehicleTemplateSelectorWidget->setWindowTitle(QApplication::translate("VehicleTemplateSelectorWidget", "Form", 0));
        addTemplateButton->setText(QApplication::translate("VehicleTemplateSelectorWidget", "Add...", 0));
        deleteTemplateButton->setText(QApplication::translate("VehicleTemplateSelectorWidget", "Delete", 0));
        templateDescription->setPlaceholderText(QApplication::translate("VehicleTemplateSelectorWidget", "Information about the Vehicle in short.", 0));
    } // retranslateUi

};

namespace Ui {
    class VehicleTemplateSelectorWidget: public Ui_VehicleTemplateSelectorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICLETEMPLATESELECTORWIDGET_H

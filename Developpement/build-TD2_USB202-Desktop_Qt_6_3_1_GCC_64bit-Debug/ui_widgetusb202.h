/********************************************************************************
** Form generated from reading UI file 'widgetusb202.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETUSB202_H
#define UI_WIDGETUSB202_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetUSB202
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *abel_BP1;
    QLabel *abel_BP2;
    QLabel *abel_BP3;
    QLabel *abel_BP4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBox_LED1;
    QCheckBox *checkBox_LED2;
    QCheckBox *checkBox_LED3;
    QCheckBox *checkBox_LED4;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_Quitter;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WidgetUSB202)
    {
        if (WidgetUSB202->objectName().isEmpty())
            WidgetUSB202->setObjectName(QString::fromUtf8("WidgetUSB202"));
        WidgetUSB202->resize(280, 208);
        widget = new QWidget(WidgetUSB202);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 243, 160));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer_2);

        abel_BP1 = new QLabel(widget);
        abel_BP1->setObjectName(QString::fromUtf8("abel_BP1"));
        abel_BP1->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(abel_BP1);

        abel_BP2 = new QLabel(widget);
        abel_BP2->setObjectName(QString::fromUtf8("abel_BP2"));
        abel_BP2->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(abel_BP2);

        abel_BP3 = new QLabel(widget);
        abel_BP3->setObjectName(QString::fromUtf8("abel_BP3"));
        abel_BP3->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(abel_BP3);

        abel_BP4 = new QLabel(widget);
        abel_BP4->setObjectName(QString::fromUtf8("abel_BP4"));
        abel_BP4->setStyleSheet(QString::fromUtf8("background-color: rgb(164, 0, 0);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(abel_BP4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_3);

        checkBox_LED1 = new QCheckBox(widget);
        checkBox_LED1->setObjectName(QString::fromUtf8("checkBox_LED1"));

        verticalLayout_2->addWidget(checkBox_LED1);

        checkBox_LED2 = new QCheckBox(widget);
        checkBox_LED2->setObjectName(QString::fromUtf8("checkBox_LED2"));

        verticalLayout_2->addWidget(checkBox_LED2);

        checkBox_LED3 = new QCheckBox(widget);
        checkBox_LED3->setObjectName(QString::fromUtf8("checkBox_LED3"));

        verticalLayout_2->addWidget(checkBox_LED3);

        checkBox_LED4 = new QCheckBox(widget);
        checkBox_LED4->setObjectName(QString::fromUtf8("checkBox_LED4"));

        verticalLayout_2->addWidget(checkBox_LED4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_4);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_3->addItem(horizontalSpacer_5);

        pushButton_Quitter = new QPushButton(widget);
        pushButton_Quitter->setObjectName(QString::fromUtf8("pushButton_Quitter"));

        verticalLayout_3->addWidget(pushButton_Quitter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(WidgetUSB202);

        QMetaObject::connectSlotsByName(WidgetUSB202);
    } // setupUi

    void retranslateUi(QWidget *WidgetUSB202)
    {
        WidgetUSB202->setWindowTitle(QCoreApplication::translate("WidgetUSB202", "WidgetUSB202", nullptr));
        abel_BP1->setText(QCoreApplication::translate("WidgetUSB202", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">BP1</span></p></body></html>", nullptr));
        abel_BP2->setText(QCoreApplication::translate("WidgetUSB202", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">BP2</span></p></body></html>", nullptr));
        abel_BP3->setText(QCoreApplication::translate("WidgetUSB202", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">BP3</span></p></body></html>", nullptr));
        abel_BP4->setText(QCoreApplication::translate("WidgetUSB202", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">BP4</span></p></body></html>", nullptr));
        checkBox_LED1->setText(QCoreApplication::translate("WidgetUSB202", "LED1", nullptr));
        checkBox_LED2->setText(QCoreApplication::translate("WidgetUSB202", "LED2", nullptr));
        checkBox_LED3->setText(QCoreApplication::translate("WidgetUSB202", "LED3", nullptr));
        checkBox_LED4->setText(QCoreApplication::translate("WidgetUSB202", "LED4", nullptr));
        pushButton_Quitter->setText(QCoreApplication::translate("WidgetUSB202", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidgetUSB202: public Ui_WidgetUSB202 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETUSB202_H

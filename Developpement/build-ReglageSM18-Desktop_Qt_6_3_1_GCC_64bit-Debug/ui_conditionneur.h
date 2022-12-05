/********************************************************************************
** Form generated from reading UI file 'conditionneur.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONDITIONNEUR_H
#define UI_CONDITIONNEUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Conditionneur
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_valeurTension;
    QLCDNumber *lcdNumber;
    QLabel *label_V;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_lancerMesure;
    QPushButton *pushButton_quitter;

    void setupUi(QWidget *Conditionneur)
    {
        if (Conditionneur->objectName().isEmpty())
            Conditionneur->setObjectName(QString::fromUtf8("Conditionneur"));
        Conditionneur->resize(489, 115);
        QFont font;
        font.setPointSize(10);
        Conditionneur->setFont(font);
        widget = new QWidget(Conditionneur);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 441, 71));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_valeurTension = new QLabel(widget);
        label_valeurTension->setObjectName(QString::fromUtf8("label_valeurTension"));
        QFont font1;
        font1.setPointSize(15);
        label_valeurTension->setFont(font1);

        horizontalLayout->addWidget(label_valeurTension);

        lcdNumber = new QLCDNumber(widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        QFont font2;
        font2.setPointSize(14);
        lcdNumber->setFont(font2);

        horizontalLayout->addWidget(lcdNumber);

        label_V = new QLabel(widget);
        label_V->setObjectName(QString::fromUtf8("label_V"));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(true);
        label_V->setFont(font3);

        horizontalLayout->addWidget(label_V);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_lancerMesure = new QPushButton(widget);
        pushButton_lancerMesure->setObjectName(QString::fromUtf8("pushButton_lancerMesure"));

        horizontalLayout_2->addWidget(pushButton_lancerMesure);

        pushButton_quitter = new QPushButton(widget);
        pushButton_quitter->setObjectName(QString::fromUtf8("pushButton_quitter"));

        horizontalLayout_2->addWidget(pushButton_quitter);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Conditionneur);

        QMetaObject::connectSlotsByName(Conditionneur);
    } // setupUi

    void retranslateUi(QWidget *Conditionneur)
    {
        Conditionneur->setWindowTitle(QCoreApplication::translate("Conditionneur", "Conditionneur", nullptr));
        label_valeurTension->setText(QCoreApplication::translate("Conditionneur", "Valeur de la tension de calibrage :", nullptr));
        label_V->setText(QCoreApplication::translate("Conditionneur", "V", nullptr));
        pushButton_lancerMesure->setText(QCoreApplication::translate("Conditionneur", "Lancer Mesure", nullptr));
        pushButton_quitter->setText(QCoreApplication::translate("Conditionneur", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Conditionneur: public Ui_Conditionneur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONDITIONNEUR_H

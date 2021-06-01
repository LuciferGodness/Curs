/********************************************************************************
** Form generated from reading UI file 'shop.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOP_H
#define UI_SHOP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_shop
{
public:
    QLabel *label;
    QPushButton *buy;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *buy_2;
    QPushButton *buy_3;
    QPushButton *buy_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton;

    void setupUi(QWidget *shop)
    {
        if (shop->objectName().isEmpty())
            shop->setObjectName(QString::fromUtf8("shop"));
        shop->resize(423, 600);
        shop->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(122, 92, 255, 255), stop:0.899038 rgba(154, 13, 202, 255));"));
        label = new QLabel(shop);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 120, 80, 80));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(147, 11, 244);\n"
"border-radius: 30px;"));
        buy = new QPushButton(shop);
        buy->setObjectName(QString::fromUtf8("buy"));
        buy->setGeometry(QRect(70, 230, 80, 31));
        buy->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(255, 255, 255);\n"
"background-color: rgb(147, 11, 244);\n"
"border-radius: 12px;\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(shop);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 120, 80, 80));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(147, 11, 244);\n"
"border-radius: 30px;"));
        label_3 = new QLabel(shop);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 330, 80, 80));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(147, 11, 244);\n"
"border-radius: 30px;"));
        buy_2 = new QPushButton(shop);
        buy_2->setObjectName(QString::fromUtf8("buy_2"));
        buy_2->setGeometry(QRect(70, 440, 80, 31));
        buy_2->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(255, 255, 255);\n"
"background-color: rgb(147, 11, 244);\n"
"border-radius: 12px;\n"
"color: rgb(255, 255, 255);"));
        buy_3 = new QPushButton(shop);
        buy_3->setObjectName(QString::fromUtf8("buy_3"));
        buy_3->setGeometry(QRect(270, 230, 80, 31));
        buy_3->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(255, 255, 255);\n"
"background-color: rgb(147, 11, 244);\n"
"border-radius: 12px;\n"
"color: rgb(255, 255, 255);"));
        buy_4 = new QPushButton(shop);
        buy_4->setObjectName(QString::fromUtf8("buy_4"));
        buy_4->setGeometry(QRect(270, 440, 80, 31));
        buy_4->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(255, 255, 255);\n"
"background-color: rgb(147, 11, 244);\n"
"border-radius: 12px;\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(shop);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 330, 80, 80));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(147, 11, 244);\n"
"border-radius: 30px;"));
        label_5 = new QLabel(shop);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 90, 31, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(128, 76, 244);"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(shop);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 90, 31, 20));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(139, 50, 227);"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(shop);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 300, 31, 20));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(137, 56, 231);"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(shop);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(300, 300, 31, 20));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(146, 34, 216);"));
        label_8->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(shop);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 51, 51));
        pushButton->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(50, 50, 50);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(144, 0, 255);\n"
"border-radius: 24px;\n"
"color: rgb(0, 0, 0)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../build-untitled-Desktop_Qt_6_0_1_MinGW_64_bit-Debug/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(80, 80));

        retranslateUi(shop);

        QMetaObject::connectSlotsByName(shop);
    } // setupUi

    void retranslateUi(QWidget *shop)
    {
        shop->setWindowTitle(QCoreApplication::translate("shop", "Form", nullptr));
        label->setText(QCoreApplication::translate("shop", "TextLabel", nullptr));
        buy->setText(QCoreApplication::translate("shop", "Beaver fat", nullptr));
        label_2->setText(QCoreApplication::translate("shop", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("shop", "TextLabel", nullptr));
        buy_2->setText(QCoreApplication::translate("shop", "Lure", nullptr));
        buy_3->setText(QCoreApplication::translate("shop", "Barabulka", nullptr));
        buy_4->setText(QCoreApplication::translate("shop", "Nib", nullptr));
        label_4->setText(QCoreApplication::translate("shop", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("shop", "400", nullptr));
        label_6->setText(QCoreApplication::translate("shop", "400", nullptr));
        label_7->setText(QCoreApplication::translate("shop", "400", nullptr));
        label_8->setText(QCoreApplication::translate("shop", "400", nullptr));
    } // retranslateUi

};

namespace Ui {
    class shop: public Ui_shop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOP_H

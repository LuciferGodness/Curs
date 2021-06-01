/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(423, 600);
        pushButton = new QPushButton(menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 270, 131, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border: 4px solid rgb(255, 255, 255);\n"
"background-color: rgb(36, 9, 53);\n"
"border-radius: 16px;\n"
"color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(menu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 51, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 3px solid rgb(50, 50, 50);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(144, 0, 255);\n"
"border-radius: 24px;\n"
"color: rgb(0, 0, 0)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../build-untitled-Desktop_Qt_6_0_1_MinGW_64_bit-Debug/shop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(50, 49));
        label = new QLabel(menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-56, -5, 531, 681));
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(122, 92, 255, 255), stop:0.899038 rgba(154, 13, 202, 255));"));
        label_2 = new QLabel(menu);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(374, 10, 31, 16));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(menu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 10, 61, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("Colonna MT")});
        font.setPointSize(12);
        font.setBold(true);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_2->raise();
        label_3->raise();

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("menu", "Start!", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("menu", "Coins:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H

#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "msgsender.h"
#include "msgchecker.h"

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

public:
    void setShop(QWidget *s){
        shop = s;
    }
    void setGame(QWidget *g){
        game = g;
    }
    void show_coin();

public:
    Ui::menu *ui;
    QWidget *game;
    QWidget *shop;
    QString otherID;
    QString selfID;
    MsgSender *sender;
    MsgChecker *checker;
};

#endif // MENU_H

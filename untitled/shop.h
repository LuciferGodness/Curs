#ifndef SHOP_H
#define SHOP_H

#include <QWidget>


namespace Ui {
class shop;
}

class shop : public QWidget
{
    Q_OBJECT

public:
    explicit shop(QWidget *parent = nullptr);
    ~shop();

public slots:
    void buy_obj();

private slots:
    void on_pushButton_clicked();

public:
    void setMenu(QWidget *m){
        menu = m;
    }

private:
    Ui::shop *ui;
    QWidget *menu;

signals:
    void add (int b);
    void win();
};

#endif // SHOP_H

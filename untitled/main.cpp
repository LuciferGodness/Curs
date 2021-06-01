#include "menu.h"
#include "shop.h"
#include "form.h"
#include "countwidget.h"
#include "ui_countwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Form w;
    menu m;
    shop s;
    CountWidget g;
    s.setMenu(&m);
    m.setShop(&s);
    g.setMenu(&m);
    m.setGame(&g);
    w.setMenu(&m);
    QObject::connect(&s, &shop::add, &g, &CountWidget::add_obj);
    QObject::connect(&g, &CountWidget::hide, &g, &CountWidget::hide_button);
    QObject::connect(&g, &CountWidget::win, &m, &menu::show_coin);
    QObject::connect(&s, &shop::win, &m, &menu::show_coin);
    w.show();
    return a.exec();
}

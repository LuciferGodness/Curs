#ifndef COUNTWIDGET_H
#define COUNTWIDGET_H

#include <QWidget>
#include <QString>
#include "msgsender.h"
#include "msgchecker.h"
QT_BEGIN_NAMESPACE
namespace Ui { class CountWidget; }
QT_END_NAMESPACE

class CountWidget : public QWidget
{
    Q_OBJECT

public:
    CountWidget(QWidget *parent = nullptr);
    ~CountWidget();

public slots:
    void on_pushButton_clicked();
    void add_obj(int b);
    void use_obj();
    void hide_button();
    void processMsgs(QJsonArray& msgs);

public:
    void setMenu(QWidget *m){
        menu = m;
    }

signals:
    void hide();
    void win();
public:
    Ui::CountWidget *ui;
    QWidget *menu;
    MsgSender *sender;
    MsgChecker *checker;
};

#endif // COUNTWIDGET_H

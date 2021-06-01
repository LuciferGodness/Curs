#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include "menu.h"

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    QString getLogin();
    QString getPass();

signals:
    void sign_up_clicked();
    void sign_in_clicked();

private slots:
    void on_sign_up_clicked();
    void on_name_textEdited(const QString &arg1);

    void on_passw_textEdited(const QString &arg1);

    void on_sign_in_clicked();


public:
    void setMenu(QWidget *m){
        menu = m;
    }

public:
    Ui::Form *ui;
    QWidget *menu;
    QString username;
    QString userpass;
};

#endif // FORM_H

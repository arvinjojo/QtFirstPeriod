#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include "subwidget.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void mySlot();//成员函数 非普通全局函数或者静态函数
    void changeWin();
    void dealSub();
    void dealSignal(int, QString);

private:
    QPushButton b1;
    QPushButton *b2;
    QPushButton b3;

    SubWidget w;
};

#endif // WIDGET_H

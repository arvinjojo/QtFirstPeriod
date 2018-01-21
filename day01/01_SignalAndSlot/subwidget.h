#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>

class SubWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SubWidget(QWidget *parent = 0);

    void sendSlot();
signals:
    /*信号必须有关键字声明，没有返回值，
    可以有参数，是函数声明，无需定义*/
    void mySignal();
    void mySignal(int, QString);//重载，名字一样，参数不同
public slots:

private:
    QPushButton b;
};

#endif // SUBWIDGET_H

#ifndef THREADWIDGET_H
#define THREADWIDGET_H

#include <QWidget>
#include <QTimer> //定时器
#include "mythread.h"

namespace Ui {
class ThreadWidget;
}

class ThreadWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ThreadWidget(QWidget *parent = 0);
    ~ThreadWidget();

    void dealTimeout();//定时器槽函数
    void dealDone();//线程槽函数
    void stopThread();//停止线程

private slots:
    void on_pushButton_clicked();

private:
    Ui::ThreadWidget *ui;

    QTimer *myTimer; //声明变量
    MyThread *thread;//线程对象
};

#endif // THREADWIDGET_H

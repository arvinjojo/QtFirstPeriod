#include "threadwidget.h"
#include "ui_threadwidget.h"
#include <QThread>
#include <QDebug>
#include "mythread.h"//线程头文件
//#include <QTime>

ThreadWidget::ThreadWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThreadWidget)
{
    ui->setupUi(this);

    myTimer = new QTimer(this);

    //定时器启动，主动触发timeout()
    connect(myTimer, &QTimer::timeout, this, &ThreadWidget::dealTimeout);

    //分配空间
    thread = new MyThread(this);

    connect(thread, &MyThread::isDone, this, &ThreadWidget::dealDone);
    //当右上角窗口关闭，窗口触发
    connect(this, &ThreadWidget::destroyed, this, &ThreadWidget::stopThread);
}

void ThreadWidget::stopThread()
{
    //停止线程
    thread -> quit();
    //等待线程处理完结束
    thread -> wait();
    qDebug() << "thread is really done";
}

void ThreadWidget::dealDone()
{
    qDebug() << "it is done";
    myTimer -> stop();
}

void ThreadWidget::dealTimeout()
{
    static int i = 0;
    i++;
    //设置lcd值
    ui->lcdNumber->display(i);
}

ThreadWidget::~ThreadWidget()
{
    delete ui;
}

void ThreadWidget::on_pushButton_clicked()
{
    //如果定时器没有启动
    if(myTimer->isActive() == false)
    {
        myTimer->start(100);
    }
    //启动线程，处理数据
    thread->start();

}

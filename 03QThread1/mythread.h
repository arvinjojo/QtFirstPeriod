#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
//#include <QObject>//不使用QThread::sleep(5)，可以注释

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);

protected:
    //QThread的虚函数，线程处理函数，不能直接调用，用start调用
    void run();

signals:
    void isDone();

public slots:
};

#endif // MYTHREAD_H

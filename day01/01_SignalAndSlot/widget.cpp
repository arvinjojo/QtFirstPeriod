#include "widget.h"
#include <QPushButton>
#include <QDebug>//打印

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    b1.setParent(this);
    b1.setText("close");
    b1.move(100, 100);

    b2 = new QPushButton(this);
    b2->setText("heihei");
    b2->move(50, 50);

    connect(&b1, &QPushButton::pressed, this, &Widget::close);
    connect(b2, &QPushButton::released, this, &Widget::mySlot);
    connect(b2, &QPushButton::released, &b1, &QPushButton::hide);
    //b2动态分配空间，不需要&, release是抬起的时候触发

    setWindowTitle("big one");
    //等效 this->setWindowTitle("big one");
    b3.setParent(this);
    b3.setText("change");

    //显示子窗口
    //w.show();
    connect(&b3, &QPushButton::released, this, &Widget::changeWin);
    //处理子窗口信号
    void (SubWidget::*fun1Signal)() = &SubWidget::mySignal;
    connect(&w, fun1Signal, this, &Widget::dealSub);
    void (SubWidget::*fun2Signal)(int, QString) = &SubWidget::mySignal;
    connect(&w, fun2Signal, this, &Widget::dealSignal);
    //Qt4  信号连接
//    //Qt4 槽函数必须slots修饰
//    //SIGNAL SLOT将函数名字 变成字符串，不进行错误检查
//    connect(&w, SIGNAL(mySignal(), this, SLOT(dealSub()));
//    connect(&w, SIGNAL(mySignal(int, QString), this, SLOT(dealSignal()));)
    //lambda 表达式
    QPushButton *b4 = new QPushButton(this);
    b4->setText("Lambda表达式");
    b4->move(150, 150);
    int a = 10, b = 100;
    connect(b4, &QPushButton::released,
            //=:把外部所有局部变量、类中所有成员以值传递进来
            [=]() mutable//改变只读属性
    {
        qDebug() << "1111111";
        qDebug() << a << b;
        a = 11;
    }
    );

    QPushButton *b5 = new QPushButton(this);

    b5->move(250, 150);
    connect(b5, &QPushButton::clicked,
            //=:把外部所有局部变量、类中所有成员以值传递进来
            [=](bool isCheck)
    {
        qDebug() << isCheck;
    }
    );

    resize(400, 300);
}

void Widget::dealSignal(int a, QString str)
{    //字节数组QByteArray到char
    qDebug()<< a<< str.toUtf8().data();
}

void Widget::mySlot()
{
    b2->setText("12");
}

void Widget::changeWin()
{
    //子窗口显示
    w.show();
    //本窗口隐藏
    this->hide();
}

void Widget::dealSub()
{
    //本窗口隐藏
    w.hide();
    //显示窗口
    show();
}
Widget::~Widget()
{

}

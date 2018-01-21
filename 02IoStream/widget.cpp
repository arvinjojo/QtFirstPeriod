#include "widget.h"
#include "ui_widget.h"
#include <QDataStream> //二进制操作
#include <QTextStream>
#include <QFile>
#include <QDebug>
#define cout qDebug() << "[" << __FILE__ << ":" << __LINE__ << "]"//FILE LINE全局宏,debug 双下划线__

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
    writeData();
    readData();

}

void Widget::writeData()
{
    QFile file("D:/code/qt/2018_01/IoStream/test113.txt");

    bool isOk = file.open(QIODevice::WriteOnly);
    if(true == isOk)
    {
        QDataStream stream(&file);

        stream << QString("主要看气质") << 250;

    }
    file.close();
}

void Widget::readData()
{
    QFile file("D:/code/qt/2018_01/IoStream/test113.txt");

    bool isOk = file.open(QIODevice::ReadOnly);
    if(true == isOk)
    {
        QDataStream stream(&file);

        QString str;
        int a;
        stream >> str >> a;
        //qDebug() << str.toUtf8().data() << a;
        cout << str.toUtf8().data() << a;
    file.close();
    }

}

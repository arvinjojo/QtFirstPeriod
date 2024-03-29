#include "widget.h"
#include "ui_widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个绘图设备, 背景透明
    QImage image(400, 300, QImage::Format_ARGB32);
    QPainter p;

    p.begin(&image);

    //绘图
    p.drawImage(0, 0, QImage(":/pic/smile1"));

    p.end();

    image.save("D:/code/qt/2018_01/QImage/picimage.png");
}

Widget::~Widget()
{
    delete ui;
}

#include "widget.h"
#include "ui_widget.h"
#include <QPainter>
#include <QPixmap>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    QPixmap pix;
    pix.load("../pic/car.png");
    p.drawPixmap(0, 0, width(), height(), pix);
    //p.begin(this);
    //p.drawPixmap(0, 0, width(), height(), QPixmap("../pic/car.png"));
    //p.drawPixmap(rect(), QPixmap("../pic/car.png"));

    p.drawLine(50, 50, 150, 50);
    //p.end();
}

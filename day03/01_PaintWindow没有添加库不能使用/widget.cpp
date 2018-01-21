#include "widget.h"
#include "ui_widget.h"
#include "qpainter.h"

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
    QPainter p(this);//创建画家对象
    QPixmap pixmap;
    pixmap.load("baobao.png");
    p.drawPixmap(0, 0, width(), height(), pixmap);
}

#include "widget.h"
#include "ui_widget.h"
#include "QPainter"
#include <QPen>
#include <QBrush>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    x = 0;
    y = 50;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    //绘图
    //p.drawPixmap(0, 0, width(), height(), QPixmap(":/pic/rock"));
    p.drawPixmap(rect(), QPixmap(":/pic/rock"));

    //画笔
    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::red);
    pen.setColor( QColor(114, 89, 234) );
    pen.setStyle(Qt::DashLine);

    //把画笔交给画家
    p.setPen(pen);

    //创建画刷
    QBrush brush;
    brush.setColor(Qt::cyan);
    brush.setStyle(Qt::Dense1Pattern);

    //交给画家
    p.setBrush(brush);
     //画直线
    p.drawLine(50, 50, 150, 50);
    p.drawLine(50, 50, 50, 150);

    //画矩形
    p.drawRect(150, 150, 100, 50);

    //画圆形
    p.drawEllipse(QPoint(150, 150), 50, 25);

    //画笑脸
    p.drawPixmap(x, 200, 80, 80, QPixmap(":/pic/smile1"));
    p.drawPixmap(y, 200, 80, 80, QPixmap(":/pic/smile2"));
}

void Widget::on_pushButton_clicked()
{
    x += 20;
    y += 20;
    if(x > width()||y > width())
    {
        x = 0;
        y = 20;
    }

    //刷新
    update();

}

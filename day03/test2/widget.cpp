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

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);

    // 反走样
    painter.setRenderHint(QPainter::Antialiasing, true);

    // 绘制图标
    painter.drawPixmap(rect(), QPixmap(":/tutu/pic"));
 //painter.drawPixmap(rect(), QPixmap("D:/image/pic"));

}

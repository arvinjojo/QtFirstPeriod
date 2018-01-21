#include "widget.h"
#include "ui_widget.h"
#include <QBitmap>
#include <QPainter>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPixmap pixmap(400, 300);

    QPainter p(&pixmap);

    p.fillRect(0, 0, 400, 300, QBrush(Qt::white));

    p.drawPixmap(0, 0, 80, 80, QPixmap(":/pic/smile1"));

    pixmap.save("D:/code/qt/2018_01/02_QBitmap/pic/smile_save.png");
    pixmap.save("D:/code/qt/2018_01/02_QBitmap/pic/smile_save.jpg");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter p(this);
    //第一种方案
    p.drawPixmap(0, 0, QPixmap(":/pic/smile1"));

    p.drawPixmap(200, 0, QBitmap(":/pic/smile1"));
    //第二种方案
    QPixmap pixmap;
    pixmap.load(":/pic/smile2");
    p.drawPixmap(0, 200, pixmap);

    QBitmap bitmap;
    bitmap.load(":/pic/smile2");
    p.drawPixmap(200, 200, bitmap);
}

//QPixmap 针对屏幕进行了优化，与平台相关
//QImage 和平台无关，可对图片进行像素点修改
//QPicture 保存绘图的状态（二进制）

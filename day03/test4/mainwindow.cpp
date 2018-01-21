#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qpainter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::paintEvent(QPaintEvent *event)
//{
//    Q_UNUSED(event);

//    QPainter painter(this);

//    // 反走样
//    painter.setRenderHint(QPainter::Antialiasing, true);

//    // 设置画笔颜色
//    painter.setPen(QColor(0, 160, 230));

//    // 各个点的坐标
//    static const QPointF points[4] = {QPointF(30, 40), QPointF(60, 150), QPointF(150, 160), QPointF(220, 100)};

//    // 绘制多边形
//    painter.drawPolygon(points, 4);
//}

void MainWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this); // 创建QPainter一个对象
    QPen pen;
    pen.setColor(Qt::black); // 设置画笔为黑色
    painter.setPen(pen); // 设置画笔
    painter.drawLine(QPoint(0,0),QPoint(28,28));//画一条黑色的线

    // 画一个空心矩形
    pen.setColor(Qt::darkRed);
    painter.setPen(pen);
    painter.drawRect(QRect(1, 1, 28, 28));

    //显示图片的某个区域
    QPixmap image("baobao.bmp");//加载图片
    QRect src(0,0,28,28);//截取图片的某个区域
    painter.drawPixmap(QPoint(100,100),image,src);//显示图片
}


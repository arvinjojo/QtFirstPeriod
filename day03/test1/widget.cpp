#include "widget.h"
#include "ui_widget.h"
#include <QLabel>
#include <QMovie>

Widget::Widget(QWidget *parent) :
QWidget(parent),
ui(new Ui::Widget)
{
ui->setupUi(this);
QMovie *movie =new QMovie("D:/documents/QtCode/day03/image/baobao.jpg");
ui->label->setMovie(movie);
movie->start();
}

Widget::~Widget()
{
delete ui;
}

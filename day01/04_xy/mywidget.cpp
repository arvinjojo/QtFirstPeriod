#include "mywidget.h"

myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    // 坐标系统相对于屏幕
    move(100, 100);
}

myWidget::~myWidget()
{

}

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

protected://重写绘图事件
    //绘图 虚函数
    void paintEvent(QPaintEvent *);
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

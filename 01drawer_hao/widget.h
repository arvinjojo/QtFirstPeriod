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

protected:
    //需要选择widgets而不是windows，在窗口内重写绘图事件，虚函数
    void paintEvent(QPaintEvent *);
    //重写绘图事件


private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    int x;
    int y;
};

#endif // WIDGET_H

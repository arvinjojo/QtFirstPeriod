#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;//执行构造函数，类的功能由内部完成
    w.show();

    return a.exec();
}

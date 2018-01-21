#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
QApplication app(argc,argv);

//QLabel label("我爱赵兵");
QLabel *label = new QLabel("Hi");
//label.show();
label->show();

return app.exec();
}

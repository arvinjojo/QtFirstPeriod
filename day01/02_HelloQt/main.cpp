#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QWidget w;
    w.setWindowTitle("窗口");


    QPushButton b;
    b.setText("导航");
    b.setParent(&w);
    b.move(280, 200);

    QPushButton b1(&w);
    b1.setText("罗经");
    b1.move(280, 300);

    w.show();
    b.show();

    app.exec();
    return 0;
}

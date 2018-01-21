#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPushButton button("Quit");
    QObject::connect(&button, &QPushButton::clicked, &QApplication::quit);

    //MainWindow w;
    //w.setFixedSize(400, 400);
    //button.setGeometry(10, 10, 200, 200);
    button.setFixedSize(200,200);

    button.show();

    return a.exec();
}

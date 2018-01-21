#include <QApplication>
#include "guessnum.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Guessnum w;
    w.show();

    return a.exec();
}

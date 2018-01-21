#ifndef GUESSNUM_H
#define GUESSNUM_H

#include <QWidget>
#include <QMovie>

namespace Ui {
    class Guessnum;
}

class Guessnum : public QWidget
{
    Q_OBJECT

public:
    explicit Guessnum(QWidget *parent = 0);
    ~Guessnum();

private:
    Ui::Guessnum *ui;
    QTimer *timer;
    QMovie *gif;
    QMovie *movie;
    QMovie *movie_screen;
    QString show_messg;
    int t;
    int total;
    int randNum;
    int showNum;
    int flag;
    int time_flag;

public slots:
    void game_start();
    void clicked_Num();
    void count_down();
    void exit();
    void start();
    void num_delete();

};

#endif // GUESSNUM_H

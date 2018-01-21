#include "guessnum.h"
#include "ui_guessnum.h"

#include <QDebug>
#include <QString>
#include <QTime>
#include <cstdlib>
#include <QMovie>
#include <QThread>
#include <QTimer>

Guessnum::Guessnum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Guessnum)
{
    ui->setupUi(this);
    this->t=15;
    this->total=0;
    this->randNum=0;
    this->showNum=0;
    this->flag=0;
    this->time_flag=0;
    this->show_messg="";

    this->timer = new QTimer(this);
    this->timer->start(1000);
    ui->lcdNumberTime->display(t);

    this->movie_screen = new QMovie(this);
    ui->label_screen->setMovie(movie_screen);
    this->movie_screen->setFileName(":/new/prefix1/image/13125047[1].gif");
    movie_screen->start();

    this->gif = new QMovie(this);
    ui->label->setMovie(gif);
    this->gif->setFileName(":/new/prefix1/image/6a24ab189.gif");

    this->movie = new QMovie(this);
    ui->labelMainPic->setMovie(movie);
    this->movie->setFileName(":/new/prefix1/image/20090129.gif");
    movie->start();

    ui->pushButtonStart->setEnabled(false);
    ui->label->hide();
    ui->textprompt->hide();
    ui->labelError->hide();
    ui->textError->hide();
    ui->label->setScaledContents(true);
    //ui->labelMainPic->setPixmap(QPixmap("../image/program.jpg"));

    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));      //产生随机数
    randNum = qrand()%9999+1;
    while(randNum<1000)
        randNum = qrand()%9000+999;
    qDebug()<<"**************"<<randNum;

    connect(ui->pushButtonDel,SIGNAL(clicked()),this,SLOT(num_delete()));
    connect(this->timer,SIGNAL(timeout()),this,SLOT(count_down()));
    connect(ui->toolButton,SIGNAL(clicked()),this,SLOT(game_start()));
    connect(ui->pushButton0,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton1,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton2,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton3,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton4,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton5,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton6,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton7,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton8,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButton9,SIGNAL(clicked()),this,SLOT(clicked_Num()));
    connect(ui->pushButtonExit,SIGNAL(clicked()),this,SLOT(exit()));
    connect(ui->pushButtonStart,SIGNAL(clicked()),this,SLOT(start()));
}

Guessnum::~Guessnum()
{
    delete ui;
}

void Guessnum::clicked_Num()
{
    QPushButton *button=(QPushButton *)this->sender();
    if(button!=NULL)
    {
        int num = button->text().toInt();
        if(total>999)
          total=0;
        total=total*10+num;

        qDebug()<<"===="<<"total==="<<total;
        ui->lcdNumberShowNum->setDigitCount(QString::number(total).count());
        ui->lcdNumberShowNum->display(total);

        this->showNum=0;
        if((this->flag == 0)&&(button->text().toInt() == 0))
            this->flag = 0;
        else
            this->flag++;
        if(this->flag == 4)
        {
            this->flag = 0;
            qDebug()<<"******************====randNum==="<<randNum;
            if(total<randNum)
            {
                this->show_messg.append(QString::number(total));
                this->show_messg.append("  small!");
                ui->textEdit->append((this->show_messg));
            }
            else if(total>randNum)
            {
                this->show_messg.append(QString::number(total));
                this->show_messg.append("  big!");
                ui->textEdit->append((this->show_messg));
            }
            else
            {
                ui->pushButtonStart->setEnabled(true);
                ui->label->show();
                ui->textprompt->show();
                ui->labelError->hide();
                ui->textEdit->hide();
                ui->textError->hide();
                ui->labelMainPic->hide();
                ui->lcdNumberShowNum->hide();
                ui->lcdNumberTime->hide();
                gif->start();
                this->time_flag=1;
                randNum = qrand()%9999+1;
                while(randNum<1000)
                    randNum = qrand()%9000+999;
            }
            this->show_messg="";
        }
        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    }
}

void Guessnum::game_start()
{
    this->t=15;
    ui->label_screen->hide();
    ui->toolButton->hide();
}

void Guessnum::start()
{
    this->total=0;
    this->flag=0;
    ui->label->hide();
    ui->textprompt->hide();
    ui->labelError->hide();
    ui->textError->hide();
    ui->pushButtonStart->setEnabled(false);
    ui->labelMainPic->show();
    ui->textEdit->show();
    ui->lcdNumberShowNum->show();
    ui->lcdNumberTime->show();
    ui->lcdNumberShowNum->display(0);
    ui->textEdit->setText("");
    this->time_flag=0;
    this->t=15;
}

void Guessnum::count_down()
{
    if(this->time_flag == 0)
        t--;
    ui->lcdNumberTime->display(t);
    if(t == -1)
    {
        t=15;
        this->total=0;
        ui->lcdNumberTime->hide();
        ui->labelMainPic->hide();
        ui->lcdNumberShowNum->hide();
        ui->labelError->show();
        ui->textError->show();
        ui->textEdit->setText("");
        ui->lcdNumberShowNum->display(0);
        ui->pushButtonStart->setEnabled(true);
        this->total=0;
        this->flag=0;
        //qDebug()<<"&&&&&&&&&"<<"total&&&&&"<<total;
    }
}

void Guessnum::num_delete()
{
    if(this->flag!=0&&this->flag<4)
    {
        this->showNum++;
        if(this->total>0)
            this->total=this->total/10;
        ui->lcdNumberShowNum->display(this->total);
        if(flag>0)
            this->flag--;
        //qDebug()<<"===="<<"flag==="<<flag;
        qDebug()<<"==="<<"total==="<<total;
    }
}

void Guessnum::exit()
{
    if(QString::compare(this->sender()->objectName(),"pushButtonExit",Qt::CaseInsensitive)==0)
       _exit(0);
}

#include "widget.h"
#include "ui_widget.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //打印qt支持的数据库驱动
    qDebug() << QSqlDatabase::drivers();
    //添加MySql数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    //连接数据库
    db.setHostName("127.0.0.1");//数据库服务器IP
    db.setUserName("root");//数据库用户名
    db.setPassword("123456");//数据库密码
    db.setDatabaseName("test");//

    //打开数据库
    if(!db.open())//数据库打开失败
    {
        QMessageBox::warning(this, "错误", db.lastError().text());
        return;
    }
}

Widget::~Widget()
{
    delete ui;
}

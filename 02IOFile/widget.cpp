#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QFileDialog>
#include <QTextCodec>
#include <QFileInfo>
#include <QDebug>
#include <QDateTime>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    //中文应添加该句1.debug.(utf-8, GBK) incomplete type 未引用include库
    QTextCodec *codec = QTextCodec::codecForName("utf-8");

   QString path = QFileDialog::getOpenFileName(this, "open",
                                               "D:/code/haosming_file", "TXT(*.txt)");
   if(path.isEmpty() == false)
   {
       //文件对象
       QFile file(path);
       //打开文件
       bool isOk = file.open(QIODevice::ReadOnly);
       if(isOk == true)
       {
           //读文件
           //读整个文件
//         QByteArray array = file.readAll();
           //逐行读文件
           QByteArray array;
           while(file.atEnd() == false)
           {
               array += file.readLine();
           }

           //中文添加语句2.debug
           QString str = codec->toUnicode(array);
           //显示
           ui->textEdit->setText(str);
       }
       file.close();
       //获取文件信息
       QFileInfo info(path);
       qDebug() << "文件名字" << info.fileName();
       qDebug() << "文件后缀" << info.suffix();
       qDebug() << "文件大小" << info.size();
       qDebug() << "文件创建时间" << info.created().toString("yyyy-MM-dd hh:mm:ss");

   }

}

void Widget::on_buttonWrite_clicked()
{
    QString path = QFileDialog::getSaveFileName(this, "save",
                                                "D:/code/qt/2018_01/IOFile", "TXT(*.txt)");
    if(path.isEmpty() == false)
    {
        QFile file;
        //关联文件名字
        file.setFileName(path);
        //打开文件，只读
        bool isOk = file.open(QIODevice::WriteOnly);
        if(isOk == true)
        {
            //获取编辑区内容
            QString str = ui->textEdit->toPlainText();
            //QString -> QByteArray
//            file.write(str.toUtf8());
            //QString->c++ string->char *
//            file.write(str.toStdString().data());
            //转换为本地平台编码
            file.write(str.toLocal8Bit());

        }
        file.close();
    }

}

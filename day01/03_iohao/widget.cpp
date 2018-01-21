#include "widget.h"
#include "ui_widget.h"
#include <QFile>
#include <QFileDialog>


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

void Widget::on_leftButton_clicked()
{
    QString path = QFileDialog::getOpenFileName
            (this, "open", "../", "TXT(*.txt)");
    if(path.isEmpty() == false)//文件不为空时进来
    {
        //文件对象
        QFile file(path);

        //打开文件,只读
        bool isOk = file.open(QIODevice::ReadOnly);
        if(isOk == true)
        {
#if  0
           //读文件，默认只识别utf8编码（其他：文本流）
           QByteArray array = file.readAll();
           //显示到编辑区
           ui->textEdit->setText(array);
#endif
           QByteArray array;
           while(file.atEnd() == false)
           {
               //读一行
               array += file.readLine();
           }
           ui->textEdit->setText(array);
        }
        //关闭文件
        file.close();
    }

}

void Widget::on_rightButton_clicked()
{
    QString path = QFileDialog::getSaveFileName(this,
                                 "save", "../","TXT(*.txt)");
    if(path.isEmpty() == false)
    {
        QFile file;//创建文件对象
        //关联文件名字
        file.setFileName(path);

        bool isOk = file.open(QIODevice::WriteOnly);
        if(isOk == true)
        {
            //获取编辑区内容
            QString str = ui->textEdit->toPlainText();
            //写文件
            //QString转换成字节数组 QByteArray
            file.write(str.toUtf8());

            //Qsring to c++ string to char *
            file.write(str.toStdString().data());
        }
        file.close();
    }

}

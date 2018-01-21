#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <QHostAddress>

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    tcpSocket = NULL;

    //分配空间，制定父对象
    tcpSocket = new QTcpSocket(this);

    setWindowTitle("客户端");

    connect(tcpSocket, &QTcpSocket::connected,
            [=](){
              ui->textEditRead->setText("成功与Server建立连接");
    });

    connect(tcpSocket, &QTcpSocket::readyRead,
            [=](){
        //获取对方内容
              QByteArray array = tcpSocket->readAll();
              ui->textEditRead->append(array);
    });

}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_buttonConnect_clicked()
{
    //获取服务器ip和端口
    QString ip = ui->lineEditIP->text();
    qint16 port = ui->lineEditPort->text().toInt();

    //主动和服务器建立链接
    tcpSocket->connectToHost(QHostAddress(ip), port);
}

void ClientWidget::on_buttonSend_clicked()
{
    if(NULL == tcpSocket)
    {
        return;
    }
    //获取编辑框内容
    QString str = ui->textEditWrite->toPlainText();
    //发送
    tcpSocket->write(str.toUtf8().data());


}

void ClientWidget::on_buttonClose_clicked()
{
    if(NULL == tcpSocket)
    {
        return;
    }
    //主动断开，tcpSocket关闭权限在服务器端.debug
    tcpSocket->disconnectFromHost();
    tcpSocket->close();
}

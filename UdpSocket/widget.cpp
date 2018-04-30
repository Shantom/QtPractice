#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    client=new QUdpSocket(this);
    server=new QUdpSocket(this);
    client->bind(80801, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);
    server->bind(80800, QUdpSocket::ShareAddress | QUdpSocket::ReuseAddressHint);
    ui->setupUi(this);
    connect(server,&QIODevice::readyRead,this,&Widget::receiveServer);
    connect(client,&QIODevice::readyRead,this,&Widget::receiveClient);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::receiveServer()
{
    QByteArray datagram;
    datagram.resize(server->pendingDatagramSize());
    server->readDatagram(datagram.data(),datagram.size());
    qDebug()<<datagram;
    int port;
    QString name,word;
    QDataStream stream(datagram);

    stream>>port>>name>>word;
    qDebug()<<port<<name<<word;
//    datagram=QByteArray::fromBase64(datagram);
    ui->textBrowser_server->append(QString("对方:\n\t%1").arg(port)+name+word);

}

void Widget::receiveClient()
{
    QByteArray datagram;
    datagram.resize(client->pendingDatagramSize());
    client->readDatagram(datagram.data(),datagram.size());
    ui->textBrowser_client->append("对方:\n\t"+QString(datagram));

}

void Widget::on_pushButton_server_clicked()
{
    QString msg=ui->lineEdit_server->text();
    if(msg.isEmpty())
        return;
    QByteArray msgba;
    QDataStream stream(&msgba,QIODevice::ReadWrite);
    stream<<msg;
    QHostAddress address;
    address.setAddress("127.0.0.1");
    server->writeDatagram(msgba,address,80200);
    ui->textBrowser_server->append("自己:\n\t"+msg);
    ui->lineEdit_server->clear();

}

void Widget::on_pushButton_client_clicked()
{
    QString msg=ui->lineEdit_client->text();
    if(msg.isEmpty())
        return;
    QByteArray msgba=msg.toLocal8Bit()/*.toBase64()*/;
    QHostAddress address;
    address.setAddress("127.0.0.1");
    client->writeDatagram(msgba,address,80800);
    ui->textBrowser_client->append("自己:\n\t"+msg);
    ui->lineEdit_client->clear();
}

void Widget::on_lineEdit_server_returnPressed()
{
    emit ui->pushButton_server->click();
}

void Widget::on_lineEdit_client_returnPressed()
{
    emit ui->pushButton_client->click();

}

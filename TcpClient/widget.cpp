#include "widget.h"
#include "ui_widget.h"
#include <QTcpSocket>
#include <QString>
#include <QDataStream>
#include <QByteArray>
#include <QHostAddress>
#include <QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->socket=new QTcpSocket(this);
    ui->pushButton_send->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_conn_clicked()
{
    this->socket->connectToHost("127.0.0.1",40100,QTcpSocket::ReadWrite);
    connect(this->socket,SIGNAL(connected()),this,SLOT(connected()));

    if(socket->waitForConnected(-1))
    {
        this->ui->textBrowser->setText("连接成功\n");
        ui->pushButton_conn->setEnabled(false);
        ui->pushButton_send->setEnabled(true);
    }
    else
    {
        this->ui->textBrowser->setText("连接超时\n");
    }
}

void Widget::on_pushButton_send_clicked()
{
    QString msg=ui->lineEdit->text();
    socket->write(msg.toStdString().c_str());
    this->ui->textBrowser->append("自己:\n\t"+msg);
}

void Widget::connected()
{
    this->ui->textBrowser->setText("连接成功\n");
    connect(this->socket,SIGNAL(readyRead()),this,SLOT(readyread()));
    ui->pushButton_send->setEnabled(true);
}

void Widget::readyread()
{
    QByteArray arr=this->socket->readAll();
    this->ui->textBrowser->append("对方:\n\t"+QString(arr));
}

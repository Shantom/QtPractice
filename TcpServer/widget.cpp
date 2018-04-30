#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->socket=0;
    ui->pushButton_send->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_start_clicked()
{
    this->server=new QTcpServer(this);
    this->server->listen(QHostAddress::Any,40100);
    connect(this->server,SIGNAL(newConnection()),this,SLOT(newConnection()));
    ui->pushButton_start->setEnabled(false);
    this->ui->textBrowser->setText("服务器已建立");
}

void Widget::on_pushButton_send_clicked()
{
    QString msg=ui->lineEdit->text();
    socket->write(msg.toStdString().c_str());
    this->ui->textBrowser->append("自己:\n\t"+msg);
}

void Widget::newConnection()
{
    this->socket=this->server->nextPendingConnection();
    if(socket==0)
        this->ui->textBrowser->setText("连接失败\n");
    else
    {
        this->ui->textBrowser->setText("连接已建立\n");
        connect(this->socket,SIGNAL(readyRead()),this,SLOT(ReceiveData()));
        ui->pushButton_send->setEnabled(true);
    }
}

void Widget::ReceiveData()
{
    qDebug()<<socket->peerPort();
    QByteArray arr=this->socket->readAll();
    this->ui->textBrowser->append("对方:\n\t"+QString(arr));
}


#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QTcpServer * server;
    QTcpSocket * socket;

private slots:
    void on_pushButton_send_clicked();

    void newConnection();

    void ReceiveData();

    void on_pushButton_start_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

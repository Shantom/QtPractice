#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QUdpSocket>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QUdpSocket *server;
    QUdpSocket *client;
public slots:
    void receiveServer();
    void receiveClient();

private slots:
    void on_pushButton_server_clicked();

    void on_pushButton_client_clicked();

    void on_lineEdit_server_returnPressed();

    void on_lineEdit_client_returnPressed();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

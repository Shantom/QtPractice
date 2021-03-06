#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QString>
#include <QDataStream>
#include <QByteArray>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QTcpSocket * socket;

private slots:
    void on_pushButton_conn_clicked();


    void connected();

    void readyread();
    void on_pushButton_send_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    w.setWindowTitle("Client");
    if(w.socket->waitForReadyRead(30000))
        emit w.socket->readyRead();

    return a.exec();
}

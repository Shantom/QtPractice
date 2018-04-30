/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_server;
    QTextBrowser *textBrowser_server;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_server;
    QPushButton *pushButton_server;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_client;
    QTextBrowser *textBrowser_client;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_client;
    QPushButton *pushButton_client;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(762, 328);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_server = new QLabel(Widget);
        label_server->setObjectName(QStringLiteral("label_server"));

        verticalLayout->addWidget(label_server);

        textBrowser_server = new QTextBrowser(Widget);
        textBrowser_server->setObjectName(QStringLiteral("textBrowser_server"));

        verticalLayout->addWidget(textBrowser_server);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_server = new QLineEdit(Widget);
        lineEdit_server->setObjectName(QStringLiteral("lineEdit_server"));

        horizontalLayout->addWidget(lineEdit_server);

        pushButton_server = new QPushButton(Widget);
        pushButton_server->setObjectName(QStringLiteral("pushButton_server"));

        horizontalLayout->addWidget(pushButton_server);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_client = new QLabel(Widget);
        label_client->setObjectName(QStringLiteral("label_client"));

        verticalLayout_2->addWidget(label_client);

        textBrowser_client = new QTextBrowser(Widget);
        textBrowser_client->setObjectName(QStringLiteral("textBrowser_client"));

        verticalLayout_2->addWidget(textBrowser_client);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_client = new QLineEdit(Widget);
        lineEdit_client->setObjectName(QStringLiteral("lineEdit_client"));

        horizontalLayout_2->addWidget(lineEdit_client);

        pushButton_client = new QPushButton(Widget);
        pushButton_client->setObjectName(QStringLiteral("pushButton_client"));

        horizontalLayout_2->addWidget(pushButton_client);


        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label_server->setText(QApplication::translate("Widget", "Server", 0));
        pushButton_server->setText(QApplication::translate("Widget", "send", 0));
        label_client->setText(QApplication::translate("Widget", "Client", 0));
        pushButton_client->setText(QApplication::translate("Widget", "send", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditName;
    QLabel *label_4;
    QComboBox *comboBoxPhotos;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditGender;
    QLabel *label_5;
    QDateEdit *dateEdit;
    QCheckBox *checkBoxIsMarried;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditAddress;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonAdd;
    QPushButton *pushButtonDel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 360);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/butterfly01.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setIcon(icon);
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setCheckState(Qt::Checked);
        tableWidget->setItem(0, 3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem9);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/butterfly02.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setIcon(icon1);
        tableWidget->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setCheckState(Qt::Checked);
        tableWidget->setItem(1, 3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem14);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setRowCount(2);

        verticalLayout->addWidget(tableWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditName = new QLineEdit(Widget);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        horizontalLayout->addWidget(lineEditName);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        comboBoxPhotos = new QComboBox(Widget);
        comboBoxPhotos->addItem(icon, QString());
        comboBoxPhotos->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/cute01.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxPhotos->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/cute02.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxPhotos->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/toofat.png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBoxPhotos->addItem(icon4, QString());
        comboBoxPhotos->setObjectName(QStringLiteral("comboBoxPhotos"));

        horizontalLayout->addWidget(comboBoxPhotos);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditGender = new QLineEdit(Widget);
        lineEditGender->setObjectName(QStringLiteral("lineEditGender"));

        horizontalLayout_2->addWidget(lineEditGender);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        dateEdit = new QDateEdit(Widget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout_2->addWidget(dateEdit);

        checkBoxIsMarried = new QCheckBox(Widget);
        checkBoxIsMarried->setObjectName(QStringLiteral("checkBoxIsMarried"));

        horizontalLayout_2->addWidget(checkBoxIsMarried);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditAddress = new QLineEdit(Widget);
        lineEditAddress->setObjectName(QStringLiteral("lineEditAddress"));

        horizontalLayout_3->addWidget(lineEditAddress);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButtonAdd = new QPushButton(Widget);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));

        horizontalLayout_4->addWidget(pushButtonAdd);

        pushButtonDel = new QPushButton(Widget);
        pushButtonDel->setObjectName(QStringLiteral("pushButtonDel"));

        horizontalLayout_4->addWidget(pushButtonDel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "\346\200\247\345\210\253", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "\347\224\237\346\227\245", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "\345\251\232\345\220\246", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "\344\275\217\345\235\200", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "\346\242\201\345\261\261\344\274\257", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QApplication::translate("Widget", "\347\224\267", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 2);
        ___qtablewidgetitem7->setText(QApplication::translate("Widget", "300/3/3", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 4);
        ___qtablewidgetitem8->setText(QApplication::translate("Widget", "\346\242\201\345\256\266\346\235\221", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 0);
        ___qtablewidgetitem9->setText(QApplication::translate("Widget", "\347\245\235\350\213\261\345\217\260", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 1);
        ___qtablewidgetitem10->setText(QApplication::translate("Widget", "\345\245\263", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 2);
        ___qtablewidgetitem11->setText(QApplication::translate("Widget", "301/4/4", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 4);
        ___qtablewidgetitem12->setText(QApplication::translate("Widget", "\347\245\235\345\256\266\346\235\221", 0));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("Widget", "\345\247\223\345\220\215", 0));
        label_4->setText(QApplication::translate("Widget", "\345\244\264\345\203\217", 0));
        comboBoxPhotos->setItemText(0, QString());
        comboBoxPhotos->setItemText(1, QString());
        comboBoxPhotos->setItemText(2, QString());
        comboBoxPhotos->setItemText(3, QString());
        comboBoxPhotos->setItemText(4, QString());

        label_2->setText(QApplication::translate("Widget", "\346\200\247\345\210\253", 0));
        label_5->setText(QApplication::translate("Widget", "\347\224\237\346\227\245", 0));
        checkBoxIsMarried->setText(QApplication::translate("Widget", "\345\251\232\345\220\246", 0));
        label_3->setText(QApplication::translate("Widget", "\344\275\217\345\235\200", 0));
        pushButtonAdd->setText(QApplication::translate("Widget", "\346\267\273\345\212\240", 0));
        pushButtonDel->setText(QApplication::translate("Widget", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

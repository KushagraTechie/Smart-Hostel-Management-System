/********************************************************************************
** Form generated from reading UI file 'roommanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOMMANAGEMENT_H
#define UI_ROOMMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_RoomManagement
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtRoomNo;
    QLineEdit *txtRoomType;
    QLineEdit *txtCapacity;
    QLineEdit *txtOccupied;
    QPushButton *btnUpdate;
    QPushButton *btnSearch;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QTableWidget *tableRooms;
    QLabel *label_5;

    void setupUi(QDialog *RoomManagement)
    {
        if (RoomManagement->objectName().isEmpty())
            RoomManagement->setObjectName("RoomManagement");
        RoomManagement->resize(1042, 806);
        label = new QLabel(RoomManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 81, 20));
        label_2 = new QLabel(RoomManagement);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 120, 91, 20));
        label_3 = new QLabel(RoomManagement);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 180, 71, 20));
        label_4 = new QLabel(RoomManagement);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 240, 111, 20));
        txtRoomNo = new QLineEdit(RoomManagement);
        txtRoomNo->setObjectName("txtRoomNo");
        txtRoomNo->setGeometry(QRect(200, 60, 191, 28));
        txtRoomType = new QLineEdit(RoomManagement);
        txtRoomType->setObjectName("txtRoomType");
        txtRoomType->setGeometry(QRect(200, 120, 191, 28));
        txtCapacity = new QLineEdit(RoomManagement);
        txtCapacity->setObjectName("txtCapacity");
        txtCapacity->setGeometry(QRect(200, 180, 191, 28));
        txtOccupied = new QLineEdit(RoomManagement);
        txtOccupied->setObjectName("txtOccupied");
        txtOccupied->setGeometry(QRect(200, 240, 191, 28));
        btnUpdate = new QPushButton(RoomManagement);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setGeometry(QRect(560, 330, 90, 29));
        btnSearch = new QPushButton(RoomManagement);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(340, 330, 151, 29));
        btnAdd = new QPushButton(RoomManagement);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(200, 330, 90, 29));
        btnDelete = new QPushButton(RoomManagement);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(700, 330, 90, 29));
        tableRooms = new QTableWidget(RoomManagement);
        if (tableRooms->columnCount() < 8)
            tableRooms->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableRooms->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableRooms->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableRooms->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableRooms->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableRooms->setObjectName("tableRooms");
        tableRooms->setGeometry(QRect(220, 400, 551, 351));
        tableRooms->setColumnCount(8);
        label_5 = new QLabel(RoomManagement);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 10, 341, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        label_5->setFont(font);

        retranslateUi(RoomManagement);

        QMetaObject::connectSlotsByName(RoomManagement);
    } // setupUi

    void retranslateUi(QDialog *RoomManagement)
    {
        RoomManagement->setWindowTitle(QCoreApplication::translate("RoomManagement", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RoomManagement", "  Room No ", nullptr));
        label_2->setText(QCoreApplication::translate("RoomManagement", "Room Type ", nullptr));
        label_3->setText(QCoreApplication::translate("RoomManagement", "Capacity  ", nullptr));
        label_4->setText(QCoreApplication::translate("RoomManagement", "Occupied Beds ", nullptr));
        btnUpdate->setText(QCoreApplication::translate("RoomManagement", "Update", nullptr));
        btnSearch->setText(QCoreApplication::translate("RoomManagement", "Search by Room No", nullptr));
        btnAdd->setText(QCoreApplication::translate("RoomManagement", "Add", nullptr));
        btnDelete->setText(QCoreApplication::translate("RoomManagement", "Delete", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableRooms->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("RoomManagement", "Room No", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableRooms->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("RoomManagement", "Room Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableRooms->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("RoomManagement", "Capacity", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableRooms->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("RoomManagement", "Occupied Beds", nullptr));
        label_5->setText(QCoreApplication::translate("RoomManagement", "ROOM MANAGEMENT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RoomManagement: public Ui_RoomManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOMMANAGEMENT_H

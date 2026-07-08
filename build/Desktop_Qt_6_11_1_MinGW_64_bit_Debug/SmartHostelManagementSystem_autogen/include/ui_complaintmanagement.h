/********************************************************************************
** Form generated from reading UI file 'complaintmanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLAINTMANAGEMENT_H
#define UI_COMPLAINTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_complaintmanagement
{
public:
    QLabel *btnComplaintManagement;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *btnAdd;
    QPushButton *btnSearch;
    QPushButton *btnDelete;
    QTableWidget *tableComplaints;
    QLineEdit *txtStudentID;
    QLineEdit *txtRegNo;
    QLineEdit *txtStudentName;
    QLineEdit *txtRoomNo;
    QLineEdit *txtComplaintType;
    QLineEdit *txtDescription;
    QLineEdit *txtStatus;
    QLineEdit *txtComplaintDate;

    void setupUi(QDialog *complaintmanagement)
    {
        if (complaintmanagement->objectName().isEmpty())
            complaintmanagement->setObjectName("complaintmanagement");
        complaintmanagement->resize(1190, 837);
        btnComplaintManagement = new QLabel(complaintmanagement);
        btnComplaintManagement->setObjectName("btnComplaintManagement");
        btnComplaintManagement->setGeometry(QRect(330, 30, 501, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        btnComplaintManagement->setFont(font);
        label_2 = new QLabel(complaintmanagement);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 100, 91, 20));
        label_3 = new QLabel(complaintmanagement);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 160, 121, 20));
        label_4 = new QLabel(complaintmanagement);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 220, 111, 20));
        label_5 = new QLabel(complaintmanagement);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 270, 81, 20));
        label_6 = new QLabel(complaintmanagement);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 320, 131, 20));
        label_7 = new QLabel(complaintmanagement);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 370, 101, 20));
        label_8 = new QLabel(complaintmanagement);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(230, 420, 63, 20));
        label_9 = new QLabel(complaintmanagement);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(220, 460, 121, 20));
        btnAdd = new QPushButton(complaintmanagement);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(260, 510, 90, 29));
        btnSearch = new QPushButton(complaintmanagement);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(410, 510, 131, 29));
        btnDelete = new QPushButton(complaintmanagement);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(580, 510, 90, 29));
        tableComplaints = new QTableWidget(complaintmanagement);
        if (tableComplaints->columnCount() < 16)
            tableComplaints->setColumnCount(16);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableComplaints->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableComplaints->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableComplaints->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableComplaints->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableComplaints->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableComplaints->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableComplaints->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableComplaints->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableComplaints->setObjectName("tableComplaints");
        tableComplaints->setGeometry(QRect(100, 560, 1021, 251));
        tableComplaints->setColumnCount(16);
        txtStudentID = new QLineEdit(complaintmanagement);
        txtStudentID->setObjectName("txtStudentID");
        txtStudentID->setGeometry(QRect(410, 90, 211, 28));
        txtRegNo = new QLineEdit(complaintmanagement);
        txtRegNo->setObjectName("txtRegNo");
        txtRegNo->setGeometry(QRect(410, 150, 211, 28));
        txtStudentName = new QLineEdit(complaintmanagement);
        txtStudentName->setObjectName("txtStudentName");
        txtStudentName->setGeometry(QRect(410, 210, 211, 28));
        txtRoomNo = new QLineEdit(complaintmanagement);
        txtRoomNo->setObjectName("txtRoomNo");
        txtRoomNo->setGeometry(QRect(410, 260, 211, 28));
        txtComplaintType = new QLineEdit(complaintmanagement);
        txtComplaintType->setObjectName("txtComplaintType");
        txtComplaintType->setGeometry(QRect(410, 310, 211, 28));
        txtDescription = new QLineEdit(complaintmanagement);
        txtDescription->setObjectName("txtDescription");
        txtDescription->setGeometry(QRect(410, 360, 211, 28));
        txtStatus = new QLineEdit(complaintmanagement);
        txtStatus->setObjectName("txtStatus");
        txtStatus->setGeometry(QRect(410, 410, 211, 28));
        txtComplaintDate = new QLineEdit(complaintmanagement);
        txtComplaintDate->setObjectName("txtComplaintDate");
        txtComplaintDate->setGeometry(QRect(410, 460, 211, 28));

        retranslateUi(complaintmanagement);

        QMetaObject::connectSlotsByName(complaintmanagement);
    } // setupUi

    void retranslateUi(QDialog *complaintmanagement)
    {
        complaintmanagement->setWindowTitle(QCoreApplication::translate("complaintmanagement", "Dialog", nullptr));
        btnComplaintManagement->setText(QCoreApplication::translate("complaintmanagement", "   COMPLAINT MANAGEMENT\n"
"\n"
"Student ID\n"
"Registration No\n"
"Student Name\n"
"Room No\n"
"Complaint Type\n"
"Description\n"
"Status\n"
"Complaint Date", nullptr));
        label_2->setText(QCoreApplication::translate("complaintmanagement", "  Student ID", nullptr));
        label_3->setText(QCoreApplication::translate("complaintmanagement", "  Registration No", nullptr));
        label_4->setText(QCoreApplication::translate("complaintmanagement", "  Student Name", nullptr));
        label_5->setText(QCoreApplication::translate("complaintmanagement", "  Room No", nullptr));
        label_6->setText(QCoreApplication::translate("complaintmanagement", "   Complaint Type", nullptr));
        label_7->setText(QCoreApplication::translate("complaintmanagement", "  Description", nullptr));
        label_8->setText(QCoreApplication::translate("complaintmanagement", "  Status", nullptr));
        label_9->setText(QCoreApplication::translate("complaintmanagement", "  Complaint Date", nullptr));
        btnAdd->setText(QCoreApplication::translate("complaintmanagement", "Add", nullptr));
        btnSearch->setText(QCoreApplication::translate("complaintmanagement", "Search by Reg No", nullptr));
        btnDelete->setText(QCoreApplication::translate("complaintmanagement", "Delete", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableComplaints->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("complaintmanagement", "Student ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableComplaints->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("complaintmanagement", "Registration No", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableComplaints->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("complaintmanagement", "Student Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableComplaints->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("complaintmanagement", "Room No", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableComplaints->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("complaintmanagement", "Complaint Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableComplaints->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("complaintmanagement", "Description", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableComplaints->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("complaintmanagement", "Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableComplaints->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("complaintmanagement", "Complaint Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class complaintmanagement: public Ui_complaintmanagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLAINTMANAGEMENT_H

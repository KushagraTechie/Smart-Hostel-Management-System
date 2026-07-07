/********************************************************************************
** Form generated from reading UI file 'feemanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEMANAGEMENT_H
#define UI_FEEMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_FeeManagement
{
public:
    QLabel *btnFeeManagement;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtStudentID;
    QLineEdit *txtRegNo;
    QLineEdit *txtStudentName;
    QLineEdit *txtFeeAmount;
    QLineEdit *txtStatus;
    QLineEdit *txtPaymentDate;
    QTableWidget *tableFees;
    QPushButton *btnAdd;
    QPushButton *btnSearch;
    QPushButton *btnUpdate;
    QPushButton *btnDelete;

    void setupUi(QDialog *FeeManagement)
    {
        if (FeeManagement->objectName().isEmpty())
            FeeManagement->setObjectName("FeeManagement");
        FeeManagement->resize(1111, 840);
        QFont font;
        font.setBold(false);
        FeeManagement->setFont(font);
        btnFeeManagement = new QLabel(FeeManagement);
        btnFeeManagement->setObjectName("btnFeeManagement");
        btnFeeManagement->setGeometry(QRect(360, 10, 341, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        btnFeeManagement->setFont(font1);
        btnFeeManagement->setWordWrap(false);
        label_2 = new QLabel(FeeManagement);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 90, 81, 20));
        label_3 = new QLabel(FeeManagement);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 160, 111, 20));
        label_4 = new QLabel(FeeManagement);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 230, 111, 20));
        label_5 = new QLabel(FeeManagement);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(200, 310, 101, 20));
        label_6 = new QLabel(FeeManagement);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(200, 380, 131, 20));
        label_7 = new QLabel(FeeManagement);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 450, 121, 20));
        txtStudentID = new QLineEdit(FeeManagement);
        txtStudentID->setObjectName("txtStudentID");
        txtStudentID->setGeometry(QRect(390, 90, 141, 28));
        txtRegNo = new QLineEdit(FeeManagement);
        txtRegNo->setObjectName("txtRegNo");
        txtRegNo->setGeometry(QRect(390, 160, 141, 28));
        txtStudentName = new QLineEdit(FeeManagement);
        txtStudentName->setObjectName("txtStudentName");
        txtStudentName->setGeometry(QRect(390, 230, 141, 28));
        txtFeeAmount = new QLineEdit(FeeManagement);
        txtFeeAmount->setObjectName("txtFeeAmount");
        txtFeeAmount->setGeometry(QRect(390, 300, 141, 28));
        txtStatus = new QLineEdit(FeeManagement);
        txtStatus->setObjectName("txtStatus");
        txtStatus->setGeometry(QRect(390, 370, 141, 28));
        txtPaymentDate = new QLineEdit(FeeManagement);
        txtPaymentDate->setObjectName("txtPaymentDate");
        txtPaymentDate->setGeometry(QRect(390, 440, 141, 28));
        tableFees = new QTableWidget(FeeManagement);
        if (tableFees->columnCount() < 6)
            tableFees->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableFees->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableFees->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableFees->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableFees->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableFees->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableFees->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableFees->setObjectName("tableFees");
        tableFees->setGeometry(QRect(230, 590, 781, 221));
        tableFees->setColumnCount(6);
        btnAdd = new QPushButton(FeeManagement);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(220, 500, 90, 29));
        btnSearch = new QPushButton(FeeManagement);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(370, 500, 131, 29));
        btnUpdate = new QPushButton(FeeManagement);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setGeometry(QRect(550, 500, 90, 29));
        btnDelete = new QPushButton(FeeManagement);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(710, 500, 90, 29));

        retranslateUi(FeeManagement);

        QMetaObject::connectSlotsByName(FeeManagement);
    } // setupUi

    void retranslateUi(QDialog *FeeManagement)
    {
        FeeManagement->setWindowTitle(QCoreApplication::translate("FeeManagement", "Dialog", nullptr));
        btnFeeManagement->setText(QCoreApplication::translate("FeeManagement", "   FEE MANAGEMENT", nullptr));
        label_2->setText(QCoreApplication::translate("FeeManagement", "Student ID ", nullptr));
        label_3->setText(QCoreApplication::translate("FeeManagement", "Registration No ", nullptr));
        label_4->setText(QCoreApplication::translate("FeeManagement", "Student Name ", nullptr));
        label_5->setText(QCoreApplication::translate("FeeManagement", " Fee Amount  ", nullptr));
        label_6->setText(QCoreApplication::translate("FeeManagement", "  Payment Status  ", nullptr));
        label_7->setText(QCoreApplication::translate("FeeManagement", "  Payment Date ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableFees->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FeeManagement", "Student ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableFees->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FeeManagement", "Registration No", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableFees->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FeeManagement", "Student Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableFees->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FeeManagement", "Fee Amount", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableFees->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FeeManagement", "Payment Status", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableFees->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("FeeManagement", "Payment Date", nullptr));
        btnAdd->setText(QCoreApplication::translate("FeeManagement", "Add", nullptr));
        btnSearch->setText(QCoreApplication::translate("FeeManagement", "Search by Reg No", nullptr));
        btnUpdate->setText(QCoreApplication::translate("FeeManagement", "Update", nullptr));
        btnDelete->setText(QCoreApplication::translate("FeeManagement", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FeeManagement: public Ui_FeeManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEMANAGEMENT_H

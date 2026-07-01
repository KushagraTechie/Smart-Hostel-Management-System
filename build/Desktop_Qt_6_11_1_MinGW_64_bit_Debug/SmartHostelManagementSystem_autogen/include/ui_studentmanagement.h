/********************************************************************************
** Form generated from reading UI file 'studentmanagement.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTMANAGEMENT_H
#define UI_STUDENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentManagement
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *txtStudentID;
    QLineEdit *txtName;
    QLineEdit *txtRegNo;
    QLineEdit *txtRoomNo;
    QLineEdit *txtPhone;
    QLineEdit *txtCourse;
    QLineEdit *txtEmail;
    QLineEdit *txtYear;
    QLabel *label_9;
    QPushButton *btnAdd;
    QPushButton *btnSearch;
    QPushButton *btnUpdate;
    QPushButton *btnDelete;
    QPushButton *btnClear;
    QTableWidget *tableStudents;

    void setupUi(QDialog *StudentManagement)
    {
        if (StudentManagement->objectName().isEmpty())
            StudentManagement->setObjectName("StudentManagement");
        StudentManagement->resize(1288, 628);
        label = new QLabel(StudentManagement);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 20, 361, 41));
        QFont font;
        font.setPointSize(17);
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(StudentManagement);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 140, 171, 20));
        label_3 = new QLabel(StudentManagement);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 250, 171, 20));
        label_4 = new QLabel(StudentManagement);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(22, 190, 191, 20));
        label_5 = new QLabel(StudentManagement);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 300, 201, 20));
        label_6 = new QLabel(StudentManagement);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 350, 191, 20));
        label_7 = new QLabel(StudentManagement);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 400, 171, 20));
        label_8 = new QLabel(StudentManagement);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 460, 191, 20));
        txtStudentID = new QLineEdit(StudentManagement);
        txtStudentID->setObjectName("txtStudentID");
        txtStudentID->setGeometry(QRect(240, 80, 181, 28));
        txtName = new QLineEdit(StudentManagement);
        txtName->setObjectName("txtName");
        txtName->setGeometry(QRect(240, 130, 181, 28));
        txtRegNo = new QLineEdit(StudentManagement);
        txtRegNo->setObjectName("txtRegNo");
        txtRegNo->setGeometry(QRect(240, 190, 181, 28));
        txtRoomNo = new QLineEdit(StudentManagement);
        txtRoomNo->setObjectName("txtRoomNo");
        txtRoomNo->setGeometry(QRect(240, 240, 181, 28));
        txtPhone = new QLineEdit(StudentManagement);
        txtPhone->setObjectName("txtPhone");
        txtPhone->setGeometry(QRect(240, 290, 181, 28));
        txtCourse = new QLineEdit(StudentManagement);
        txtCourse->setObjectName("txtCourse");
        txtCourse->setGeometry(QRect(240, 400, 181, 28));
        txtEmail = new QLineEdit(StudentManagement);
        txtEmail->setObjectName("txtEmail");
        txtEmail->setGeometry(QRect(240, 350, 181, 28));
        txtYear = new QLineEdit(StudentManagement);
        txtYear->setObjectName("txtYear");
        txtYear->setGeometry(QRect(240, 450, 181, 28));
        label_9 = new QLabel(StudentManagement);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 90, 191, 20));
        btnAdd = new QPushButton(StudentManagement);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(90, 510, 90, 29));
        btnSearch = new QPushButton(StudentManagement);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setGeometry(QRect(210, 510, 121, 29));
        btnUpdate = new QPushButton(StudentManagement);
        btnUpdate->setObjectName("btnUpdate");
        btnUpdate->setGeometry(QRect(350, 510, 90, 29));
        btnDelete = new QPushButton(StudentManagement);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setGeometry(QRect(480, 510, 90, 29));
        btnClear = new QPushButton(StudentManagement);
        btnClear->setObjectName("btnClear");
        btnClear->setGeometry(QRect(600, 510, 90, 29));
        tableStudents = new QTableWidget(StudentManagement);
        if (tableStudents->columnCount() < 8)
            tableStudents->setColumnCount(8);
        tableStudents->setObjectName("tableStudents");
        tableStudents->setGeometry(QRect(470, 70, 841, 401));
        tableStudents->setColumnCount(8);

        retranslateUi(StudentManagement);

        QMetaObject::connectSlotsByName(StudentManagement);
    } // setupUi

    void retranslateUi(QDialog *StudentManagement)
    {
        StudentManagement->setWindowTitle(QCoreApplication::translate("StudentManagement", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("StudentManagement", "STUDENT MANAGEMENT ", nullptr));
        label_2->setText(QCoreApplication::translate("StudentManagement", " Name                          : ", nullptr));
        label_3->setText(QCoreApplication::translate("StudentManagement", " Room No                   :", nullptr));
        label_4->setText(QCoreApplication::translate("StudentManagement", "Registration No          :", nullptr));
        label_5->setText(QCoreApplication::translate("StudentManagement", " Phone No                  :", nullptr));
        label_6->setText(QCoreApplication::translate("StudentManagement", " Email                           :", nullptr));
        label_7->setText(QCoreApplication::translate("StudentManagement", " Course                        :", nullptr));
        label_8->setText(QCoreApplication::translate("StudentManagement", " Year                            :", nullptr));
        label_9->setText(QCoreApplication::translate("StudentManagement", "Student ID                    :", nullptr));
        btnAdd->setText(QCoreApplication::translate("StudentManagement", "Add", nullptr));
        btnSearch->setText(QCoreApplication::translate("StudentManagement", "Search by Reg No", nullptr));
        btnUpdate->setText(QCoreApplication::translate("StudentManagement", "Update", nullptr));
        btnDelete->setText(QCoreApplication::translate("StudentManagement", "Delete", nullptr));
        btnClear->setText(QCoreApplication::translate("StudentManagement", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentManagement: public Ui_StudentManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTMANAGEMENT_H

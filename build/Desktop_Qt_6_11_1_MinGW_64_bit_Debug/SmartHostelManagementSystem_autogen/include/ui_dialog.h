/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *btnStudentManagement;
    QPushButton *btnRoomManagement;
    QPushButton *btnFeeManagement;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *btnLogout;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(915, 548);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 611, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        btnStudentManagement = new QPushButton(Dialog);
        btnStudentManagement->setObjectName("btnStudentManagement");
        btnStudentManagement->setGeometry(QRect(80, 100, 161, 29));
        btnRoomManagement = new QPushButton(Dialog);
        btnRoomManagement->setObjectName("btnRoomManagement");
        btnRoomManagement->setGeometry(QRect(330, 100, 151, 29));
        btnFeeManagement = new QPushButton(Dialog);
        btnFeeManagement->setObjectName("btnFeeManagement");
        btnFeeManagement->setGeometry(QRect(80, 170, 151, 29));
        pushButton_4 = new QPushButton(Dialog);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(310, 170, 171, 29));
        pushButton_5 = new QPushButton(Dialog);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(90, 230, 90, 29));
        btnLogout = new QPushButton(Dialog);
        btnLogout->setObjectName("btnLogout");
        btnLogout->setGeometry(QRect(350, 230, 90, 29));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "SMART HOSTEL MANAGEMENT SYSTEM", nullptr));
        btnStudentManagement->setText(QCoreApplication::translate("Dialog", "Student Management", nullptr));
        btnRoomManagement->setText(QCoreApplication::translate("Dialog", "Room Management", nullptr));
        btnFeeManagement->setText(QCoreApplication::translate("Dialog", "Fee Management", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dialog", "Complaint Management", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dialog", "Profile", nullptr));
        btnLogout->setText(QCoreApplication::translate("Dialog", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

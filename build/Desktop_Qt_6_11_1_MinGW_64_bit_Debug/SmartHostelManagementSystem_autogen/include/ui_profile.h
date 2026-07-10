/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *btnProfile;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtAdminName;
    QLineEdit *txtEmployeeID;
    QLineEdit *txtHostelName;
    QLineEdit *txtEmail;
    QLineEdit *txtPhone;
    QLineEdit *txtDesignation;
    QPushButton *btnSave;
    QPushButton *btnLoad;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(1006, 733);
        btnProfile = new QLabel(Dialog);
        btnProfile->setObjectName("btnProfile");
        btnProfile->setGeometry(QRect(370, 20, 171, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        btnProfile->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 100, 101, 20));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 150, 101, 20));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(230, 220, 101, 20));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 270, 63, 20));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(240, 330, 121, 20));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(240, 390, 101, 20));
        txtAdminName = new QLineEdit(Dialog);
        txtAdminName->setObjectName("txtAdminName");
        txtAdminName->setGeometry(QRect(410, 90, 151, 28));
        txtEmployeeID = new QLineEdit(Dialog);
        txtEmployeeID->setObjectName("txtEmployeeID");
        txtEmployeeID->setGeometry(QRect(410, 140, 151, 28));
        txtHostelName = new QLineEdit(Dialog);
        txtHostelName->setObjectName("txtHostelName");
        txtHostelName->setGeometry(QRect(410, 200, 151, 28));
        txtEmail = new QLineEdit(Dialog);
        txtEmail->setObjectName("txtEmail");
        txtEmail->setGeometry(QRect(410, 260, 151, 28));
        txtPhone = new QLineEdit(Dialog);
        txtPhone->setObjectName("txtPhone");
        txtPhone->setGeometry(QRect(410, 320, 151, 31));
        txtDesignation = new QLineEdit(Dialog);
        txtDesignation->setObjectName("txtDesignation");
        txtDesignation->setGeometry(QRect(410, 390, 151, 28));
        btnSave = new QPushButton(Dialog);
        btnSave->setObjectName("btnSave");
        btnSave->setGeometry(QRect(290, 490, 90, 29));
        btnLoad = new QPushButton(Dialog);
        btnLoad->setObjectName("btnLoad");
        btnLoad->setGeometry(QRect(460, 490, 90, 29));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        btnLoad->setFont(font1);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        btnProfile->setText(QCoreApplication::translate("Dialog", "  PROFILE", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", " Admin Name", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "  Employee ID  ", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "  Hostel Name ", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "  Email  ", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "  Phone Number ", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", " Designation ", nullptr));
        btnSave->setText(QCoreApplication::translate("Dialog", "Save ", nullptr));
        btnLoad->setText(QCoreApplication::translate("Dialog", " Load ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H

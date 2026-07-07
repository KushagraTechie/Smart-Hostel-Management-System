/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QRadioButton *rbStudent;
    QRadioButton *rbWarden;
    QLabel *lblUsername;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;
    QLabel *lblPassword;
    QPushButton *btnLogin;
    QPushButton *btnExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(846, 556);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 0, 611, 51));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        label->setFont(font);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(270, 240, 381, 251));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 20, 81, 20));
        rbStudent = new QRadioButton(frame);
        rbStudent->setObjectName("rbStudent");
        rbStudent->setGeometry(QRect(30, 50, 111, 25));
        rbWarden = new QRadioButton(frame);
        rbWarden->setObjectName("rbWarden");
        rbWarden->setGeometry(QRect(30, 80, 111, 25));
        lblUsername = new QLabel(frame);
        lblUsername->setObjectName("lblUsername");
        lblUsername->setGeometry(QRect(20, 120, 81, 20));
        txtUsername = new QLineEdit(frame);
        txtUsername->setObjectName("txtUsername");
        txtUsername->setGeometry(QRect(120, 110, 113, 28));
        txtPassword = new QLineEdit(frame);
        txtPassword->setObjectName("txtPassword");
        txtPassword->setGeometry(QRect(120, 160, 113, 28));
        txtPassword->setEchoMode(QLineEdit::EchoMode::Password);
        lblPassword = new QLabel(frame);
        lblPassword->setObjectName("lblPassword");
        lblPassword->setGeometry(QRect(20, 160, 71, 20));
        btnLogin = new QPushButton(frame);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(30, 200, 90, 29));
        btnExit = new QPushButton(frame);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(160, 200, 90, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 846, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "SMART HOSTEL MANAGEMENT SYSTEM", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select Role", nullptr));
        rbStudent->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        rbWarden->setText(QCoreApplication::translate("MainWindow", "Warden", nullptr));
        lblUsername->setText(QCoreApplication::translate("MainWindow", "Username : ", nullptr));
        txtPassword->setText(QString());
        lblPassword->setText(QCoreApplication::translate("MainWindow", "Password  : ", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

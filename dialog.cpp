#include "studentmanagement.h"
#include "mainwindow.h"
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_btnLogout_clicked()
{
    MainWindow *login = new MainWindow();
    login->show();
    this->close();
}
void Dialog::on_btnStudentManagement_clicked()
{
    StudentManagement *student = new StudentManagement(this);
    student->show();
}
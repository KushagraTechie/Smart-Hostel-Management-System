#include "complaintmanagement.h"
#include "feemanagement.h"
#include "roommanagement.h"
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
void Dialog::on_btnRoomManagement_clicked()
{
    RoomManagement *room = new RoomManagement(this);
    room->show();
}

void Dialog::on_btnFeeManagement_clicked()
{
    FeeManagement *fee = new FeeManagement(this);
    fee->show();
}
void Dialog::on_btnComplaintManagement_clicked()
{
    complaintmanagement *complaint = new complaintmanagement(this);
    complaint->show();
}
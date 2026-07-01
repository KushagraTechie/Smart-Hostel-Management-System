#include "dialog.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnExit_clicked()
{
    close();
}
void MainWindow::on_btnLogin_clicked()
{
    QString username = ui->txtUsername->text();
    QString password = ui->txtPassword->text();

    if (ui->rbStudent->isChecked())
    {
        if (username == "student" && password == "student123")
        {
            Dialog *dashboard = new Dialog(this);
            dashboard->show();
            this->hide();
        }
        else
        {
            QMessageBox::warning(this,
                                 "Login Failed",
                                 "Invalid Student Username or Password!");
        }
    }
    else if (ui->rbWarden->isChecked())
    {
        if (username == "warden" && password == "warden123")
        {
            Dialog *dashboard = new Dialog(this);
            dashboard->show();
            this->hide();
        }
        else
        {
            QMessageBox::warning(this,
                                 "Login Failed",
                                 "Invalid Warden Username or Password!");
        }
    }
    else
    {
        QMessageBox::warning(this,
                             "Role Not Selected",
                             "Please select Student or Warden.");
    }
}
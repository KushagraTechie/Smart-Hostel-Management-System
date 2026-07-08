#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>
#include "complaintmanagement.h"
#include "ui_complaintmanagement.h"

complaintmanagement::complaintmanagement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::complaintmanagement)
{
    ui->setupUi(this);

    loadTableFromFile();
}

complaintmanagement::~complaintmanagement()
{
    delete ui;
}

void complaintmanagement::saveTableToFile()
{
    QFile file("complaints.txt");

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);

        for(int row = 0; row < ui->tableComplaints->rowCount(); row++)
        {
            for(int col = 0; col < ui->tableComplaints->columnCount(); col++)
            {
                if(ui->tableComplaints->item(row, col))
                    out << ui->tableComplaints->item(row, col)->text();

                if(col != ui->tableComplaints->columnCount() - 1)
                    out << ",";
            }

            out << "\n";
        }

        file.close();
    }
}

void complaintmanagement::loadTableFromFile()
{
    QFile file("complaints.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);

        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList data = line.split(",");

            int row = ui->tableComplaints->rowCount();
            ui->tableComplaints->insertRow(row);

            for(int i = 0; i < data.size(); i++)
            {
                ui->tableComplaints->setItem(
                    row,
                    i,
                    new QTableWidgetItem(data[i]));
            }
        }

        file.close();
    }
}

void complaintmanagement::on_btnAdd_clicked()
{
    int row = ui->tableComplaints->rowCount();
    ui->tableComplaints->insertRow(row);

    ui->tableComplaints->setItem(row,0,new QTableWidgetItem(ui->txtStudentID->text()));
    ui->tableComplaints->setItem(row,1,new QTableWidgetItem(ui->txtRegNo->text()));
    ui->tableComplaints->setItem(row,2,new QTableWidgetItem(ui->txtStudentName->text()));
    ui->tableComplaints->setItem(row,3,new QTableWidgetItem(ui->txtRoomNo->text()));
    ui->tableComplaints->setItem(row,4,new QTableWidgetItem(ui->txtComplaintType->text()));
    ui->tableComplaints->setItem(row,5,new QTableWidgetItem(ui->txtDescription->text()));
    ui->tableComplaints->setItem(row,6,new QTableWidgetItem(ui->txtStatus->text()));
    ui->tableComplaints->setItem(row,7,new QTableWidgetItem(ui->txtComplaintDate->text()));

    saveTableToFile();

    QMessageBox::information(
        this,
        "Success",
        "Complaint added successfully!");

    ui->txtStudentID->clear();
    ui->txtRegNo->clear();
    ui->txtStudentName->clear();
    ui->txtRoomNo->clear();
    ui->txtComplaintType->clear();
    ui->txtDescription->clear();
    ui->txtStatus->clear();
    ui->txtComplaintDate->clear();
}

void complaintmanagement::on_btnSearch_clicked()
{
    QString regNo = ui->txtRegNo->text();

    for(int row = 0; row < ui->tableComplaints->rowCount(); row++)
    {
        if(ui->tableComplaints->item(row,1)->text() == regNo)
        {
            ui->txtStudentID->setText(ui->tableComplaints->item(row,0)->text());
            ui->txtRegNo->setText(ui->tableComplaints->item(row,1)->text());
            ui->txtStudentName->setText(ui->tableComplaints->item(row,2)->text());
            ui->txtRoomNo->setText(ui->tableComplaints->item(row,3)->text());
            ui->txtComplaintType->setText(ui->tableComplaints->item(row,4)->text());
            ui->txtDescription->setText(ui->tableComplaints->item(row,5)->text());
            ui->txtStatus->setText(ui->tableComplaints->item(row,6)->text());
            ui->txtComplaintDate->setText(ui->tableComplaints->item(row,7)->text());

            QMessageBox::information(
                this,
                "Search",
                "Complaint found!");

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Search",
        "Complaint not found!");
}

void complaintmanagement::on_btnDelete_clicked()
{
    QString regNo = ui->txtRegNo->text();

    for(int row = 0; row < ui->tableComplaints->rowCount(); row++)
    {
        if(ui->tableComplaints->item(row,1)->text() == regNo)
        {
            ui->tableComplaints->removeRow(row);

            saveTableToFile();

            QMessageBox::information(
                this,
                "Delete",
                "Complaint deleted successfully!");

            ui->txtStudentID->clear();
            ui->txtRegNo->clear();
            ui->txtStudentName->clear();
            ui->txtRoomNo->clear();
            ui->txtComplaintType->clear();
            ui->txtDescription->clear();
            ui->txtStatus->clear();
            ui->txtComplaintDate->clear();

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Delete",
        "Complaint not found!");
}
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTableWidgetItem>
#include "feemanagement.h"
#include "ui_feemanagement.h"

FeeManagement::FeeManagement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FeeManagement)
{
    ui->setupUi(this);

    loadTableFromFile();
}

FeeManagement::~FeeManagement()
{
    delete ui;
}

void FeeManagement::saveTableToFile()
{
    QFile file("fees.txt");

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);

        for(int row = 0; row < ui->tableFees->rowCount(); row++)
        {
            for(int col = 0; col < ui->tableFees->columnCount(); col++)
            {
                if(ui->tableFees->item(row, col))
                    out << ui->tableFees->item(row, col)->text();

                if(col != ui->tableFees->columnCount() - 1)
                    out << ",";
            }

            out << "\n";
        }

        file.close();
    }
}

void FeeManagement::loadTableFromFile()
{
    QFile file("fees.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);

        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList data = line.split(",");

            int row = ui->tableFees->rowCount();
            ui->tableFees->insertRow(row);

            for(int i = 0; i < data.size(); i++)
            {
                ui->tableFees->setItem(
                    row,
                    i,
                    new QTableWidgetItem(data[i]));
            }
        }

        file.close();
    }
}

void FeeManagement::on_btnAdd_clicked()
{
    int row = ui->tableFees->rowCount();
    ui->tableFees->insertRow(row);

    ui->tableFees->setItem(row, 0,
                           new QTableWidgetItem(ui->txtStudentID->text()));

    ui->tableFees->setItem(row, 1,
                           new QTableWidgetItem(ui->txtRegNo->text()));

    ui->tableFees->setItem(row, 2,
                           new QTableWidgetItem(ui->txtStudentName->text()));

    ui->tableFees->setItem(row, 3,
                           new QTableWidgetItem(ui->txtFeeAmount->text()));

    ui->tableFees->setItem(row, 4,
                           new QTableWidgetItem(ui->txtStatus->text()));

    ui->tableFees->setItem(row, 5,
                           new QTableWidgetItem(ui->txtPaymentDate->text()));

    saveTableToFile();

    QMessageBox::information(
        this,
        "Success",
        "Fee details added successfully!");

    ui->txtStudentID->clear();
    ui->txtRegNo->clear();
    ui->txtStudentName->clear();
    ui->txtFeeAmount->clear();
    ui->txtStatus->clear();
    ui->txtPaymentDate->clear();
}

void FeeManagement::on_btnSearch_clicked()
{
    QString regNo = ui->txtRegNo->text();

    for(int row = 0; row < ui->tableFees->rowCount(); row++)
    {
        if(ui->tableFees->item(row, 1)->text() == regNo)
        {
            ui->txtStudentID->setText(
                ui->tableFees->item(row, 0)->text());

            ui->txtRegNo->setText(
                ui->tableFees->item(row, 1)->text());

            ui->txtStudentName->setText(
                ui->tableFees->item(row, 2)->text());

            ui->txtFeeAmount->setText(
                ui->tableFees->item(row, 3)->text());

            ui->txtStatus->setText(
                ui->tableFees->item(row, 4)->text());

            ui->txtPaymentDate->setText(
                ui->tableFees->item(row, 5)->text());

            QMessageBox::information(
                this,
                "Search",
                "Record found!");

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Search",
        "Record not found!");
}

void FeeManagement::on_btnDelete_clicked()
{
    QString regNo = ui->txtRegNo->text();

    for(int row = 0; row < ui->tableFees->rowCount(); row++)
    {
        if(ui->tableFees->item(row, 1)->text() == regNo)
        {
            ui->tableFees->removeRow(row);

            saveTableToFile();

            QMessageBox::information(
                this,
                "Delete",
                "Fee record deleted successfully!");

            ui->txtStudentID->clear();
            ui->txtRegNo->clear();
            ui->txtStudentName->clear();
            ui->txtFeeAmount->clear();
            ui->txtStatus->clear();
            ui->txtPaymentDate->clear();

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Delete",
        "Record not found!");
}



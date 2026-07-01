#include <QMessageBox>
#include <QStringList>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QHeaderView>
#include <QTableWidgetItem>
#include "studentmanagement.h"
#include "ui_studentmanagement.h"

StudentManagement::StudentManagement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StudentManagement)
{
    ui->setupUi(this);
    ui->tableStudents->setColumnCount(8);

    QStringList headers;
    headers << "Student ID"
            << "Name"
            << "Registration No"
            << "Room No"
            << "Phone No"
            << "Email"
            << "Course"
            << "Year";

    ui->tableStudents->setHorizontalHeaderLabels(headers);
    ui->tableStudents->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    QFile file("students.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);

        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList data = line.split(",");

            int row = ui->tableStudents->rowCount();
            ui->tableStudents->insertRow(row);

            for(int i = 0; i < data.size(); i++)
            {
                ui->tableStudents->setItem(
                    row,
                    i,
                    new QTableWidgetItem(data[i]));
            }
        }

        file.close();
    }
}

StudentManagement::~StudentManagement()
{
    delete ui;
}

void StudentManagement::saveTableToFile()
{
    QFile file("students.txt");

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);

        for(int row = 0; row < ui->tableStudents->rowCount(); row++)
        {
            for(int col = 0; col < ui->tableStudents->columnCount(); col++)
            {
                if(ui->tableStudents->item(row,col))
                {
                    out << ui->tableStudents->item(row,col)->text();
                }

                if(col < ui->tableStudents->columnCount()-1)
                    out << ",";
            }

            out << "\n";
        }

        file.close();
    }
}

void StudentManagement::on_btnAdd_clicked()
{
    int row = ui->tableStudents->rowCount();
    ui->tableStudents->insertRow(row);

    ui->tableStudents->setItem(row, 0,
                               new QTableWidgetItem(ui->txtStudentID->text()));

    ui->tableStudents->setItem(row, 1,
                               new QTableWidgetItem(ui->txtName->text()));

    ui->tableStudents->setItem(row, 2,
                               new QTableWidgetItem(ui->txtRegNo->text()));

    ui->tableStudents->setItem(row, 3,
                               new QTableWidgetItem(ui->txtRoomNo->text()));

    ui->tableStudents->setItem(row, 4,
                               new QTableWidgetItem(ui->txtPhone->text()));

    ui->tableStudents->setItem(row, 5,
                               new QTableWidgetItem(ui->txtEmail->text()));

    ui->tableStudents->setItem(row, 6,
                               new QTableWidgetItem(ui->txtCourse->text()));

    ui->tableStudents->setItem(row, 7,
                               new QTableWidgetItem(ui->txtYear->text()));
    QFile file("students.txt");

    if(file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&file);

        out << ui->txtStudentID->text() << ","
            << ui->txtName->text() << ","
            << ui->txtRegNo->text() << ","
            << ui->txtRoomNo->text() << ","
            << ui->txtPhone->text() << ","
            << ui->txtEmail->text() << ","
            << ui->txtCourse->text() << ","
            << ui->txtYear->text()
            << "\n";

        file.close();
        qDebug() << "Current Path:" << QDir::currentPath();
    }

    // Clear boxes after adding
    ui->txtStudentID->clear();
    ui->txtName->clear();
    ui->txtRegNo->clear();
    ui->txtRoomNo->clear();
    ui->txtPhone->clear();
    ui->txtEmail->clear();
    ui->txtCourse->clear();
    ui->txtYear->clear();
}


void StudentManagement::on_btnDelete_clicked()
{
    int row = ui->tableStudents->currentRow();

    if (row >= 0)
    {
        ui->tableStudents->removeRow(row);
    }
}

void StudentManagement::on_btnSearch_clicked()
{
    QString regNo = ui->txtRegNo->text();

    for (int row = 0; row < ui->tableStudents->rowCount(); row++)
    {
        if (ui->tableStudents->item(row, 2)->text() == regNo)
        {
            ui->txtStudentID->setText(
                ui->tableStudents->item(row, 0)->text());

            ui->txtName->setText(
                ui->tableStudents->item(row, 1)->text());

            ui->txtRegNo->setText(
                ui->tableStudents->item(row, 2)->text());

            ui->txtRoomNo->setText(
                ui->tableStudents->item(row, 3)->text());

            ui->txtPhone->setText(
                ui->tableStudents->item(row, 4)->text());

            ui->txtEmail->setText(
                ui->tableStudents->item(row, 5)->text());

            ui->txtCourse->setText(
                ui->tableStudents->item(row, 6)->text());

            ui->txtYear->setText(
                ui->tableStudents->item(row, 7)->text());

            return;
        }
    }

    QMessageBox::warning(this,
                         "Search",
                         "Student not found!");
}

void StudentManagement::on_btnUpdate_clicked()
{
    QString regNo = ui->txtRegNo->text();

    for (int row = 0; row < ui->tableStudents->rowCount(); row++)
    {
        if (ui->tableStudents->item(row, 2)->text() == regNo)
        {
            ui->tableStudents->item(row, 0)
            ->setText(ui->txtStudentID->text());

            ui->tableStudents->item(row, 1)
                ->setText(ui->txtName->text());

            ui->tableStudents->item(row, 2)
                ->setText(ui->txtRegNo->text());

            ui->tableStudents->item(row, 3)
                ->setText(ui->txtRoomNo->text());

            ui->tableStudents->item(row, 4)
                ->setText(ui->txtPhone->text());

            ui->tableStudents->item(row, 5)
                ->setText(ui->txtEmail->text());

            ui->tableStudents->item(row, 6)
                ->setText(ui->txtCourse->text());

            ui->tableStudents->item(row, 7)
                ->setText(ui->txtYear->text());

            saveTableToFile();
            QMessageBox::information(
                this,
                "Update",
                "Student details updated successfully!");

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Update",
        "Student not found!");
}

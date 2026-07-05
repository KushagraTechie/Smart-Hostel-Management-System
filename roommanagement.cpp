#include <QTableWidgetItem>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QHeaderView>
#include "roommanagement.h"
#include "ui_roommanagement.h"

RoomManagement::RoomManagement(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RoomManagement)
{
    ui->setupUi(this);
    QStringList headers;
    headers << "Room No"
            << "Room Type"
            << "Capacity"
            << "Occupied Beds";

    ui->tableRooms->setColumnCount(4);
    ui->tableRooms->setHorizontalHeaderLabels(headers);
    ui->tableRooms->horizontalHeader()
        ->setSectionResizeMode(QHeaderView::Stretch);
    QFile file("rooms.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);

        while(!in.atEnd())
        {
            QString line = in.readLine();
            QStringList data = line.split(",");

            int row = ui->tableRooms->rowCount();
            ui->tableRooms->insertRow(row);

            for(int i = 0; i < data.size(); i++)
            {
                ui->tableRooms->setItem(
                    row,
                    i,
                    new QTableWidgetItem(data[i]));
            }
        }

        file.close();
    }
}

RoomManagement::~RoomManagement()
{
    delete ui;
}

void RoomManagement::saveTableToFile()
{
    QFile file("rooms.txt");

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&file);

        for(int row = 0; row < ui->tableRooms->rowCount(); row++)
        {
            for(int col = 0; col < ui->tableRooms->columnCount(); col++)
            {
                if(ui->tableRooms->item(row, col))
                {
                    out << ui->tableRooms->item(row, col)->text();
                }

                if(col < ui->tableRooms->columnCount() - 1)
                    out << ",";
            }

            out << "\n";
        }

        file.close();
    }
}

void RoomManagement::on_btnAdd_clicked()
{
    int row = ui->tableRooms->rowCount();
    ui->tableRooms->insertRow(row);

    ui->tableRooms->setItem(row, 0,
                            new QTableWidgetItem(ui->txtRoomNo->text()));

    ui->tableRooms->setItem(row, 1,
                            new QTableWidgetItem(ui->txtRoomType->text()));

    ui->tableRooms->setItem(row, 2,
                            new QTableWidgetItem(ui->txtCapacity->text()));

    ui->tableRooms->setItem(row, 3,
                            new QTableWidgetItem(ui->txtOccupied->text()));

    saveTableToFile();
    ui->txtRoomNo->clear();
    ui->txtRoomType->clear();
    ui->txtCapacity->clear();
    ui->txtOccupied->clear();
}


void RoomManagement::on_btnSearch_clicked()
{
    QString roomNo = ui->txtRoomNo->text();

    for(int row = 0; row < ui->tableRooms->rowCount(); row++)
    {
        if(ui->tableRooms->item(row, 0)->text() == roomNo)
        {
            ui->txtRoomType->setText(
                ui->tableRooms->item(row,1)->text());

            ui->txtCapacity->setText(
                ui->tableRooms->item(row,2)->text());

            ui->txtOccupied->setText(
                ui->tableRooms->item(row,3)->text());

            QMessageBox::information(
                this,
                "Search",
                "Room found!");

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Search",
        "Room not found!");
}

void RoomManagement::on_btnUpdate_clicked()
{
    QString roomNo = ui->txtRoomNo->text();

    for(int row = 0; row < ui->tableRooms->rowCount(); row++)
    {
        if(ui->tableRooms->item(row, 0)->text() == roomNo)
        {
            ui->tableRooms->item(row, 0)
            ->setText(ui->txtRoomNo->text());

            ui->tableRooms->item(row, 1)
                ->setText(ui->txtRoomType->text());

            ui->tableRooms->item(row, 2)
                ->setText(ui->txtCapacity->text());

            ui->tableRooms->item(row, 3)
                ->setText(ui->txtOccupied->text());

            saveTableToFile();

            QMessageBox::information(
                this,
                "Update",
                "Room updated successfully!");

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Update",
        "Room not found!");
}

void RoomManagement::on_btnDelete_clicked()
{
    QString roomNo = ui->txtRoomNo->text();

    for(int row = 0; row < ui->tableRooms->rowCount(); row++)
    {
        if(ui->tableRooms->item(row, 0)->text() == roomNo)
        {
            ui->tableRooms->removeRow(row);

            saveTableToFile();

            QMessageBox::information(
                this,
                "Delete",
                "Room deleted successfully!");

            ui->txtRoomNo->clear();
            ui->txtRoomType->clear();
            ui->txtCapacity->clear();
            ui->txtOccupied->clear();

            return;
        }
    }

    QMessageBox::warning(
        this,
        "Delete",
        "Room not found!");
}


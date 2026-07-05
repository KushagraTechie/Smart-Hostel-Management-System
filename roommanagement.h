#ifndef ROOMMANAGEMENT_H
#define ROOMMANAGEMENT_H

#include <QDialog>

namespace Ui {
class RoomManagement;
}

class RoomManagement : public QDialog
{
    Q_OBJECT

public:
    explicit RoomManagement(QWidget *parent = nullptr);
    ~RoomManagement();

private slots:
    void on_btnAdd_clicked();

    void on_btnSearch_clicked();

    void on_btnUpdate_clicked();

    void on_btnDelete_clicked();



private:
    void saveTableToFile();
    Ui::RoomManagement *ui;
};

#endif // ROOMMANAGEMENT_H

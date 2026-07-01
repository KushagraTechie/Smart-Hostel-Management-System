#ifndef STUDENTMANAGEMENT_H
#define STUDENTMANAGEMENT_H

#include <QDialog>

namespace Ui {
class StudentManagement;
}

class StudentManagement : public QDialog
{
    Q_OBJECT

public:
    explicit StudentManagement(QWidget *parent = nullptr);
    ~StudentManagement();

private slots:
    void on_btnAdd_clicked();

    void on_btnDelete_clicked();

    void on_btnSearch_clicked();

    void on_btnUpdate_clicked();

private:
    void saveTableToFile();
    Ui::StudentManagement *ui;
};

#endif // STUDENTMANAGEMENT_H

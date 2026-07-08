#ifndef COMPLAINTMANAGEMENT_H
#define COMPLAINTMANAGEMENT_H

#include <QDialog>

namespace Ui {
class complaintmanagement;
}

class complaintmanagement : public QDialog
{
    Q_OBJECT

public:
    explicit complaintmanagement(QWidget *parent = nullptr);
    ~complaintmanagement();

    void saveTableToFile();
    void loadTableFromFile();

private slots:
    void on_btnAdd_clicked();
    void on_btnSearch_clicked();
    void on_btnDelete_clicked();

private:
    Ui::complaintmanagement *ui;
};

#endif // COMPLAINTMANAGEMENT_H
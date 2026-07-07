#ifndef FEEMANAGEMENT_H
#define FEEMANAGEMENT_H

#include <QDialog>

namespace Ui {
class FeeManagement;
}

class FeeManagement : public QDialog
{
    Q_OBJECT

public:
    explicit FeeManagement(QWidget *parent = nullptr);
    ~FeeManagement();

    void saveTableToFile();
    void loadTableFromFile();


private slots:
    void on_btnAdd_clicked();
    void on_btnSearch_clicked();
    void on_btnDelete_clicked();

private:
    Ui::FeeManagement *ui;
};

#endif // FEEMANAGEMENT_H


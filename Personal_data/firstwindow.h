#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QDialog>

namespace Ui {
class firstwindow;
}

class firstwindow : public QDialog
{
    Q_OBJECT

public:
    explicit firstwindow(QWidget *parent = nullptr);
    ~firstwindow();
     void conclusionRandStr();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



    void on_pushButton_3_clicked();

private:
    Ui::firstwindow *ui;
};

#endif // FIRSTWINDOW_H

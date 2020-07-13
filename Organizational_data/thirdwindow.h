#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include "../Organizational_data/choice_of_generation.h"
#include <QDialog>

#include <QFileDialog>
#include <QApplication>

namespace Ui {
class thirdwindow;
}

class thirdwindow : public QDialog
{
    Q_OBJECT

public:
    explicit thirdwindow(QWidget *parent = nullptr);
    ~thirdwindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void conclusionRandStr();

private:
    Ui::thirdwindow *ui;
    choice_of_generation *win;

};

#endif // THIRDWINDOW_H

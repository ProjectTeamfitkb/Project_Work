#ifndef THIRDWINDOW_H
#define THIRDWINDOW_H

#include "../Organizational_data/choice_of_generation.h"
#include <QDialog>
#include <QFileDialog>
#include <QApplication>
#include <QtGui>
#include <QSpinBox>

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
    void on_Enterdata_clicked();

    void on_Gener_clicked();

    void conclusionRandStr();

    void generationOrg(std::string way, std::string way2,std::string way3,std::string way4);

private:
    Ui::thirdwindow *ui;
    choice_of_generation *win;
    QSpinBox *spinBox;

};

#endif // THIRDWINDOW_H

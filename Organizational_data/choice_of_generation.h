#ifndef CHOICE_OF_GENERATION_H
#define CHOICE_OF_GENERATION_H

#include <QDialog>
#include <QFileDialog>
#include <QApplication>
#include <QSpinBox>

namespace Ui {
class choice_of_generation;
}

class choice_of_generation : public QDialog
{
    Q_OBJECT

public:
    explicit choice_of_generation(QWidget *parent = nullptr);
    ~choice_of_generation();

private slots:
    void on_pushButton_clicked();

    void conclusionRandStr();

    void generation(std::string way);

    void generation1charact(std::string way);

    void generation_two_file(std::string way, std::string way2);

    void generation_three_file(std::string way, std::string way2,std::string way3);

    void connectFile();

    void on_Organiz_clicked();

    void on_Location_clicked();

    void on_Industry_clicked();

    void on_Staff_clicked();

private:
    Ui::choice_of_generation *ui;

};

#endif // CHOICE_OF_GENERATION_H

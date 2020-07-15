#ifndef FOURTHWINDOW_H
#define FOURTHWINDOW_H

#include <QDialog>

namespace Ui {
class fourthwindow;
}

class fourthwindow : public QDialog
{
    Q_OBJECT

public:
    explicit fourthwindow(QWidget *parent = nullptr);
    ~fourthwindow();
    int random_generator(int a, int b);
    QString generation_data(std::string file_name, int num_rand);

private slots:

    void on_Generate_clicked();

private:
    Ui::fourthwindow *ui;
};

#endif // FOURTHWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QInputDialog>
#include <QMainWindow>

#include "../Personal_data/firstwindow.h"
#include "../Geographic_data/secondwindow.h"
#include "../Organizational_data/thirdwindow.h"
#include "../Financial_data/fourthwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    firstwindow *window;
    secondwindow *window1;
    thirdwindow *window2;
    fourthwindow *window3;


};
#endif // MAINWINDOW_H

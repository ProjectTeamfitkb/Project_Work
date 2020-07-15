#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "../Personal_data/pw_personal.h"


#include "../Financial_data/fourthwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    window = new firstwindow(this);
    window -> show();
}

void MainWindow::on_pushButton_2_clicked()
{
    window1 = new secondwindow(this);
    window1 -> show();
}

void MainWindow::on_pushButton_3_clicked()
{
   window2 = new thirdwindow(this);
   window2 -> show();

}

void MainWindow::on_pushButton_4_clicked()
{
    window3 = new fourthwindow(this);
    window3 -> show();
}

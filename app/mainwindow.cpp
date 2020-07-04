#include "mainwindow.h"
#include "ui_mainwindow.h"


#include "../Personal_data/pw_personal.h"
#include "../Geographic_data/pw_geographic.h"
#include "../Organizational_data/pw_organizational.h"
#include "../Financial_data/pw_financial.h"

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
    PW_personal pers;
    pers.exec();
}



void MainWindow::on_pushButton_2_clicked()
{
    PW_geographic geogr;
    geogr.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    PW_organizational organ;
    organ.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    PW_financial financ;
    financ.exec();
}

#include "fourthwindow.h"
#include "ui_fourthwindow.h"
#include <QFileDialog>

fourthwindow::fourthwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fourthwindow)
{
    ui->setupUi(this);
}

fourthwindow::~fourthwindow()
{
    delete ui;
}

void fourthwindow::on_pushButton_clicked()
{
    //wind = new Therd(this);
    //wind->show();
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                      "/home",
                                                      tr("Images (*.png *.txt *.jpg)"));
}

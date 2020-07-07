#include "firstwindow.h"
#include "ui_firstwindow.h"
#include <QFileDialog>

firstwindow::firstwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::firstwindow)
{
    ui->setupUi(this);
}

firstwindow::~firstwindow()
{
    delete ui;
}

void firstwindow::on_pushButton_clicked()
{
    //wind = new Therd(this);
    //wind->show();
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                      "/home",
                                                      tr("Images (*.png *.txt *.jpg)"));
}

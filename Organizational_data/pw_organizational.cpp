#include "pw_organizational.h"
#include "ui_pw_organizational.h"

PW_organizational::PW_organizational(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PW_organizational)
{
    ui->setupUi(this);
}

PW_organizational::~PW_organizational()
{
    delete ui;
}


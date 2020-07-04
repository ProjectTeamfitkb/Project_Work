#include "pw_geographic.h"
#include "ui_pw_geographic.h"

PW_geographic::PW_geographic(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PW_geographic)
{
    ui->setupUi(this);
}

PW_geographic::~PW_geographic()
{
    delete ui;
}


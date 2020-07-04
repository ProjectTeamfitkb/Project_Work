#include "pw_personal.h"
#include "ui_pw_personal.h"

PW_personal::PW_personal(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PW_personal)
{
    ui->setupUi(this);
}

PW_personal::~PW_personal()
{
    delete ui;
}


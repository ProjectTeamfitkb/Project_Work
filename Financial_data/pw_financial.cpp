#include "pw_financial.h"
#include "ui_pw_financial.h"

PW_financial::PW_financial(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PW_financial)
{
    ui->setupUi(this);
}

PW_financial::~PW_financial()
{
    delete ui;
}


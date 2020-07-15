#include "thirdwindow.h"
#include "ui_thirdwindow.h"
#include "../objects/objects.h"

#include <QDialog>
#include <QFileDialog>
#include <QApplication>
#include <QtGui>

using namespace std;

thirdwindow::thirdwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thirdwindow)
{
    ui->setupUi(this);

}

thirdwindow::~thirdwindow()
{
    delete ui;
}
//
void thirdwindow::conclusionRandStr()//вывод сгенерированных организаций
{
    QString fileName = "Create.txt";
    QFile mFile(fileName);
    QTextStream stream(&mFile);
    mFile.open(QFile::ReadOnly | QFile::Text);
    QString buf = stream.readAll();
    ui->textEditr->setText(buf);
    mFile.close();

}

void thirdwindow::on_Enterdata_clicked()//переход к следующему окну
{
    win = new choice_of_generation(this);
    win->show();

}


void thirdwindow::on_Gener_clicked()//генерация нескольких организаций
{
    int k = ui->spinBox->value();//переменая, отвечающая за количество файлов
    string Way = "NameOrg.txt";
    string Way3 = "Staff.txt";
    string Way2 = "Street.txt";
    string Way4 = "Industry.txt";
    for (int i = 0; i<k; i++)
    {
        generationOrg(Way,Way2,Way3,Way4);
    }
    conclusionRandStr();
    ofstream writerandstr;
    writerandstr.open("Create.txt");

}



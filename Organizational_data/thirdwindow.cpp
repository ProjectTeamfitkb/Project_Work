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
void thirdwindow::conclusionRandStr()
{
    //Запись случайной строки в новый файл на диске D
    QString fileName = "Create.txt";
    QFile mFile(fileName);
    QTextStream stream(&mFile);
    mFile.open(QFile::ReadOnly | QFile::Text);
    QString buf = stream.readAll();
    //Вывод это строки из файла
    ui->textEdit->setText(buf);
    mFile.close();
}
//генерация случайной строки из файла по нажатию кнопки
void thirdwindow::on_pushButton_clicked()
{
    ofstream writerandstr;

    string way = "Organ.txt";

    writerandstr.open("Create.txt", ofstream :: trunc);

    //Генерация рандомной строки из выбранного файла
    ifstream fin(way);
    vector <string> read;
    if(fin)
    {
        for (; fin;)
        {
            string temp;
            getline(fin, temp);
            read.push_back(temp);
        }

        string randstr = read[rand() % (read.size()-1)];
        read.pop_back();

        writerandstr << randstr;
    }
    writerandstr.close();


    conclusionRandStr();

}

void thirdwindow::on_pushButton_2_clicked()
{

    win = new choice_of_generation(this);
    win->show();

}

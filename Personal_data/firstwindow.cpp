#include "firstwindow.h"
#include "ui_firstwindow.h"
#include "../objects/objects.h"
#include <QDialog>
#include <QFileDialog>
#include <QApplication>

using namespace std;
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
void firstwindow::conclusionRandStr()
{
    //Запись случайной строки в новый файл на диске D
    QString fileName = "Temp.txt";
    QFile mFile(fileName);
    QTextStream stream(&mFile);
    mFile.open(QFile::ReadOnly | QFile::Text);
    QString buf = stream.readAll();
    //Вывод это строки из файла
    ui->textEdit->setText(buf);
    mFile.close();
}
void firstwindow::on_pushButton_clicked()
{

    ofstream writerandstr;


    string way = "Woman.txt";

    writerandstr.open("Temp.txt", ofstream :: trunc);

    //Генерация рандомной строки из выбранного файла
    ifstream fin(way);
    vector <string> read;

    for (; fin;)
    {
        string temp;
        getline(fin, temp);
        read.push_back(temp);
    }
    string randstr = read[rand() % read.size()];
    read.pop_back();

    writerandstr << randstr << endl;
    writerandstr << endl;
    writerandstr.close();

    conclusionRandStr();

}

void firstwindow::on_pushButton_2_clicked()
{

    ofstream writerandstr;


    string way = "Man.txt";

    writerandstr.open("Temp.txt", ofstream :: trunc);

    //Генерация рандомной строки из выбранного файла
    ifstream fin(way);
    vector <string> read;

    for (; fin;)
    {
        string temp;
        getline(fin, temp);
        read.push_back(temp);
    }
    string randstr = read[rand() % read.size()];
    read.pop_back();

    writerandstr << randstr << endl;
    writerandstr << endl;
    writerandstr.close();

    conclusionRandStr();

}

#include "choice_of_generation.h"
#include "ui_choice_of_generation.h"
#include "../objects/objects.h"
#include "thirdwindow.h"
#include <string.h>
#include <QDialog>
#include <QFileDialog>
#include <QApplication>
#include <QtGui>
#include <fstream>

using namespace std;

choice_of_generation::choice_of_generation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choice_of_generation)
{
    ui->setupUi(this);
}

choice_of_generation::~choice_of_generation()
{

    delete ui;
}

void choice_of_generation::generation1charact(std::string way)
{
    ofstream writerandstr;

    writerandstr.open("Choicee.txt");


    ifstream fin(way);
    vector <string> read;

    for (; fin;)
    {
        string temp;
        getline(fin, temp);
        read.push_back(temp);
    }
    const string randstr = read[rand() % (read.size()-1)];
    read.pop_back();

    writerandstr << randstr << endl;
    writerandstr.close();

}

void choice_of_generation::generation(std::string way)
{
    ofstream writerandstr;

    writerandstr.open("Choice.txt");

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
        const string randstr = read[rand() % (read.size()-1)];
        read.pop_back();
        writerandstr << randstr << endl;
    }
    writerandstr.close();

}

void choice_of_generation::generation_two_file(std::string way, std::string way2)
{
    ofstream writerandstr;
    ifstream fin(way);
    ifstream fin2(way2);
    writerandstr.open("Choice.txt");

    vector <string> read;
    if(fin)
    {
        for (; fin;)
        {
            string temp;
            getline(fin, temp);
            read.push_back(temp);
        }
        const string randstr = read[rand() % (read.size()-1)];
        read.pop_back();
        writerandstr << randstr << endl;
    }


    vector <string> read2;
    if(fin2)
    {
        for (; fin2;)
        {
            string temp;
            getline(fin2, temp);
            read2.push_back(temp);
        }
        const string randstr = read2[rand() % (read2.size()-1)];
        read2.pop_back();
        writerandstr << randstr<< endl;
    }
    writerandstr.close();
}

void choice_of_generation::generation_three_file(std::string way,std::string way2,std::string way3)
{
    ofstream writerandstr;
    ifstream fin(way);
    ifstream fin2(way2);
    ifstream fin3(way3);
    writerandstr.open("Choice.txt");

    vector <string> read;
    if(fin)
    {
        for (; fin;)
        {
            string temp;
            getline(fin, temp);
            read.push_back(temp);
        }
        const string randstr = read[rand() % (read.size()-1)];
        read.pop_back();
        writerandstr << randstr << endl;
    }


    vector <string> read2;
    if(fin2)
    {
        for (; fin2;)
        {
            string temp;
            getline(fin2, temp);
            read2.push_back(temp);
        }
        const string randstr = read2[rand() % (read2.size()-1)];
        read2.pop_back();
        writerandstr << randstr<< endl;
    }
    vector <string> read3;
    if(fin3)
    {
        for (; fin3;)
        {
            string temp;
            getline(fin3, temp);
            read3.push_back(temp);
        }
        const string randstr = read3[rand() % (read3.size()-1)];
        read3.pop_back();
        writerandstr << randstr << endl;
    }
    writerandstr.close();
}

//Генерация рандомной строки из выбранного файла
void choice_of_generation::connectFile()
{
    ifstream in1("Choicee.txt");
    ifstream in2("Choice.txt");
    ofstream out("CreateChoice.txt");
    std::string str1, str2;
    while(!in1.eof() || !in2.eof())
    {
        if(std::getline(in1, str1))
            out << str1 << std::endl;
        if(std::getline(in2, str2))
            out << str2 << std::endl;
    }
}

void choice_of_generation::conclusionRandStr()
{
    //Запись случайной строки в новый файл
    QString fileName = "CreateChoice.txt";
    QFile mFile(fileName);
    QTextStream stream(&mFile);
    mFile.open(QFile::ReadOnly | QFile::Text);
    QString buf = stream.readAll();
    //Вывод это строки из файла
    ui->textEdit->setText(buf);
    mFile.close();
}

void choice_of_generation::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        string Way = "Staff.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_2->isChecked())
    {
        string Way = "Street.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_3->isChecked())
    {
        string Way = "Industry.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_3->isChecked() && ui->checkBox_2->isChecked())
    {
        string Way = "Street.txt";
        string Way2 = "Industry.txt";
        generation_two_file( Way, Way2);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_3->isChecked() && ui->checkBox->isChecked())
    {
        string way = "Staff.txt";
        string way2 = "Industry.txt";
        generation_two_file(way,way2);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_2->isChecked() && ui->checkBox->isChecked())
    {
        string way = "Street.txt";
        string way2 = "Staff.txt";
        generation_two_file(way,way2);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_2->isChecked() && ui->checkBox->isChecked() && ui->checkBox_3->isChecked())
    {
        string Way = "Street.txt";
        string Way2 = "Staff.txt";
        string Way3 = "Industry.txt";
        generation_three_file(Way,Way2,Way3);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_6->isChecked())
    {
        string Way = "Industry.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_7->isChecked())
    {
        string Way = "NameOrg.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_8->isChecked())
    {
        string Way = "Staff.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_6->isChecked() && ui->checkBox_7->isChecked())
    {
        string Way = "NameOrg.txt";
        string Way2 = "Industry.txt";
        generation_two_file( Way, Way2);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_6->isChecked() && ui->checkBox_8->isChecked())
    {
        string way = "Staff.txt";
        string way2 = "Industry.txt";
        generation_two_file(way,way2);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_8->isChecked() && ui->checkBox_7->isChecked())
    {
        string way = "NameOrg.txt";
        string way2 = "Staff.txt";
        generation_two_file(way,way2);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_7->isChecked() && ui->checkBox_6->isChecked() && ui->checkBox_8->isChecked())
    {
        string way = "NameOrg.txt";
        string way2 = "Staff.txt";
        string way3 = "Industry.txt";
        generation_three_file(way,way2,way3);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_15->isChecked())
    {
        string Way = "Street.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_16->isChecked())
    {
        string Way = "Staff.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_14->isChecked())
    {
        string Way = "NameOrg.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_11->isChecked())
    {
        string Way = "Street.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_12->isChecked())
    {
        string Way = "NameOrg.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_10->isChecked())
    {
        string Way = "Industry.txt";
        generation(Way);
        connectFile();
        conclusionRandStr();

    }

    if(ui->checkBox_14->isChecked() && ui->checkBox_15->isChecked() && ui->checkBox_16->isChecked())
    {
        string way = "NameOrg.txt";
        string way2 = "Street.txt";
        string way3 = "Staff.txt";
        generation_three_file(way,way2,way3);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_16->isChecked() && ui->checkBox_15->isChecked())
    {
        string Way = "Street.txt";
        string Way2 = "Staff.txt";
        generation_two_file( Way, Way2);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_16->isChecked() && ui->checkBox_14->isChecked())
    {
        string way = "NameOrg.txt";
        string way2 = "Staff.txt";
        generation_two_file(way,way2);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_14->isChecked() && ui->checkBox_15->isChecked())
    {
        string way = "NameOrg.txt";
        string way2 = "Street.txt";
        generation_two_file(way,way2);
        connectFile();
        conclusionRandStr();
    }
   if(ui->checkBox_11->isChecked() && ui->checkBox_12->isChecked())
    {
        string Way = "NameOrg.txt";
        string Way2 = "Street.txt";
        generation_two_file( Way, Way2);
        connectFile();
        conclusionRandStr();

    }
    if(ui->checkBox_11->isChecked() && ui->checkBox_10->isChecked())
    {
        string way = "Street.txt";
        string way2 = "Industry.txt";
        generation_two_file(way,way2);
        connectFile();
        conclusionRandStr();
    }
    if(ui->checkBox_12->isChecked() && ui->checkBox_10->isChecked())
    {
        string way = "NameOrg.txt";
        string way2 = "Industry.txt";
        generation_two_file(way,way2);
        connectFile();
        conclusionRandStr();
    }

    if(ui->checkBox_11->isChecked() && ui->checkBox_12->isChecked() && ui->checkBox_10->isChecked())
    {
        string way = "NameOrg.txt";
        string way2 = "Street.txt";
        string way3 = "Industry.txt";
        generation_three_file(way,way2,way3);
        connectFile();
        conclusionRandStr();
    }

}


void choice_of_generation::on_Organiz_clicked()
{
    if(ui->Organiz->isChecked())
    {
        string Way = "NameOrg.txt";
        generation1charact(Way);

    }
}

void choice_of_generation::on_Location_clicked()
{
    if(ui->Location->isChecked())
    {
        string Way = "Street.txt";
        generation1charact(Way);
    }

}

void choice_of_generation::on_Industry_clicked()
{
    if(ui->Industry->isChecked())
    {
        string Way = "Industry.txt";
        generation1charact(Way);
    }
}

void choice_of_generation::on_Staff_clicked()
{
    if(ui->Staff->isChecked())
    {
        string Way = "Staff.txt";
        generation1charact(Way);
    }
}

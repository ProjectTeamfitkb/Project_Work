#include "choice_of_generation.h"
#include "ui_choice_of_generation.h"
#include "thirdwindow.h"
#include "../objects/objects.h"

using namespace std;

void choice_of_generation::generation1charact(std::string way) //случайная генерация основного парметра
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

void choice_of_generation::generation(std::string way)//случайная генерация одного выбранного параметра и запись их в файл
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
    // }
    writerandstr.close();

}

void choice_of_generation::generation_two_file(std::string way, std::string way2)//случайная генерация двух выбранных параметров и запись их в файл
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


    ifstream fin2(way2);
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

void choice_of_generation::generation_three_file(std::string way,std::string way2,std::string way3)//случайная генерация трех выбранных параметров и запись их в файл
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

    ifstream fin2(way2);
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

    ifstream fin3(way3);
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



void choice_of_generation::connectFile() //объединение двух файлов
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
void thirdwindow::generationOrg(std::string way,std::string way2,std::string way3,std::string way4)//случайная генерация нескольких организаций
{
    ofstream writerandstr;
    writerandstr.open("Create.txt", ios::app);

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

    ifstream fin2(way2);
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

    ifstream fin3(way3);
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
    ifstream fin4(way4);
    vector <string> read4;
    if(fin4)
    {
        for (; fin4;)
        {
            string temp;
            getline(fin4, temp);
            read4.push_back(temp);
        }
        const string randstr = read4[rand() % (read4.size()-1)];
        read4.pop_back();
        writerandstr << randstr << endl;
    }
    writerandstr.close();

}

#include "fourthwindow.h"
#include "ui_fourthwindow.h"
#include "../objects/objects.h"

using namespace std;

fourthwindow::fourthwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fourthwindow)
{
    ui->setupUi(this);
}

fourthwindow::~fourthwindow()
{
    delete ui;
}

int fourthwindow::random_generator(int a, int b)//Функция генерации рандомных чисел, которая принимает 2 параметра:
{                                               //Параметр a - нижняя граница
    int n;                                      //Параметр b - верхняя граница
    n = a + rand() % b;                         //n - возвращаемое значение от a до b
    return n;
}

void fourthwindow::on_Generate_clicked()
{
    srand(time(NULL));
    QString currency = "";
    QString bank = "";
    QString str_output = "";                    //Строка-буфер для хранения данных
    QString bank_account = "";
    string professions_data = "Professions.txt";//Файлы с исходными данными
    string card_data = "Cards.txt";             //
    int num_bank, num_currency;
    int num_bank_account;
    int num_card = 15;
    int num_professions = 15;
    if(ui->Euro->isChecked())                   //Условия выбора валюты пользователем, на основе этого выбора количество средств на карте определяется автоматически
    {
        currency = "E";
        num_bank_account = random_generator(250, 3000);
    }
    if(ui->Dollars->isChecked())
    {
        currency = "$";
        num_bank_account = random_generator(250, 3000);
    }
    if(ui->Rubles->isChecked())
    {
        currency = "P";
        num_bank_account = random_generator(23000, 170000);
    }
    if(!ui->Euro->isChecked() && !ui->Dollars->isChecked() && !ui->Rubles->isChecked())  //Если пользователь не выбрал валюту, то она определяется автоматически
    {
         num_currency = random_generator(1, 3);
         if(num_currency == 1)
         {
             currency = "E";
             num_bank_account = random_generator(250, 3000);
         }
         if(num_currency == 2)
         {
             currency = "$";
             num_bank_account = random_generator(250, 3000);
         }
         if(num_currency == 3)
         {
             currency = "P";
             num_bank_account = random_generator(23000, 170000);
         }
    }
    if(ui->SberBank->isChecked())    //Выбор пользователем названия банка
    {
        bank = "SberBank";
    }
    if(ui->SDM_Bank->isChecked())
    {
        bank = "SDM-Bank";
    }
    if(ui->VTB_24->isChecked())
    {
        bank = "VTB-24";
    }
    if(!ui->SberBank->isChecked() && !ui->SDM_Bank->isChecked() && !ui->VTB_24->isChecked()) //Если пользователь не выбрал банк, то он определяется автоматически
    {
        num_bank = random_generator(1, 3);
        if(num_bank == 1)
        {
            bank = "SberBank";
        }
        if(num_bank == 2)
        {
            bank = "SDM-Bank";
        }
        if(num_bank == 3)
        {
            bank = "VTB-24";
        }
    }
    bank_account = QString::number(num_bank_account);                  //Копирование строк в строку-буфер
    QString buf1 = generation_data(professions_data, num_professions); //
    QString buf2 = generation_data(card_data, num_card);               //
    str_output += buf1;                                                //
    str_output += bank_account;                                        //
    str_output += currency;                                            //
    str_output += bank;                                                //
    str_output += buf2;                                                //
    ui->textEdit->setText(str_output);                                 //Вывод строки-буфера на экран
}

QString fourthwindow::generation_data(string file_name, int num_rand)  //Функция выбора случайной строки из файла
{
    ifstream file_input;
    string str;
    int n;
    file_input.open(file_name);
    if (!file_input.is_open())
    {
        ui->textEdit->setText("Error opening the file.");
    }
    else
    {
        n = random_generator(1, num_rand);                              //Определение номера случайной строки
        if (n != 1)
        {
            for (int i = 1; i < n; i++)
            {
                getline(file_input, str);                               //Переход на номер нужной строки
            }
        }
        getline(file_input, str);
    }
    QString qstr = QString::fromStdString(str);
    file_input.close();
    return qstr;
}

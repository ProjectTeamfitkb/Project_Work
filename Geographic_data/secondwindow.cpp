#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QFileDialog>
#include "DeliveryLib_H.h"
#include "../objects/objects.h"

secondwindow::secondwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);
}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::conclusionRandStr()
{
    //Запись случайной строки в новый файл на диске D
    setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы
    char buff[250]; // буфер промежуточного хранения считываемого из файла текста
    ifstream fin("Creates.txt"); // открыли файл для чтения
    fin.getline(buff, 250); // считали строку из файла
    //Вывод это строки из файла
    ui->textEdit->setText(buff);
    fin.close();
}

void secondwindow::on_pushButton_clicked()
{
    setlocale(LC_ALL, "Russian");

    int cafesAmount = 5;  // задаем количество кафе

    // задаем координаты пользователя
    int userX = 99;
    int userY = 99;

    DeliverySystem ds(cafesAmount);

    ds.generateCafes();  // генерируем кафе

    Address nearestCafe = ds.getNearestCafe(userX, userY);  // находим ближайшее кафе

    nearestCafe.printAddress();

    conclusionRandStr();
}

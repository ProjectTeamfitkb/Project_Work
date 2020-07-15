#include "implementation.cpp"

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

void choice_of_generation::conclusionRandStr() //вывод сгенерированной организации
{
    QString fileName = "CreateChoice.txt";
    QFile mFile(fileName);
    QTextStream stream(&mFile);
    mFile.open(QFile::ReadOnly | QFile::Text);
    QString buf = stream.readAll();
    ui->textEdit->setText(buf);
    mFile.close();
}

void choice_of_generation::on_pushButton_clicked()
{
    //условия, по которым выводится организация
    if(ui->checkBox->isChecked())
    {

        string Way = "Staff.txt";

        generation(Way);

        connectFile();
        conclusionRandStr();
        ofstream writerandstr;
        writerandstr.open("Choice.txt");

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

    if(ui->checkBox_14->isChecked() && ui->checkBox_15->isChecked() && ui->checkBox_16->isChecked())
    {
        string way = "NameOrg.txt";
        string way2 = "Street.txt";
        string way3 = "Staff.txt";
        generation_three_file(way,way2,way3);
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

    string Way = "NameOrg.txt";
    generation1charact(Way);


}

void choice_of_generation::on_Location_clicked()
{

    string Way = "Street.txt";
    generation1charact(Way);


}

void choice_of_generation::on_Industry_clicked()
{

    string Way = "Industry.txt";
    generation1charact(Way);

}

void choice_of_generation::on_Staff_clicked()
{

    string Way = "Staff.txt";
    generation1charact(Way);

}


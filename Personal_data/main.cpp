#include "pw_personal.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PW_personal w;
    w.show();
    return a.exec();
}

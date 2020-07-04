#include "pw_organizational.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PW_organizational w;
    w.show();
    return a.exec();
}

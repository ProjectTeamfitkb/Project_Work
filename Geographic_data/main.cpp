#include "pw_geographic.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PW_geographic w;
    w.show();
    return a.exec();
}

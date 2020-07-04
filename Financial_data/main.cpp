#include "pw_financial.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PW_financial w;
    w.show();
    return a.exec();
}

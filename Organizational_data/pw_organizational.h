#ifndef PW_ORGANIZATIONAL_H
#define PW_ORGANIZATIONAL_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class PW_organizational; }
QT_END_NAMESPACE

class PW_organizational : public QDialog
{
    Q_OBJECT

public:
    PW_organizational(QWidget *parent = nullptr);
    ~PW_organizational();


private:
    Ui::PW_organizational *ui;
};
#endif // PW_ORGANIZATIONAL_H

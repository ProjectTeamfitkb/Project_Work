#ifndef PW_PERSONAL_H
#define PW_PERSONAL_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class PW_personal; }
QT_END_NAMESPACE

class PW_personal : public QDialog
{
    Q_OBJECT

public:
    PW_personal(QWidget *parent = nullptr);
    ~PW_personal();

private:
    Ui::PW_personal *ui;
};
#endif // PW_PERSONAL_H

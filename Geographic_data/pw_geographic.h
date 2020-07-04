#ifndef PW_GEOGRAPHIC_H
#define PW_GEOGRAPHIC_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class PW_geographic; }
QT_END_NAMESPACE

class PW_geographic : public QDialog
{
    Q_OBJECT

public:
    PW_geographic(QWidget *parent = nullptr);
    ~PW_geographic();

private:
    Ui::PW_geographic *ui;
};
#endif // PW_GEOGRAPHIC_H

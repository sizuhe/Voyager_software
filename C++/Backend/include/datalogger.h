#ifndef DATALOGGER_H
#define DATALOGGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class datalogger; }
QT_END_NAMESPACE

class datalogger : public QMainWindow
{
    Q_OBJECT

public:
    datalogger(QWidget *parent = nullptr);
    ~datalogger();

private:
    Ui::datalogger *ui;
};
#endif // DATALOGGER_H

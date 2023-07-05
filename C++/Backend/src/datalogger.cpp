#include "datalogger.h"
#include "ui_datalogger.h"

datalogger::datalogger(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::datalogger)
{
    ui->setupUi(this);
    setWindowTitle("Voyager datalogger");
}

datalogger::~datalogger()
{
    delete ui;
}


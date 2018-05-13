#include "signal_slot.h"
#include "ui_signal_slot.h"

signal_slot::signal_slot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signal_slot)
{
    ui->setupUi(this);
}

signal_slot::~signal_slot()
{
    delete ui;
}

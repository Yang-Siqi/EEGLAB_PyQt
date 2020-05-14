#include "EEGLAB.h"
#include "ui_EEGLAB.h"

EEGLAB::EEGLAB(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EEGLAB)
{
    ui->setupUi(this);
}

EEGLAB::~EEGLAB()
{
    delete ui;
}


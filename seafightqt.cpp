#include "seafightqt.h"
#include "ui_seafightqt.h"

seaFightQt::seaFightQt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seaFightQt)
{
    ui->setupUi(this);
}

seaFightQt::~seaFightQt()
{
    delete ui;
}

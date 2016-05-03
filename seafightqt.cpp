#include "seafightqt.h"
#include "ui_seafightqt.h"

seaFightQt::seaFightQt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seaFightQt)
{
    ui->setupUi(this);
    connect(this->ui->leaveGameButton,SIGNAL(clicked(bool)),this, SLOT(close()));

}

seaFightQt::~seaFightQt()
{
    delete ui;
}

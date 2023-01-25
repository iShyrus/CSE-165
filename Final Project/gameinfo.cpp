#include "gameinfo.h"
#include "ui_gameinfo.h"

gameInfo::gameInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameInfo)
{
    ui->setupUi(this);
}

gameInfo::~gameInfo()
{
    delete ui;
}

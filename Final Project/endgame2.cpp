#include "endgame2.h"
#include "ui_endgame2.h"

endGame2::endGame2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endGame2)
{
    ui->setupUi(this);
}

endGame2::~endGame2()
{
    delete ui;
}

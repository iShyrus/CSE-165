#include "endgame.h"
#include "ui_endgame.h"
#include "mainwindow.h"
#include "gameinfo.h"
#include "ui_mainwindow.h"
#include "endgame.h"

#include <QDebug>

endGame::endGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endGame)
{
    ui->setupUi(this);
}

endGame::~endGame()
{
    delete ui;
}


void endGame::on_buttonBox_accepted()
{

    /*

    playerT=0;
     ui->circleTurn -> setVisible(false);
     ui->crossTurn -> setVisible(true);

      XLvl2Count = 2;
      XLvl3Count = 1;
      OLvl2Count = 2;
      OLvl3Count = 1;

      ui->XLvl3Count->setText("1 left");
      ui->OLvl3Count->setText("1 left");
      ui->XLvl2Count->setText("2 left");
      ui->OLvl2Count->setText("2 left");

    ainWindow::ui->grid_A1->setText("-");
    ui->grid_A2->setText("-");
    ui->grid_A3->setText("-");
    ui->grid_A4->setText("-");
    ui->grid_A5->setText("-");
    ui->grid_B1->setText("-");
    ui->grid_B2->setText("-");
    ui->grid_B3->setText("-");
    ui->grid_B4->setText("-");
    ui->grid_B5->setText("-");
    ui->grid_C1->setText("-");
    ui->grid_C2->setText("-");
    ui->grid_C3->setText("-");
    ui->grid_C4->setText("-");
    ui->grid_C5->setText("-");
    ui->grid_D1->setText("-");
    ui->grid_D2->setText("-");
    ui->grid_D3->setText("-");
    ui->grid_D4->setText("-");
    ui->grid_D5->setText("-");
    ui->grid_E1->setText("-");
    ui->grid_E2->setText("-");
    ui->grid_E3->setText("-");
    ui->grid_E4->setText("-");
    ui->grid_E5->setText("-");



    ui->grid_A1->setVisible(false);
    ui->grid_C1->setVisible(false);
    ui->grid_B1->setVisible(false);
    ui->grid_D1->setVisible(false);
    ui->grid_E1->setVisible(false);
    ui->grid_A2->setVisible(false);
    ui->grid_A3->setVisible(false);
    ui->grid_A4->setVisible(false);
    ui->grid_A5->setVisible(false);
    ui->grid_E2->setVisible(false);
    ui->grid_E3->setVisible(false);
    ui->grid_E4->setVisible(false);
    ui->grid_E5->setVisible(false);
    ui->grid_B5->setVisible(false);
    ui->grid_C5->setVisible(false);
    ui->grid_D5->setVisible(false);


*/

}


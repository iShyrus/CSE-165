#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "gameinfo.h"
#include "restart.h"
#include "endgame.h"
#include "endgame2.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    ui->circleTurn -> setVisible(false);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::winCheck(){

      endGame oWin;
      endGame2 xWin;
      xWin.setModal(true);
      oWin.setModal(true);

    if(A1=="X" && A2 =="X" && A3 =="X" && A4 == "X" && A5 =="X"){
        xWin.exec();
    }
    if(B1=="X" && B2 =="X" && B3 =="X" && B4 == "X" && B5 =="X"){
        xWin.exec();
    }
    if(C1=="X" && C2 =="X" && C3 =="X" && C4 == "X" && C5 =="X"){
        xWin.exec();
    }
    if(D1=="X" && D2 =="X" && D3 =="X" && D4 == "X" && D5 =="X"){
       xWin.exec();
    }
    if(E1=="X" && E2 =="X" && E3 =="X" && E4 == "X" && E5 =="X"){
       xWin.exec();
    }

    //HORIZONTAL
    if(A1=="X" && B1 =="X" && C1 =="X" && D1 == "X" && E1 =="X"){
        xWin.exec();
    }
    if(A2=="X" && B2 =="X" && C2 =="X" && D2 == "X" && E2 =="X"){
        xWin.exec();
    }
    if(A3=="X" && B3 =="X" && C3 =="X" && D3 == "X" && E3 =="X"){
       xWin.exec();
    }
    if(A4=="X" && B4 =="X" && C4 =="X" && D4 == "X" && E4 =="X"){
        xWin.exec();
    }
    if(A5=="X" && B5 =="X" && C5 =="X" && D5 == "X" && E5 =="X"){
        xWin.exec();
    }

    //DIAGONAL
    if(A1=="X" && B2 =="X" && C3 =="X" && D4 == "X" && E5 =="X"){
       xWin.exec();
      }
    if(A5=="X" && B4 =="X" && C3 =="X" && D2 == "X" && E1 =="X"){
      xWin.exec();
    }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // O

    //VERTICAL

    if(A1=="O" && A2 =="O" && A3 =="O" && A4 == "O" && A5 =="O"){
        oWin.exec();
    }
    if(B1=="O" && B2 =="O" && B3 =="O" && B4 == "O" && B5 =="O"){
        oWin.exec();
    }
    if(C1=="O" && C2 =="O" && C3 =="O" && C4 == "O" && C5 =="O"){
        oWin.exec();
    }
    if(D1=="O" && D2 =="O" && D3 =="O" && D4 == "O" && D5 =="O"){
        oWin.exec();
    }
    if(E1=="O" && E2 =="O" && E3 =="O" && E4 == "O" && E5 =="O"){
        oWin.exec();
    }

    //HORIZONTAL
    if(A1=="O" && B1 =="O" && C1 =="O" && D1 == "O" && E1 =="O"){
        oWin.exec();
    }
    if(A2=="O" && B2 =="O" && C2 =="O" && D2 == "O" && E2 =="O"){
        oWin.exec();
    }
    if(A3=="O" && B3 =="O" && C3 =="O" && D3 == "O" && E3 =="O"){
        oWin.exec();
    }
    if(A4=="O" && B4 =="O" && C4 =="O" && D4 == "O" && E4 =="O"){
        oWin.exec();
    }
    if(A5=="O" && B5 =="O" && C5 =="O" && D5 == "O" && E5 =="O"){
       oWin.exec();
    }

    //DIAGONAL
    if(A1=="O" && B2 =="O" && C3 =="O" && D4 == "O" && E5 =="O"){
       oWin.exec();
    }
    if(A5=="O" && B4 =="O" && C3 =="O" && D2 == "O" && E1 =="O"){
      oWin.exec();
    }




}

void MainWindow::turn(){

    playerT++;
    qDebug()<<playerT;

    if (playerT%2==0){
           ui->crossTurn -> setVisible(true);
           ui->circleTurn -> setVisible(false);
        }
        else{
            ui->crossTurn -> setVisible(false);
            ui->circleTurn -> setVisible(true);
        }

    if(playerT==3){

    ui->grid_A1->setVisible(true);
    ui->grid_C1->setVisible(true);
    ui->grid_B1->setVisible(true);
    ui->grid_D1->setVisible(true);
    ui->grid_E1->setVisible(true);
    ui->grid_A2->setVisible(true);
    ui->grid_A3->setVisible(true);
    ui->grid_A4->setVisible(true);
    ui->grid_A5->setVisible(true);
    ui->grid_E2->setVisible(true);
    ui->grid_E3->setVisible(true);
    ui->grid_E4->setVisible(true);
    ui->grid_E5->setVisible(true);
    ui->grid_B5->setVisible(true);
    ui->grid_C5->setVisible(true);
    ui->grid_D5->setVisible(true);
    }


}


void MainWindow::on_grid_A1_clicked()
{


   QString tileText = ui->grid_A1->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A1 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           A1 ="X";
           winCheck();

       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           A1 ="X";
           winCheck();

       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A1 ="O";
           winCheck();

       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           A1 ="O";
           winCheck();

       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           A1 ="O";
           winCheck();

       }
   }






}


void MainWindow::on_grid_A2_clicked()
{

   QString tileText = ui->grid_A2->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A2 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           A2 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           A2 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A2 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           A2 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           A2 ="O";
           winCheck();
       }
   }



}


void MainWindow::on_grid_A3_clicked()
{

   QString tileText = ui->grid_A3->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A3 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           A3 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           A3 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A3 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           A3 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           A3 ="O";
           winCheck();
       }
   }




}


void MainWindow::on_grid_A4_clicked()
{

   QString tileText = ui->grid_A4->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A4 ="X";
           winCheck();

       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           A4 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           A4 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A4 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           A4 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           A4 ="O";
           winCheck();
       }
   }




}


void MainWindow::on_grid_A5_clicked()
{

   QString tileText = ui->grid_A5->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A5 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           A5 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           A5 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_A5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           A5 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           A5 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_A5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           A5 ="O";
           winCheck();
       }
   }




}


void MainWindow::on_grid_B1_clicked()
{

   QString tileText = ui->grid_B1->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B1 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           B1 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           B1 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B1 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           B1 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           B1 ="O";
           winCheck();
       }
   }




}


void MainWindow::on_grid_B2_clicked()
{

   QString tileText = ui->grid_B2->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B2 ="X";
           winCheck();

       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           B2 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           B2 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B2 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           B2 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           B2 ="O";
           winCheck();
       }
   }




}


void MainWindow::on_grid_B3_clicked()
{

   QString tileText = ui->grid_B3->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B3 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           B3 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           B3 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B3 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           B3 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           B3 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_B4_clicked()
{

   QString tileText = ui->grid_B4->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B4 ="X";
           winCheck();

       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           B4 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           B4 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B4 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           B4 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           B4 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_B5_clicked()
{


   QString tileText = ui->grid_B5->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B5 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           B5 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           B5 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_B5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           B5 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           B5 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_B5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           B5 ="O";
           winCheck();
       }
   }








}


void MainWindow::on_grid_C1_clicked()
{

   QString tileText = ui->grid_C1->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C1 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           C1 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           C1 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C1 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           C1 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           C1 ="O";
           winCheck();
       }
   }





}


void MainWindow::on_grid_C2_clicked()
{

   QString tileText = ui->grid_C2->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C2 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           C2 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           C2 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C2 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           C2 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           C2 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_C3_clicked()
{

   QString tileText = ui->grid_C3->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C3 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           C3 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           C3 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C3 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           C3 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           C3 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_C4_clicked()
{

   QString tileText = ui->grid_C4->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C4 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           C4 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           C4 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C4 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           C4 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           C4 ="O";
           winCheck();
       }
   }





}


void MainWindow::on_grid_C5_clicked()
{

   QString tileText = ui->grid_C5->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C5 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           C5 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           C5 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_C5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           C5 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           C5 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_C5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           C5 ="O";
           winCheck();
       }
   }





}


void MainWindow::on_grid_D1_clicked()
{

   QString tileText = ui->grid_D1->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D1 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           D1 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           D1 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D1 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           D1 ="O";
           winCheck();

       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           D1 ="O";
           winCheck();
       }
   }





}


void MainWindow::on_grid_D2_clicked()
{

   QString tileText = ui->grid_D2->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D2 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           D2 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           D2 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D2 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           D2 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           D2 ="O";
           winCheck();
       }
   }





}


void MainWindow::on_grid_D3_clicked()
{

   QString tileText = ui->grid_D3->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D3 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           D3 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           D3 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D3 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           D3 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           D3 ="O";
           winCheck();
       }
   }





}


void MainWindow::on_grid_D4_clicked()
{

   QString tileText = ui->grid_D4->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D4 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           D4 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           D4 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D4 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           D4 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           D4 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_D5_clicked()
{

   QString tileText = ui->grid_D5->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D5 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           D5 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           D5 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_D5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           D5 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           D5 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_D5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           D5 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_E1_clicked()
{

   QString tileText = ui->grid_E1->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E1 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           E1 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           E1 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E1 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           E1 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E1->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           E1 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_E2_clicked()
{

   QString tileText = ui->grid_E2->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E2 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           E2 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           E2 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E2 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           E2 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E2->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           E2 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_E3_clicked()
{

   QString tileText = ui->grid_E3->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E3 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           E3 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           E3 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E3 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           E3 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E3->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           E3 ="O";
           winCheck();
       }
   }






}


void MainWindow::on_grid_E4_clicked()
{

   QString tileText = ui->grid_E4->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E4 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           E4 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           E4 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E4 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           E4 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E4->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           E4 ="O";
           winCheck();
       }
   }





}

void MainWindow::on_grid_E5_clicked()
{

   QString tileText = ui->grid_E5->text();

   if(chosenLevelNum==1 && tileText!="O1" && tileText!="O2" &&tileText!="O3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E5 ="X";
           winCheck();
       }
   }

   if(chosenLevelNum==2 && tileText!="O2" &&tileText!="O3" && XLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl2Count -= 1;
           std::string XLvl2CountString = std::to_string(XLvl2Count);
           ui->XLvl2Count->setText(QString::fromStdString(XLvl2CountString +" Left"));
           E5 ="X";
           winCheck();
       }
   }


   if(chosenLevelNum==3 && tileText!="O3" && XLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           XLvl3Count -= 1;
           std::string XLvl3CountString = std::to_string(XLvl3Count);
           ui->XLvl3Count->setText(QString::fromStdString(XLvl3CountString +" Left"));
           E5 ="X";
           winCheck();
       }
   }



   if(chosenLevelNum==4 && tileText!="X1" && tileText!="X2" &&tileText!="X3"){
       if(chosenLevel == true){
           turn();
           ui->grid_E5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           E5 ="O";
           winCheck();
       }
   }

   if(chosenLevelNum==5 && tileText!="X2" &&tileText!="X3" && OLvl2Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl2Count -= 1;
           std::string OLvl2CountString = std::to_string(OLvl2Count);
           ui->OLvl2Count->setText(QString::fromStdString(OLvl2CountString +" Left"));
           E5 ="O";
           winCheck();
       }
   }


   if(chosenLevelNum==6 && tileText!="X3" && OLvl3Count!=0){
       if(chosenLevel == true){
           turn();
           ui->grid_E5->setText(QString::fromStdString(playerMove));
           chosenLevel = false;
           OLvl3Count -= 1;
           std::string OLvl3CountString = std::to_string(OLvl3Count);
           ui->OLvl3Count->setText(QString::fromStdString(OLvl3CountString +" Left"));
           E5 ="O";
           winCheck();
       }
   }
  }


void MainWindow::on_Xlvl1_clicked()
{
   if (playerT%2==0){
       playerMove ="X1";
       chosenLevel = true;
       chosenLevelNum = 1;
   }

}

void MainWindow::on_Xlvl2_clicked()
{
   if (playerT%2==0){
       playerMove ="X2";
       chosenLevel = true;
       chosenLevelNum = 2;

   }
}

void MainWindow::on_Xlvl3_clicked()
{
   if (playerT%2==0){
       playerMove ="X3";
       chosenLevel = true;
       chosenLevelNum = 3;

   }
}

void MainWindow::on_Olvl1_clicked()
{
   if (playerT%2==1){
       playerMove ="O1";
       chosenLevel = true;
       chosenLevelNum = 4;

   }

}

void MainWindow::on_Olvl2_clicked()
{
   if (playerT%2==1){
       playerMove ="O2";
       chosenLevel = true;
       chosenLevelNum = 5;

   }
}

void MainWindow::on_Olvl3_clicked()
{
   if (playerT%2==1){
       playerMove ="O3";
       chosenLevel = true;
       chosenLevelNum = 6;

   }
}


void MainWindow::on_restart_clicked()
{

    playerT=0;
     ui->circleTurn -> setVisible(false);
     ui->crossTurn -> setVisible(true);

      XLvl2Count = 2;
      XLvl3Count = 1;
      OLvl2Count = 2;
      OLvl3Count = 1;

      ui->XLvl3Count->setText("1 Left");
      ui->OLvl3Count->setText("1 Left");
      ui->XLvl2Count->setText("2 Left");
      ui->OLvl2Count->setText("2 Left");

    ui->grid_A1->setText("-");
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

    A1 = "-";  A2 = "-";  A3 = "-";  A4 = "-";  A5 = "-";
    B1 = "-";  B2 = "-";  B3 = "-";  B4 = "-";  B5 = "-";
    C1 = "-";  C2 = "-";  C3 = "-";  C4 = "-";  C5 = "-";
    D1 = "-";  D2 = "-";  D3 = "-";  D4 = "-";  D5 = "-";
    E1 = "-";  E2 = "-";  E3 = "-";  E4 = "-";  E5 = "-";



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






}

void MainWindow::on_gameInfo_clicked()
{
    gameInfo gameInfo;

    gameInfo.setModal(true);
    gameInfo.exec();
}



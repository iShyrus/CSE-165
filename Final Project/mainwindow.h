
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void turn();
    int playerT = 0;
    std::string playerMove;
    bool chosenLevel=false;
    int chosenLevelNum = 0;
    int XLvl2Count = 2;
    int XLvl3Count = 1;
    int OLvl2Count = 2;
    int OLvl3Count = 1;

    std::string A1;
    std::string A2;
    std::string A3;
    std::string A4;
    std::string A5;
    std::string B1;
    std::string B2;
    std::string B3;
    std::string B4;
    std::string B5;
    std::string C1;
    std::string C2;
    std::string C3;
    std::string C4;
    std::string C5;
    std::string D1;
    std::string D2;
    std::string D3;
    std::string D4;
    std::string D5;
    std::string E1;
    std::string E2;
    std::string E3;
    std::string E4;
    std::string E5;

private slots:
    //void turn();


    void on_restart_clicked();
    void winCheck();


    void on_gameInfo_clicked();

   // void clear();


      // v grid functions v //

    void on_grid_B3_clicked();

    void on_grid_C3_clicked();

    void on_grid_A1_clicked();

    void on_grid_B1_clicked();

    void on_grid_C1_clicked();

    void on_grid_D1_clicked();

    void on_grid_E1_clicked();

    void on_grid_A2_clicked();

    void on_grid_A3_clicked();

    void on_grid_A4_clicked();

    void on_grid_A5_clicked();

    void on_grid_B2_clicked();

    void on_grid_B4_clicked();

    void on_grid_B5_clicked();

    void on_grid_C2_clicked();

    void on_grid_C4_clicked();

    void on_grid_C5_clicked();

    void on_grid_D2_clicked();

    void on_grid_D3_clicked();

    void on_grid_D4_clicked();

    void on_grid_D5_clicked();

    void on_grid_E2_clicked();

    void on_grid_E3_clicked();

    void on_grid_E4_clicked();

  // ^ grid functions ^ //

    void on_Xlvl1_clicked();

    void on_Xlvl2_clicked();

    void on_Xlvl3_clicked();


    void on_Olvl1_clicked();

    void on_Olvl2_clicked();

    void on_Olvl3_clicked();

    void on_grid_E5_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H


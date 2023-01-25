#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtOpenGL>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    float y_inc =0;
    float x_inc =0;
    float z_inc =0;
    float xpos_inc = 0;
    float ypos_inc = 0;

    void mousePressEvent(QMouseEvent *);

    void mouseMoveEvent(QMouseEvent *);

    ~MainWindow();

private slots:


    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    void keyPressEvent(QKeyEvent *);
    float lastX;
    float lastY;
};

#endif // MAINWINDOW_H

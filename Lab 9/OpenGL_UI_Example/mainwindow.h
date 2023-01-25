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
    ~MainWindow();

private slots:
    void on_x_rot_slider_valueChanged(int value);

    void on_y_rot_slider_valueChanged(int value);

    void on_z_rot_slider_valueChanged(int value);

    void on_pushButton_clicked();

    void on_translatex_valueChanged(int value);

    void on_translatey_valueChanged(int value);

    void on_translatez_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

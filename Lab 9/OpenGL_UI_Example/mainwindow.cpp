#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->x_rot_slider->setStyleSheet("QSlider::groove:horizontal {background-color:grey;}" "QSlider::handle:horizontal {background-color:red; height:10px; width: 10px;}");
    ui->y_rot_slider->setStyleSheet("QSlider::groove:horizontal {background-color:grey;}" "QSlider::handle:horizontal {background-color:red; height:10px; width: 10px;}");
    ui->z_rot_slider->setStyleSheet("QSlider::groove:horizontal {background-color:grey;}" "QSlider::handle:horizontal {background-color:red; height:10px; width: 10px;}");
    ui->rotate_x_label->setStyleSheet(QStringLiteral("font: 12pt \"Comic Sans MS\";"));
    ui->rotate_y_label->setStyleSheet(QStringLiteral("font: 12pt \"Comic Sans MS\";"));
    ui->rotate_z_label->setStyleSheet(QStringLiteral("font: 12pt \"Comic Sans MS\";"));

    ui->translatex->setStyleSheet("QSlider::groove:horizontal {background-color:grey;}" "QSlider::handle:horizontal {background-color:red; height:10px; width: 10px;}");
    ui->translatey->setStyleSheet("QSlider::groove:horizontal {background-color:grey;}" "QSlider::handle:horizontal {background-color:red; height:10px; width: 10px;}");
    ui->translatez->setStyleSheet("QSlider::groove:horizontal {background-color:grey;}" "QSlider::handle:horizontal {background-color:red; height:10px; width: 10px;}");
    ui->label->setStyleSheet(QStringLiteral("font: 12pt \"Comic Sans MS\";"));
    ui->label_2->setStyleSheet(QStringLiteral("font: 12pt \"Comic Sans MS\";"));
    ui->label_3->setStyleSheet(QStringLiteral("font: 12pt \"Comic Sans MS\";"));

    ui->pushButton->setStyleSheet(QStringLiteral("font: 12pt \"Comic Sans MS\";"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_x_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_y_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}

void MainWindow::on_z_rot_slider_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setRotation(
                ui->x_rot_slider->value(),
                ui->y_rot_slider->value(),
                ui->z_rot_slider->value()
                );
}



void MainWindow::on_pushButton_clicked()
{
    close();
}


void MainWindow::on_translatex_valueChanged(int value)
{

    Q_UNUSED(value);
    ui->openGLWidget->setPosition(
                ui->translatex->value(),
                ui->translatey->value(),
                ui->translatez->value()
                );
}


void MainWindow::on_translatey_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setPosition(
                ui->translatex->value(),
                ui->translatey->value(),
                ui->translatez->value()
                );
}


void MainWindow::on_translatez_valueChanged(int value)
{
    Q_UNUSED(value);
    ui->openGLWidget->setPosition(
                ui->translatex->value(),
                ui->translatey->value(),
                ui->translatez->value()
                );
}


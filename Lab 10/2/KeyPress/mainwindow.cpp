#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "my_gl.h"
#include <QDebug>





MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::keyPressEvent(QKeyEvent *event)
{


    if (event->key() == Qt::Key_D) {
        //qDebug() <<y_inc;
        y_inc+=5;
    }

    if (event->key() == Qt::Key_A) {
        y_inc += -5.0f;
    }
    if (event->key() == Qt::Key_W) {
        //qDebug() <<y_inc;
        x_inc+=5;
    }

    if (event->key() == Qt::Key_S) {
        x_inc += -5.0f;
    }
    if (event->key() == Qt::Key_E) {
        //qDebug() <<y_inc;
        z_inc+=5;
    }

    if (event->key() == Qt::Key_Q) {
        z_inc += -5.0f;
    }
    ui->openGLWidget->setRotation(x_inc,y_inc,z_inc);


    if (event->key() == Qt::Key_Up) {
        ypos_inc += 0.1;
    }
    if (event->key() == Qt::Key_Down) {
        ypos_inc += -0.1;
    }
    if (event->key() == Qt::Key_Right) {
        xpos_inc += 0.1;
    }
    if (event->key() == Qt::Key_Left) {
        xpos_inc += -0.1;
    }
    ui->openGLWidget->setRotation(x_inc,y_inc,z_inc);
    ui->openGLWidget->setPosition(xpos_inc,ypos_inc);

}

void MainWindow::on_pushButton_clicked()
{
    close();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    lastX = event->x();
    lastY = event->y();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    float xAtRelease = event->x();
    float yAtRelease = event->y();

        qDebug()<<xAtRelease/350;
        qDebug()<<yAtRelease/350;

    float dx = xAtRelease - lastX;
    float dy = yAtRelease - lastY;

//    qDebug()<<dx;
//    qDebug()<<dy;

    float x = ui->openGLWidget->x();
    float y = ui->openGLWidget->y();


    ui->openGLWidget->setPosition(  (lastX/350+xAtRelease)/350 ,-(lastY/350+yAtRelease)/350);


    lastX = event->x();
    lastY = event->y();
    qDebug()<<lastX;
    qDebug()<<lastY;
}

#include "restart.h"
#include <QApplication>
#include <QProcess>


restart::restart(QObject *parent) :
    QObject (parent)
{
}

void restart::makeRestart()
{
qApp->quit();

 QProcess::startDetached(qApp->arguments()[0], qApp->arguments()); //application restart
}

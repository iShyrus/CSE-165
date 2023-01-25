#ifndef RESTART_H
#define RESTART_H

#include <QObject>


class restart : public QObject
{
    Q_OBJECT

public:
    explicit restart(QObject *parent = nullptr);
    Q_INVOKABLE void makeRestart();

signals:

public slots:
};


#endif // RESTART_H

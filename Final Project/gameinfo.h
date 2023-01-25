#ifndef GAMEINFO_H
#define GAMEINFO_H

#include <QDialog>

namespace Ui {
class gameInfo;
}

class gameInfo : public QDialog
{
    Q_OBJECT

public:
    explicit gameInfo(QWidget *parent = nullptr);
    ~gameInfo();

private:
    Ui::gameInfo *ui;
};

#endif // GAMEINFO_H

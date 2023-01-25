#ifndef ENDGAME2_H
#define ENDGAME2_H

#include <QDialog>

namespace Ui {
class endGame2;
}

class endGame2 : public QDialog
{
    Q_OBJECT

public:
    explicit endGame2(QWidget *parent = nullptr);
    ~endGame2();

private:
    Ui::endGame2 *ui;
};

#endif // ENDGAME2_H

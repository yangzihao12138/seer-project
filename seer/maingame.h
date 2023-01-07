#ifndef MAINGAME_H
#define MAINGAME_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainGame; }
QT_END_NAMESPACE

class MainGame : public QWidget
{
    Q_OBJECT

public:
    MainGame(QWidget *parent = nullptr);
    ~MainGame();

private:
    Ui::MainGame *ui;
};
#endif // MAINGAME_H

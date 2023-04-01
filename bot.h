#ifndef BOT_H
#define BOT_H

#include "player.h"
#include <QWidget>
#include "game.h"
#include "mainwindow.h"

class Bot: public Player
{
public:
    Bot(Box::State piece,QMainWindow* NewWindow);
    ~Bot();
    Box::State m_player_piece;
    void SetTurn(bool turn);
private:
    QMainWindow &m_window;
};
#endif // BOT_H

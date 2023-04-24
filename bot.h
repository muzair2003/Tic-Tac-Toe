#ifndef BOT_H
#define BOT_H

#include <QObject>
#include <QWidget>
#include "player.h"

class Bot: public Player
{
    Q_OBJECT
public:
    Bot(Player::Piece);
    ~Bot();
    void SetTurn(bool turn);
};

#endif // BOT_H

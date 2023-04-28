#ifndef BOT_H
#define BOT_H
#include <QObject>
#include <QWidget>
#include "player.h"

class Bot: public Player
{
Q_OBJECT
public:
    Bot(Box::State piece);
    ~Bot();
    Box::Pos SetTurn(bool turn,std::vector<Box::Pos>);
private:
   Box::State m_piece;
   Box::Pos m_choose;
};

#endif // BOT_H

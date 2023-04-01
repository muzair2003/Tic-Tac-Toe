#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include "box.h"

class Player:public QObject
{
    Q_OBJECT
public:
    Player(std::string Name,Box::State piece);
    ~Player();
    void SetTurn(bool turn);
    bool GetTurn();
private:
   std::string m_Name;
       Box::State m_piece;
       bool m_turn;
};

#endif // PLAYER_H

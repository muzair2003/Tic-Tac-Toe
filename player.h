#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player:public QObject
{
    Q_OBJECT
public:
    enum Piece{
        X,
        O
    };
    Player(std::string Name,Piece piece);
    ~Player();
    void SetTurn(bool turn);
    bool GetTurn();
private:
   std::string m_Name;
       Piece m_piece;
       bool m_turn;
};

#endif // PLAYER_H

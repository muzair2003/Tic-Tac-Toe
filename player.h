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
private:
   std::string m_Name;
       Piece m_piece;
};

#endif // PLAYER_H

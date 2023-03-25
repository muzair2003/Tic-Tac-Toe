#ifndef GAME_H
#define GAME_H
#include <QObject>
#include<player.h>
#include <box.h>
#include <map>
class Game:public QObject
{
    Q_OBJECT
public:

    Game();
    ~Game();
    void SetState(Box::State state, Box::Pos position);
    void Switch();
    int WhoTurn();
    int end();

    void reset();

private:
    std::map<Box::Pos,Box*>m_newmap;
    Player m_p1;
    Player m_p2;

};


#endif // GAME_H

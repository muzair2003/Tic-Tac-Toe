#ifndef GAME_H
#define GAME_H
#include <QObject>
#include<player.h>
#include <box.h>
class Game:public QObject
{
    Q_OBJECT
public:
    Game();
    ~Game();
    void Start();
    private:
    Player m_p1;
    Player m_p2;
    Box m_Box_TL;
    Box m_Box_TM;
    Box m_Box_TR;
    Box m_Box_ML;
    Box m_Box_MM;
    Box m_Box_MR;
    Box m_Box_BL;
    Box m_Box_BM;
    Box m_Box_BR;
};


#endif // GAME_H

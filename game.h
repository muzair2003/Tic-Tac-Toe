#ifndef GAME_H
#define GAME_H
#include <QObject>
#include <map>
#include <QMessageBox>
#include "QLineEdit"
#include <QPushButton>
#include<player.h>
#include <box.h>
#include <map>
#include<bot.h>
class MainWindow;
class Game:public QObject
{
    Q_OBJECT
public:

    Game(MainWindow *parent);
    ~Game();
    MainWindow *mainWindow;
    void SetState(Box::State state, Box::Pos position);
    void Switch();
    int WhoTurn();
    int end();
    void reset();
    void setButton(Box::Pos position);

private:
    int counter=0;
    std::map<Box::Pos,Box*>m_newmap;
    Player m_p1;
    Bot m_p2;
    std::map<Box::Pos,QPushButton*> m_map;
    Box::Pos m_empty[3][3]={{Box::TL,Box::TM,Box::TR},{Box::ML,Box::MM,Box::MR},{Box::BL,Box::BM,Box::BR}};


};


#endif // GAME_H

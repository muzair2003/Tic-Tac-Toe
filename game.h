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
    std::map<Box::Pos,Box*>m_newmap;
    Player m_p1;
    Bot m_p2;
    std::map<Box::Pos,QPushButton*> m_map;
    std::vector<Box::Pos> m_empty;

};


#endif // GAME_H

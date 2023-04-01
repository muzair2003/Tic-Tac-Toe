#include "bot.h"
Bot::Bot(Box::State piece):
    Player("Bot",piece),
    m_player_piece(piece)
{

}
Bot::~Bot(){

}

void Bot::SetTurn(bool turn){
    if (turn==true){
        Box::Pos position = Box::Pos(rand()%9);
    }
}

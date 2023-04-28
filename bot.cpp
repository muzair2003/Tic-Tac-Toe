
#include "bot.h"
#include <stdlib.h>

Bot::Bot(Box::State piece):
      Player("Bot",piece),
      m_piece(piece),
      m_choose(Box::Pos(rand()%9))
{
}

Bot::~Bot(){

}

Box::Pos Bot:: SetTurn(bool turn,std::vector<Box::Pos> empty){

    if (turn== true){
        int a = rand() % empty.size();

    return empty[a];
}
}


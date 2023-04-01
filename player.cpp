#include "player.h"

Player::Player(std::string Name,Box::State piece):
    m_Name(Name),
    m_piece(piece),
  m_turn(false)
{

}

Player::~Player()
{

}
void Player:: SetTurn(bool turn){
    m_turn = turn;
    return;
}

bool Player::GetTurn(){
    return m_turn;
}

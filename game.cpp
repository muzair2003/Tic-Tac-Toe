#include "game.h"
#include "box.h"

Game::Game():
    m_p1("Muhammad",Player::X),
    m_p2("Abdul",Player::O),
    m_Box_TL(Box::TL),
    m_Box_TM(Box::TM),
     m_Box_TR(Box::TR),
     m_Box_ML(Box::ML),
     m_Box_MM(Box::MM),
     m_Box_MR(Box::MR),
     m_Box_BL(Box::BL),
     m_Box_BM(Box::BM),
     m_Box_BR(Box::BR)
{

}

Game::~Game(){

}

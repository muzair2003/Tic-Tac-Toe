#include "game.h"
#include <box.h>

Game::Game():
    m_Box_TL(Box::TL),
    m_Box_TM(Box::TM),
     m_Box_TR(Box::TR),
     m_Box_ML(Box::ML),
     m_Box_MM(Box::MM),
     m_Box_MR(Box::MR),
     m_Box_BL(Box::BL),
     m_Box_BM(Box::BM),
     m_Box_BR(Box::BR),
     m_p1("Muhammad",Player::X),
     m_p2("Abdul",Player::O)
{

}

Game::~Game(){

}

void Game::SetState(Box::State state,Box::Pos position)
{
    switch(position){
    case Box::TL:
        m_Box_TL.SetState(state);
        break;
    case Box::TM:
        m_Box_TM.SetState(state);
        break;
    case Box::TR:
        m_Box_TR.SetState(state);
        break;
    case Box::ML:
        m_Box_ML.SetState(state);
        break;
    case Box::MM:
        m_Box_MM.SetState(state);
        break;
    case Box::MR:
        m_Box_MR.SetState(state);
        break;
    case Box::BL:
        m_Box_BL.SetState(state);
        break;
    case Box::BM:
        m_Box_BM.SetState(state);
        break;
    case Box::BR:
        m_Box_BR.SetState(state);
        break;

}
    return;

}

void Game::Switch(){
    if(m_p1.GetTurn()==false){
        m_p1.SetTurn(true);
        m_p2.SetTurn(false);
    }
    else{
        m_p1.SetTurn(false);
        m_p2.SetTurn(true);
    }
}

int Game::WhoTurn(){
    if(m_p1.GetTurn()==true){
        return 1;
    }
    else{
        return 2;
    }
}

int Game:: end(){
    Box::State board[3][3]={{m_Box_TL.GetState(),m_Box_TM.GetState(),m_Box_TR.GetState()},
                            {m_Box_ML.GetState(),m_Box_MM.GetState(),m_Box_MR.GetState()},
                            {m_Box_BL.GetState(),m_Box_BM.GetState(),m_Box_BR.GetState()}};
     // any of the rows is same
     for (int i=0; i<=2; i++)
     {
      if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0]!=Box::Empty)
      {
        return 1;
      }
     }

     // any of the columns is same
     for(int i=0; i<=2; i++)
     {
      if (board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!=Box::Empty)
      {
        return 1;
      }
     }

     // 1st diagonal is same
     if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[0][0]!=Box::Empty)
     {
      return 1;
     }

     // 2nd diagonal is same
     if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board [0][2]!=Box::Empty)
     {
      return 1;
     }
     // if any empty box on board then play on
     for(int i=0; i<=2; i++)
     {
      for(int j=0; j<=2; j++)
      {
       if(board[i][j]==Box::Empty)
       {
           return 0;
       }
      }
     }
         return 2;


}

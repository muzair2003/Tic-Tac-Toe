#include "game.h"
#include <box.h>

Game::Game():
     m_p1("Muhammad",Player::X),
     m_p2("Abdul",Player::O)
{
    m_newmap = {{Box::TL, new Box(Box::TL)},
               {Box::TM, new Box(Box::TM)},
                {Box::TR, new Box(Box::TR)},
                {Box::ML, new Box(Box::ML)},
                {Box::MR, new Box(Box::MR)},
                {Box::MM, new Box(Box::MM)},
                {Box::BL, new Box(Box::BL)},
                {Box::BM, new Box(Box::BM)},
                {Box::BR, new Box(Box::BR)},
               };
}

Game::~Game(){

}

void Game::SetState(Box::State state,Box::Pos position)
{
        m_newmap[position]->SetState(state);
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
    Box::State board[3][3]={{m_newmap[Box::TL]->GetState(),m_newmap[Box::TM]->GetState(),m_newmap[Box::TR]->GetState()},
                            {m_newmap[Box::ML]->GetState(),m_newmap[Box::MM]->GetState(),m_newmap[Box::MR]->GetState()},
                            {m_newmap[Box::BL]->GetState(),m_newmap[Box::BM]->GetState(),m_newmap[Box::BR]->GetState()}};
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

void Game::reset(){

    for(auto x: m_newmap){
        x.second->SetState(Box::Empty);
    }

}


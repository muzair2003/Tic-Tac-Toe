#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <game.h>
#include <box.h>


Game::Game(MainWindow *parent):
    QObject(parent),
     m_p1("Muhammad",Box::X),
     m_p2(Box::O)

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
    this->mainWindow = parent;
    m_map = {{Box::TL, mainWindow->ui->Top_Left},
               {Box::TM, mainWindow->ui->Mid_Top},
                {Box::TR, mainWindow->ui->Top_Right},
                {Box::ML, mainWindow->ui->Mid_Left},
                {Box::MR, mainWindow->ui->Mid_Right},
                {Box::MM, mainWindow->ui->Middle},
                {Box::BL, mainWindow->ui->Bot_Left},
                {Box::BM,  mainWindow->ui->Mid_Bot},
                {Box::BR, mainWindow->ui->Bot_Right},
               };

    m_p1.SetTurn(true);
    m_p2.SetTurn(false);
}

Game::~Game(){

}


void Game::SetState(Box::State state,Box::Pos position)
{
    m_newmap[position]->SetState_Box(state);
    return;

}

void Game::Switch(){
    if(m_p1.GetTurn()==false){
        m_p1.SetTurn(true);
        m_p2.SetTurn(false);
    }
    else{
        Box::State board[3][3]={{m_newmap[Box::TL]->GetState_Box(),m_newmap[Box::TM]->GetState_Box(),m_newmap[Box::TR]->GetState_Box()},
                                         {m_newmap[Box::ML]->GetState_Box(),m_newmap[Box::MM]->GetState_Box(),m_newmap[Box::MR]->GetState_Box()},
                                         {m_newmap[Box::BL]->GetState_Box(),m_newmap[Box::BM]->GetState_Box(),m_newmap[Box::BR]->GetState_Box()}};
        m_p1.SetTurn(false);
        Box::Pos bot_pos = m_p2.SetTurn(board,m_empty);
        setButton(bot_pos);
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
    Box::State board[3][3]={{m_newmap[Box::TL]->GetState_Box(),m_newmap[Box::TM]->GetState_Box(),m_newmap[Box::TR]->GetState_Box()},
                                     {m_newmap[Box::ML]->GetState_Box(),m_newmap[Box::MM]->GetState_Box(),m_newmap[Box::MR]->GetState_Box()},
                                     {m_newmap[Box::BL]->GetState_Box(),m_newmap[Box::BM]->GetState_Box(),m_newmap[Box::BR]->GetState_Box()}};
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
        x.second->SetState_Box(Box::Empty);
    }
    m_p1.SetTurn(true);
    m_p2.SetTurn(false);
    counter = 0;

}

void Game:: setButton(Box::Pos position){


    if(WhoTurn() == 1&& counter !=9){
        SetState(Box::X,position);
        if (position == Box::TL)
        mainWindow->ui->Top_Left->setText("X");
        else if (position == Box::TM)
        mainWindow->ui->Mid_Top->setText("X");
        else if (position == Box::TR)
        mainWindow->ui->Top_Right->setText("X");
        else if (position == Box::ML)
        mainWindow->ui->Mid_Left->setText("X");
        else if (position == Box::MM)
        mainWindow->ui->Middle->setText("X");
        else if (position == Box::MR)
        mainWindow->ui->Mid_Right->setText("X");
        else if (position == Box::BL)
        mainWindow->ui->Bot_Left->setText("X");
        else if (position == Box::BM)
        mainWindow->ui->Mid_Bot->setText("X");
        else if (position == Box::BR)
        mainWindow->ui->Bot_Right->setText("X");
}
    if(WhoTurn() == 2&& counter !=9){

        SetState(Box::O,position);
        if (position == Box::TL)
        mainWindow->ui->Top_Left->setText("O");
        else if (position == Box::TM)
        mainWindow->ui->Mid_Top->setText("O");
        else if (position == Box::TR)
        mainWindow->ui->Top_Right->setText("O");
        else if (position == Box::ML)
        mainWindow->ui->Mid_Left->setText("O");
        else if (position == Box::MM)
        mainWindow->ui->Middle->setText("O");
        else if (position == Box::MR)
        mainWindow->ui->Mid_Right->setText("O");
        else if (position == Box::BL)
        mainWindow->ui->Bot_Left->setText("O");
        else if (position == Box::BM)
        mainWindow->ui->Mid_Bot->setText("O");
        else if (position == Box::BR)
        mainWindow->ui->Bot_Right->setText("O");


    }

    std::string s = "Player " + std::to_string(WhoTurn());
    QString qstr = QString::fromStdString(s);
    mainWindow->ui->lineEdit->setText(qstr);

    if(end()==1){
        QMessageBox::about(this->mainWindow,"Winner", qstr + " has won");
        mainWindow->ui->Top_Left->setEnabled(false);
        mainWindow->ui->Mid_Top->setEnabled(false);
        mainWindow->ui->Top_Right->setEnabled(false);
        mainWindow->ui->Middle->setEnabled(false);
        mainWindow->ui->Mid_Right->setEnabled(false);
        mainWindow->ui->Mid_Left->setEnabled(false);
        mainWindow->ui->Bot_Left->setEnabled(false);
        mainWindow->ui->Mid_Bot->setEnabled(false);
        mainWindow->ui->Bot_Right->setEnabled(false);
        m_p2.SetTurn(false);


    }
    if(end()==2){
        QMessageBox::about(this->mainWindow,"Tie","It is a Tie");
    }

    if (position == Box::TL){
    mainWindow->ui->Top_Left->setEnabled(false);
    counter++;
    }
    if (position == Box::TM){
    mainWindow->ui->Mid_Top->setEnabled(false);
counter++;
    }
    if (position == Box::TR){
    mainWindow->ui->Top_Right->setEnabled(false);
counter++;
}
    if (position == Box::ML){
    mainWindow->ui->Mid_Left->setEnabled(false);
counter++;
}
    if (position == Box::MM){
    mainWindow->ui->Middle->setEnabled(false);
counter++;
}
    if (position == Box::MR){
    mainWindow->ui->Mid_Right->setEnabled(false);
counter++;
}
    if (position == Box::BL){
    mainWindow->ui->Bot_Left->setEnabled(false);
counter++;
}
    if (position == Box::BM){
    mainWindow->ui->Mid_Bot->setEnabled(false);
counter++;
}
    if (position == Box::BR){
    mainWindow->ui->Bot_Right->setEnabled(false);
counter++;
}
    if(counter != 9){
    Switch();
    }
}

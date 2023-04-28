#ifndef BOT_H
#define BOT_H
#include <QObject>
#include <QWidget>
#include "player.h"

class Bot: public Player
{
Q_OBJECT
public:
    struct Move
    {
        int row, col;
    };
    Bot(Box::State piece);
    ~Bot();
    Box::Pos SetTurn(Box::State board[3][3],Box::Pos pos[3][3]);
    bool SetTurn(bool turn);
    char player;
    char opponent;
private:
    char CharToState(Box::State state);
    bool isMovesLeft(char board[3][3]);
    int evaluate(char b[3][3]);
    int minimax(char board[3][3], int depth, bool isMax);
    Move findBestMove(char board[3][3]);
   Box::State m_piece;
   Box::Pos m_choose;
};

#endif // BOT_H

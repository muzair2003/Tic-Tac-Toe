#ifndef BOX_H
#define BOX_H
#include "QPushButton"
#include <QObject>
class Box:public QObject
{
    Q_OBJECT
public:
    enum Pos
    {   TL,
        TM,
        TR,
        ML,
        MM,
        MR,
        BL,
        BM,
        BR
    };
    enum State
    {   X,
        O,
        Empty
    };
Box(Pos position);
    ~Box();
    void SetState_Box(State state);
    State GetState_Box();
    void Lock();
    void Unlock();
    void reset();
private:
    Pos m_position;
    State m_state;
    bool m_Locked;
};


#endif // BOX_H

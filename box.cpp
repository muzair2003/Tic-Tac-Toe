#include "box.h"


Box::Box(Pos position):
m_position(position),
m_state(Empty),
m_Locked(false)
{

}
Box::~Box(){

}

void Box::SetState_Box(State state)
{
    m_state = state;
    return;
}
Box::State Box::GetState_Box(){
    return m_state;
}

void Box::reset(){
    m_state= Empty;
}

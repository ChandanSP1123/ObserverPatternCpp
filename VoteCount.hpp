#ifndef VOTECOUNT_H
#define VOTECOUNT_H

#include "Observer.hpp"

class VoteCount
{
public:
    virtual void Subscribe(Observer *Object) = 0;
    virtual void Unsubscribe(Observer *Object) = 0;
    virtual void Notify() = 0;
};

#endif
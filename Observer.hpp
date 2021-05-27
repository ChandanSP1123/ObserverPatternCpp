#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>

class Observer
{
public:
    virtual void update(int count, char *name) = 0;
};

#endif
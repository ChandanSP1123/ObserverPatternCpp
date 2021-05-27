#ifndef INTERNET_H
#define INTERNET_H
#include "Observer.hpp"

class Internet : public Observer
{

public:
    void update(int count, char *name);
    void publish(int count, char *name);
};

#endif
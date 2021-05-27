#ifndef NEWSPAPER_H
#define NEWSPAPER_H
#include "Observer.hpp"

class NewsPaper : public Observer
{

public:
    void update(int count, char *name);
    void publish(int count, char *name);
};

#endif
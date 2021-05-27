#ifndef NEWSCHANNEL_H
#define NEWSCHANNEL_H
#include "Observer.hpp"

class NewsChannel : public Observer
{

public:
    void update(int count, char *name);
    void publish(int count, char *name);
};

#endif
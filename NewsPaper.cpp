#include "Observer.hpp"
#include "NewsPaper.hpp"

void NewsPaper::update(int count, char *name)
{
    publish(count, name);
}

void NewsPaper::publish(int count, char *name)
{

    std::cout << "MyTimes :: Total vote for candidate " << name << " is " << count << std::endl;
}
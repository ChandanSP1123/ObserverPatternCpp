#include "Observer.hpp"
#include "Internet.hpp"

void Internet::update(int count, char *name)
{
    publish(count, name);
}

void Internet::publish(int count, char *name)
{

    std::cout << "BreakingNews website :: Total vote for candidate " << name << " is " << count << std::endl;
}
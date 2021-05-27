#include "Observer.hpp"
#include "NewsChannel.hpp"

void NewsChannel::update(int count, char *name)
{
    publish(count, name);
}

void NewsChannel::publish(int count, char *name)
{

    std::cout << "DNDC News Channel :: Total vote for candidate " << name << " is " << count << std::endl;
    std::cout << "DNDC News Channel :: probaility of winning is 80%" << std::endl;
}
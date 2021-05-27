#include "VoteCountBooth.hpp"
#include "algorithm"

void VoteCountBooth::Subscribe(Observer *Object)
{
    ObserverList.push_back(Object);
}

void VoteCountBooth::Unsubscribe(Observer *Object)
{
    ObserverList.erase(std::remove_if(ObserverList.begin(), ObserverList.end(), [&](Observer *a)
                                      { return a == Object; }));
}

void VoteCountBooth::Notify()
{
    for (std::vector<Observer *>::const_iterator i = ObserverList.begin(); i != ObserverList.end(); i++)
    {
        (*i)->update(CandidateData.votecount, CandidateData.Name);
    }
}

void VoteCountBooth::UpdateData(int count, char *name)
{
    CandidateData.Name = name;
    CandidateData.votecount = count;
    Notify();
}
#ifndef VOTECOUNTBOOTH_H
#define VOTECOUNTBOOTH_H

#include "Observer.hpp"
#include "VoteCount.hpp"
#include <vector>

struct Candidate
{
  int votecount;
  char *Name;
};

class VoteCountBooth : public VoteCount
{
  std::vector<Observer *> ObserverList;
  Candidate CandidateData;

public:
  void Subscribe(Observer *Object);
  void Unsubscribe(Observer *Object);
  void Notify();
  void UpdateData(int count, char *name);
};

#endif

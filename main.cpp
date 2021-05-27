

#include "NewsPaper.hpp"
#include "VoteCountBooth.hpp"
#include "NewsChannel.hpp"
#include "Internet.hpp"

int main()
{

    NewsPaper MyTimes;
    NewsChannel DNDC;
    Internet BreakingNewsApp;
    VoteCountBooth NewYork;

    NewYork.Subscribe(&MyTimes);
    NewYork.Subscribe(&DNDC);
    NewYork.Subscribe(&BreakingNewsApp);
    NewYork.UpdateData(1000, "ROY");
    NewYork.Unsubscribe(&BreakingNewsApp);
    NewYork.Unsubscribe(&DNDC);
    NewYork.UpdateData(5000, "TINA");

    return 0;
}
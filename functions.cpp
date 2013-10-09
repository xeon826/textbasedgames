#include <iostream>
#include "functionsh.h"
using namespace std;
int Functions::level_up(int& a, int& d , int& e, int& m, int& hp)
{
    a += a/9;
    d += d/9;
    e += e/9;
    m += m/9;
    hp += hp/9;
}
char Functions::explore()
{
     char e;
     cout << "Choose an area to explore:" << "\n\n\n\n\n" << "\t\t"
     << "Forest(1-9)[f]    " << "Dunes(10-19)[d]    " << "Qufim Island(20-25)[d]";
     return e;
}
int Functions::boss_Battle()
{
    cout << "This is boss battle time ";
}
int Functions::customize()
{
    cout << "customize time";
}

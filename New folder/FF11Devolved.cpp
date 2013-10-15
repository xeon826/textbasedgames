#include <iostream>
#include <string>

using namespace std;

int level_up(int& a, int& d , int& e, int& m, int& hp)
{
    a += a/9;
    d += d/9;
    e += e/9;
    m += m/9;
    hp += hp/9;
}
char explore()
{
     char e;
     cout << "Choose an area to explore:" << "\n\n\n\n\n" << "\t\t"
     << "Forest(1-9)[f]    " << "Dunes(10-19)[d]    " << "Qufim Island(20-25)[d]";
     return e;
}
int boss_Battle()
{
    cout << "This is boss battle time ";
}
int customize()
{
    cout << "customize time";
}
int main()
{
 int att, def, eva, mnd, hp;
    cout << "Which will you choose? \n\n\n\t\tMage[m] Warrior[w] Darknight[d]"
    << " Paladin[p]";
    char r;
    cin >> r;
    switch(r)
    {
             case 'm': att = 32, def = 29, eva = 35, mnd = 92, hp = 320;
             break;
             case 'w': att = 61, def = 60, eva = 55, mnd = 42, hp = 438;
             break;
             case 'd': att = 82, def = 42, eva = 39, mnd = 45, hp = 402;
             break;
             case 'p': att = 59, def = 82, eva = 43, mnd = 62, hp = 436;
             break;
             default: cout << "Try again";
             break;
    }   

    cout << "Choose a game mode:" << "\n\n\n\n\n" << "\t\t\t\t"
    << "Explore[e]    " << "Boss Battle[b]    " << "Customize[c]";
    cin >> r;
    switch(r)
    {
    case 'e': r = explore();
    break;
    case 'b': boss_Battle();
    break;
    case 'c': customize();
    break;
    default: cout << "default lol";
    }
    cin.sync();
    cin.get();

    return 0;

}



     






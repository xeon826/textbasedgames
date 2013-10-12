#include <iostream>
#include <string>
#include "functionsh.h"
#include <Windows.h>
using namespace std;
int catt, cdef, ceva, cmid, chp, eatt, edef, eeva, emid, ehp, mob;
char f;
int Functions::beginning()
{
    cout << "Which will you choose? \n\n\n\t\tMage[m] Warrior[w] Darknight[d]"
    << " Paladin[p]";
    char r;
    cin >> r;
    switch(r)
    {
             case 'm': catt = 32, cdef = 29, ceva = 35, cmid = 92, chp = 320;
             break;
             case 'w': catt = 61, cdef = 60, ceva = 55, cmid = 42, chp = 438;
             break;
             case 'd': catt = 82, cdef = 42, ceva = 39, cmid = 45, chp = 402;
             break;
             case 'p': catt = 59, cdef = 82, ceva = 43, cmid = 62, chp = 436;
             break;
             default: cout << "Try again";
             break;
    }   

    cout << "Choose a game mode:" << "\n\n\n\n\n" << "\t\t\t\t"
    << "Explore[e]    " << "Boss Battle[b]    " << "Customize[c]";
    cin >> r;
    Functions b;
    switch(r)
    {
    case 'e': r = b.explore();
    break;
    case 'b': b.boss_Battle();
    break;
    case 'c': b.customize();
    break;
    default: cout << "default lol";
    }
    }
    // Exploration mode.
    char Functions::explore()
{
     Functions b;
     b.e;
     cout << "Choose an area to explore:" << "\n\n\n\n\n" << "\t\t"
     << "Forest(1-9)[f]    " << "Dunes(10-19)[d]    " << "Qufim Island(20-25)[q]";
     cin >> b.e;
     switch (b.e)
     {
     case 'f': b.forest();
     break;
     case 'd': b.dunes();
     break;
     case 'q': b.qufim_Island();
     break;
     default: cout << "error o.O ";
     break;
     }
}
  // Forest area 
int Functions::forest()
{
    char ok;
    Functions a;
    mob = rand() % 5;
    switch(mob)
    {
    case 0: cout << "A hare appears!";
    a.hare();
    a.flee();
    break;
    case 1: cout << "A worm appears!";
    a.worm();
    a.flee();
    break;
    case 2: cout << "A sheep appears!";
    a.fsheep();
    a.flee();
    break;
    case 3: cout << "An Orcish Grappler appears!";
    a.orcG();
    a.flee();
    break;
    case 4: cout << "An Orcish Fodder appears!";
    a.orcF();
    a.flee();
    break;
    case 5: cout << "An Orcish Mesmerizer appears!";
    a.orcM();
    a.flee();
    break;
    default: cout << "An error occured o.O ";
    a.flee();
    break;
}
}
 
    int Functions::usFleeF()
    {
        Functions a;
    switch(mob)
    {
    case 0: cout << "A hare appears!";
    a.hare();
    a.flee();
    break;
    case 1: cout << "A worm appears!";
    a.worm();
    a.flee();
    break;
    case 2: cout << "A sheep appears!";
    a.fsheep();
    a.flee();
    break;
    case 3: cout << "An Orcish Grappler appears!";
    a.orcG();
    a.flee();
    break;
    case 4: cout << "An Orcish Fodder appears!";
    a.orcF();
    a.flee();
    break;
    case 5: cout << "An Orcish Mesmerizer appears!";
    a.orcM();
    a.flee();
    break;
    default: cout << "An error occured o.O ";
    a.flee();
    break;
}
}
// Flee function
int Functions::flee()
{
    Functions a;
    cin >> f;
    switch(f)
    {
    case 'f': if ((ceva - rand()%eeva) > 0)
    {
    cout << "You escaped successfully!";
    a.forest();
    }
    else
    {
        cout << "You did not escape successfully!";
        a.usFleeF();
        cin.sync();
        cin.get();
        }
}
}
int Functions::boss_Battle(){}
    int Functions::level_up(int& a, int& d , int& e, int& m, int& hp)
{
    a += a/9;
    d += d/9;
    e += e/9;
    m += m/9;
    hp += hp/9;
}

int Functions::customize()
{
    cout << "customize time";
}


int Functions::dunes()
{
    Functions b;
  mob = rand() % 5;
  switch(mob)
  {
  case 0: cout << "A Goblin appears!";
  break;
  case 1: cout << "A Pugilist appears!";
  break;
  case 2: cout << "A Crab appears!";
  break;
  case 3: cout << "A Fire Lizard appears!";
  break;
  case 4: cout << "A Sheep appears!";
  break;
  case 5: cout << "A Damselfly appears!";
  break;
  default: cout << "An error occured o.O ";
  break;
}   
}
int Functions::qufim_Island()
{
    Functions b;
    mob = rand() % 5;
    switch(mob)
    {
      case 0: cout << "A Giant appears!";
      break;
      case 1: cout << "A skeleton appears!";
      break;
      case 2: cout << "A Carrion Worm appears!";
      break;
      case 3: cout << "A Crab appears!";
      break;
      case 4: cout << "A Poltergeist appears!";
      break;
      case 5: cout << "An Ice Element appears!";
      break;
      default: cout << "An error occured o.O ";
      break;      
    }
}

    int Functions::fsheep()
{
    char f;
    eatt = 63, edef = 60, eeva = 25, emid = 32, ehp = 350;
    int difficulty = rand() % 3;
    switch(difficulty)
    {
    case 0: cout << "The sheep seems to be pretty easy, flee(y/n)? ";
    eatt -= eatt/9; edef -= edef/9; eeva -= eeva/9; emid -= emid/9; ehp -= ehp/9;
    break;
    case 1: cout << "The sheep seems to be a decent challenge, flee(y/n)? ";
    break;
    case 2: cout << "The sheep seems to be very tough, flee(y/n)? ";
    eatt += eatt/9; edef += edef/9; eeva += eeva/9; emid += emid/9; ehp += ehp/9;
    break;
    default: cout << "An error occured o.O ";
    break;
    }
             
    }
int Functions::worm()
{
    eatt = 48, edef = 45, eeva = 34, emid = 52, ehp = 245;
    int difficulty = rand()%3;
    switch(difficulty)
    {
     case 0: cout << "The worm seems to be pretty easy, flee(y/n)? ";
    eatt -= eatt/9; edef -= edef/9; eeva -= eeva/9; emid -= emid/9; ehp -= ehp/9;
    break;
    case 1: cout << "The worm seems to be a decent challenge, flee(y/n)? ";
    break;
    case 2: cout << "The worm seems to be very tough, flee(y/n)? ";
    eatt += eatt/9; edef += edef/9; eeva += eeva/9; emid += emid/9; ehp += ehp/9;
    break;
    default: cout << "An error occured o.O ";
    break;
    }
}
int Functions::hare()
{
    eatt = 36, edef = 39, eeva = 49, emid = 34, ehp = 320;
        int difficulty = rand()%3;
    switch(difficulty)
    {
     case 0: cout << "The hare seems to be pretty easy, flee(y/n)? ";
    eatt -= eatt/9; edef -= edef/9; eeva -= eeva/9; emid -= emid/9; ehp -= ehp/9;
    break;
    case 1: cout << "The hare seems to be a decent challenge, flee(y/n)? ";
    break;
    case 2: cout << "The hare seems to be very tough, flee(y/n)? ";
    eatt += eatt/9; edef += edef/9; eeva += eeva/9; emid += emid/9; ehp += ehp/9;
    break;
    default: cout << "An error occured o.O ";
    break;
    }
}
int Functions::orcG()
{
    eatt = 64, edef = 54, eeva = 51, emid = 38, ehp = 548;
    int difficulty = rand()%3;
    switch(difficulty)
    {
     case 0: cout << "The Orcish Grappler seems to be pretty easy, flee(y/n)? ";
    eatt -= eatt/9; edef -= edef/9; eeva -= eeva/9; emid -= emid/9; ehp -= ehp/9;
    break;
    case 1: cout << "The Orcish Grappler seems to be a decent challenge, flee(y/n)? ";
    break;
    case 2: cout << "The Orcish Grappler seems to be very tough, flee(y/n)? ";
    eatt += eatt/9; edef += edef/9; eeva += eeva/9; emid += emid/9; ehp += ehp/9;
    break;
    default: cout << "An error occured o.O ";
    break;
    }
}
int Functions::orcF()
{
    eatt = 68, edef = 58, eeva = 46, emid = 42, ehp = 498;
    int difficulty = rand()%3;
    switch(difficulty)
    {
     case 0: cout << "The Orcish Fodder seems to be pretty easy, flee(y/n)? ";
    eatt -= eatt/9; edef -= edef/9; eeva -= eeva/9; emid -= emid/9; ehp -= ehp/9;
    break;
    case 1: cout << "The Orcish Fodder seems to be a decent challenge, flee(y/n)? ";
    break;
    case 2: cout << "The Orcish Fodder seems to be very tough, flee(y/n)? ";
    eatt += eatt/9; edef += edef/9; eeva += eeva/9; emid += emid/9; ehp += ehp/9;
    break;
    default: cout << "An error occured o.O ";
    break;
    }
}
int Functions::orcM()
{
    eatt = 34, edef = 38, eeva = 40, emid = 83, ehp = 367;
    int difficulty = rand()%3;
    switch(difficulty)
    {
     case 0: cout << "The Orcish Mesmerizer seems to be pretty easy, flee(y/n)? ";
    eatt -= eatt/9; edef -= edef/9; eeva -= eeva/9; emid -= emid/9; ehp -= ehp/9;
    break;
    case 1: cout << "The Orcish Mesmerizer seems to be a decent challenge, flee(y/n)? ";
    break;
    case 2: cout << "The Orcish Mesmerizer seems to be very tough, flee(y/n)? ";
    eatt += eatt/9; edef += edef/9; eeva += eeva/9; emid += emid/9; ehp += ehp/9;
    break;
    default: cout << "An error occured o.O ";
    break;
    }
}


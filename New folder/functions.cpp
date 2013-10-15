#include <iostream>
#include <string>
#include "functionsh.h"
#include <Windows.h>
#include <string>
using namespace std;
int catt, cdef, ceva, cmid, chp, eatt, edef, eeva, emid, ehp, mob, dmg, exp,
defend, lvl =1, expLimit = 50, cexp =0, regen = 0;
bool disableFlee = 0;
string mobName = "mobName";
char f, b, job, r, area;
string mobType = 'mobT';
bool undead = 0, arcana = 0;
int Functions::beginning()
{
    cout << "Which will you choose? \n\n\n\t\tMage[m] Warrior[w] Darknight[d]"
    << " Paladin[p]";
    cin >> job;
    switch(job)
    {
             case 'm': catt = 32, cdef = 29, ceva = 35, cmid = 92, chp = 320;
             cout << "You are now a Mage, ruler of all things mystic and "
             << "supernatural'\n'";
             break;
             case 'w': catt = 61, cdef = 60, ceva = 55, cmid = 42, chp = 438;
             cout << "You are now a Warrior. A jack-of-all trades'\n'";
             break;
             case 'd': catt = 82, cdef = 42, ceva = 39, cmid = 45, chp = 402;
             cout << "You are now a Dark Knight! Ruler of all things arcane'\n'";
             break;
             case 'p': catt = 59, cdef = 82, ceva = 43, cmid = 62, chp = 436;
             cout << "You are now a Paladin! Undead fear you! '\n'";
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
     cout << "Choose an area to explore:" << "\n\n\n\n\n" << "\t\t"
     << "Forest(1-9)[f]    " << "Dunes(10-19)[d]    " << "Qufim Island(20-25)[q]";
     cin >> area;
     switch (area)
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
    undead = 0, arcana = 0;
    exp = rand()%50;
    char ok;
    Functions a;
    mob = rand() % 5;
    switch(mob)
    {
    case 0: cout << "A Hare appears! Flee?(y/n) ";
    mobName = "Hare";
    mobType = 'n';
    a.hare();
    a.flee();
    break;
    case 1: cout << "A Worm appears! Flee?(y/n) ";
    mobName = "Worm";
    mobType = 'a';
    a.worm();
    a.flee();
    break;
    case 2: cout << "A sheep appears! Flee?(y/n) ";
    mobName = "Sheep";
    mobType = 'n'
    a.fsheep();
    a.flee();
    break;
    case 3: cout << "An Orcish Grappler appears! Flee?(y/n) ";
    mobName = "Orcish Grappler";
    mobType = 'w';
    a.orcG();
    a.flee();
    break;
    case 4: cout << "An Orcish Fodder appears! Flee?(y/n) ";
    mobName = "Orcish Fodder";
    mobType = 'w';
    a.orcF();
    a.flee();
    break;
    case 5: cout << "An Orcish Mesmerizer appears! Flee?(y/n) ";
    mobName = "Orcish Mesmermizer";
    mobType = 'w';
    a.orcM();
    a.flee();
    break;
    default: cout << "An error occured o.O ";
    a.flee();
    break;
}
a.battle();

}
 // For if flee fails. Flee function taken out.
    int Functions::usFleeF()
    {
        Functions a;
    switch(mob)
    {
    case 0: a.hare();
    break;
    case 1: a.worm();
    break;
    case 2: a.fsheep();
    break;
    case 3: a.orcG();
    break;
    case 4: a.orcF();
    break;
    case 5: a.orcM();
    break;
    default: cout << "An error occured o.O ";
    break;    
    }
a.battle();
}
// Flee function
int Functions::flee()
{
    Functions a;
    cin >> f;
    if (f == 'y')
    {
    if ((ceva - rand()%eeva) > 0)
                 {
                 cout << "You escaped successfully!";
                 Sleep(2000);
                 cout << "Go back to town? (y/n)";
                 char town;
                 cin >> town;
                 if (town == 'y')
                 {
                          a.explore();
                          }
                          else
                          {
                 switch(area)
                 {
                 case 'f': a.forest();
                 break;
                 case 'd': a.dunes();
                 break;
                 case 'q': a.qufim_Island(); 
                 break;
                 }
                 }
                 }
                 else
                 {
                 cout << "You did not escape successfully!";
                 switch(area)
                 {                
                 case 'f': a.usFleeF();
                 break;
                 case 'd': a.usFleeD();
                 break;
                 case 'q': a.qufim_Island();
                 break;
                 }
                 }
    }
}
int Functions::boss_Battle()
{
    // Code for boss battle go here
    }
    int Functions::level_up(int& a, int& d , int& e, int& m, int& hp, int& cexp)
{
    cexp = 0;
    a += a/9;
    d += d/9;
    e += e/9;
    m += m/9;
    hp += hp/9;
    lvl++;
    expLimit += expLimit/5;
    
}

int Functions::customize()
{
    cout << "customize time";
}


int Functions::dunes()
{
    exp = rand()%100;
    Functions b;
  mob = rand() % 5;
  switch(mob)
  {
  case 0: cout << "A Goblin appears! Flee?(y/n)";
   mobName = "Goblin";
   mobType = 'f';
    b.hare();
    b.flee();
  break;
  case 1: cout << "A Pugilist appears! Flee?(y/n)";
   mobName = "Pugilist";
   mobType = 'a';
    b.hare();
    b.flee();
  break;
  case 2: cout << "A Crab appears! Flee?(y/n)";
   mobName = "Crab";
   mobType = 'a';
    b.hare();
    b.flee();
  break;
  case 3: cout << "A Fire Lizard appears! Flee?(y/n)";
   mobName = "Fire Lizard";
   mobType = 'w';
    b.hare();
    b.flee();
  break;
  case 4: cout << "A Sheep appears! Flee?(y/n)";
   mobName = "Sheep";
   mobType = 'n';
    b.hare();
    b.flee();
  break;
  case 5: cout << "A Damselfly appears! Flee?(y/n)";
   mobName = "Damselfly";
   mobType = 'w';
    b.hare();
    b.flee();
  break;
  default: cout << "An error occured o.O ";
   mobName = "Hare";
    b.hare();
    b.flee();
  break;
}   
}
    int Functions::usFleeD()
    {
        Functions a;
    switch(mob)
    {
    case 0: a.hare();
    break;
    case 1: a.worm();
    break;
    case 2: a.fsheep();
    break;
    case 3: a.orcG();
    break;
    case 4: a.orcF();
    break;
    case 5: a.orcM();
    break;
    default: cout << "An error occured o.O ";
    break;  
    }  
    a.battle();
}
int Functions::qufim_Island()
{
    undead = 0, arcana = 0;
    exp = rand()%200;
    Functions a;
    mob = rand() % 5;
    switch(mob)
    {
      case 0: cout << "A Giant appears! Flee?(y/n)";
       mobName = "Giant";
       mobType = 'f';
    a.giant();
    a.flee();
      break;
      case 1: cout << "A skeleton appears! Flee?(y/n)";
       mobName = "Skeleton";
       mobType = 'f';
       undead = 1;
    a.ghoul();
    a.flee();
      break;
      case 4: cout << "A Poltergeist appears! Flee?(y/n)";
       mobName = "Poltergeist";
       arcana = 1;
    a.poltergeist();
    a.flee();
      break;
      case 5: cout << "An Ice Element appears! Flee?(y/n)";
       mobName = "Ice Element";
       mobType = 'f';
       arcana = 1;
    a.iceElement();
    a.flee();
      break;
      case 6: cout << "A Bogy appears! Flee?(y/n)?";
      mobName = "Bogy";
      undead = 1;
      mobType = 'f';
      a.bogy();
      a.flee();
      break;
      default: cout << "An error occured o.O ";
      break;      
    }
}
    int Functions::usFleeQ()
    {
        Functions a;
    switch(mob)
    {
    case 0: a.hare();
    break;
    case 1: a.worm();
    break;
    case 2: a.fsheep();
    break;
    case 3: a.orcG();
    break;
    case 4: a.orcF();
    break;
    case 5: a.orcM();
    break;
    default: cout << "An error occured o.O ";
    break;    
    }
}
// Forest mob stats
    int Functions::fsheep()
    {
    eatt = 63, edef = 60, eeva = 25, emid = 32, ehp = 350;          
    }
    int Functions::worm()
    {
    eatt = 48, edef = 45, eeva = 34, emid = 52, ehp = 245;
    }
    int Functions::hare()
    {
    eatt = 36, edef = 39, eeva = 49, emid = 34, ehp = 320;
    }
    int Functions::orcG()
    {
    eatt = 64, edef = 54, eeva = 51, emid = 38, ehp = 548;
    }
    int Functions::orcF()
    {
    eatt = 68, edef = 58, eeva = 46, emid = 42, ehp = 498;
    }
    int Functions::orcM()
    {
    eatt = 34, edef = 38, eeva = 40, emid = 83, ehp = 367;
    }
    // Dune mob stats
    int Functions::damselfly()
    {
        eatt = 139, edef = 151, eeva = 105, emid = 111, ehp = 879;
    }
    int Functions::nightBats()
    {
        eatt = 141, edef = 151, eeva = 105, emid = 111, ehp = 879;
    }
    int Functions::goblinS()
    {
        eatt = 111, edef = 121, eeva = 146, emid = 101, ehp = 782;   
    }
    int Functions::crab()
    {
        eatt = 110, edef = 110, eeva = 132, emid = 159, ehp =  843;    
    }
    int Functions::pugilist()
    {
        eatt = 176, edef = 186, eeva = 111, emid = 109, ehp = 921;    
    }
    int Functions::goblin()
    {
        eatt = 174, edef = 134, eeva = 130, emid = 121, ehp = 1001;    
    }
    int Functions::fireLizard()
    {
        eatt = 120, edef = 101, eeva = 101, emid = 118, ehp = 598;
    }
    // qufim Island mobs
    int Functions::ghoul()
    {
        eatt = 416, edef = 350, eeva = 302, emid = 328, ehp = 2142;
    }
    int Functions::bogy()
    {
        eatt = 447, edef = 428, eeva = 350, emid = 375, ehp = 2379;    
    }
    int Functions::giant()
    {
        eatt = 472, edef = 447, eeva = 357, emid = 302, ehp = 2859;
    }
    int Functions::poltergeist()
    {
        eatt = 424, edef = 421, eeva = 375, emid = 424, ehp = 1903;
    }  
    int Functions::iceElement()
    {
        eatt = 416, edef = 451, eeva = 350, emid = 472, ehp = 1188;
    }
    int Functions::battle()
    {
        
        Functions a;
    cout << "You engage the " << mobName << " in battle!\n\n\n";
          cout << "\t\t\t\tEnemy HP: " << ehp;
          cout << string(5, '\t') << "Character HP: " << chp;

          cout << string(5, '\n') << "Attack[a] ";
          if (regen > 0)
          {
                    regen--;
                    chp += chp/20;
                    cout << "You gain some hp back from Regen";
          }
          cin >> b;
          if (b == 'a')
          {
          dmg = catt - rand()%edef;
          if(dmg > 0)
          {
          ehp -= dmg;
          cout << "You did " << dmg << " to the " << mobName << "!";
          }
          else
          {
              cout << "You did 0 damage to the " << mobName << "!";
          }
          if (ehp < 0)
          {
          cout << "You won! The " << mobName << "was successfully defeated!\n";
          Sleep(2000);
          cout << "You gained " << exp << " Experience points!";
          cexp += exp;
          if(cexp > expLimit)
          {
                  a.level_up(catt, cdef, ceva, cmid, chp, cexp);
                  cout << "You leveled up!\nYou are now level " << lvl << "!";          
          
          }
          switch(area)
          {
          case 'f': a.forest();
          break;
          case 'd': a.dunes();
          break;
          case 'q': a.qufim_Island();
          break;
          }
          }
          a.battle();
    
    }
}


#include "functionsh.h"
#include <iostream>
int Functions::abilities(int lvl, char job, int& catt, int& ceva, int& cmid,
int& chp, int& eatt, int& eeva, int& emid, int& ehp, int& regen, char a, int& dmg,
int& sentInt, int& undeadInt, int& defenderInt, int& berserkInt, int& lastrInt,
int& arcanaInt, int& absInt)
{
    Functions a;
    if (job == 'm')
    {
            if (lvl > 2)
            {
                    cout << "Cure[c] ";
                    if (a == 'c')
                    {
            a.cure(int& chp);
            }
            }
            if (lvl > 10)
            {
                    cout << "Cura[a] ";
                    if (a == 'a')
                    {
             a.cura(int& chp);
             }
            }
            if (lvl > 11)
            {
                    regen--;
                    cout << "Regen[r] ";
                    if (a == 'r')
                    {
                          regen = 5;
             a.regen(int& regen);
             }
             }
             if (lvl > 4)
             {
                     cout << "Fire[f] ";
                     if (a == f)
                     {
             a.fire(int cmid, int emid, int& ehp);
             }
             }
             if (lvl > 8)
             {
                     cout << "Blizzard[b] ";
                     if (a == b)
                     {
             a.blizard(int cmid, int emid, int& ehp);
             }
             }
             if (lvl > 14)
             {
                     cout << "Thunder[t] ";
                     if (a == 't')
                     {
             a.thunder();
             }
             }
             if (lvl > 18)
             {
                     cout << "Stone[s] ";
                     if (a == 's')
                     {
             a.stone();
             }
             }
             if (lvl > 20)
             {
                     cout << "Water[w] ";
                     if (a == 'w')
                     {
             a.water();
             }
             }
             if (lvl > 12)
             {
                     proInt--;
                     cout << "Protect[p] ";
                     if (a == 'p')
                     {
             a.protect(int& cdef, int& proInt);
             }
             }
    }
    if (job == 'p')
    {
            if (lvl > 4)
            {
                    cout << "Protect[p] ";
                    if (a == 'p')
                    {
             a.protect();
             }       
             }
             if (lvl > 8)
             {
                     cout << "Cure[c] ";
                     if (a == 'c')
                     {
             a.cure();
             }
             }
             if (lvl > 12)
             {
                     undeadInt--;
                     cout << "Undead Circle[u] ";
                     if (a == 'u')
                     {
             a.undead_Circle();
             }
             }
             if (lvl > 18)
             {
                     sentInt--;
                     cout << "Sentinel[s] ";
                     if (a == 's')
                     {
             a.sentinel(); 
             }       
             }
    }
    if (job == 'w')
    {
            if (lvl > 10)
            {
                    defenderInt--;
                    cout << "Defender[d] ";
                    if (a == 'd')
                    {
                    a.defender();
                    }
            }
            if (lvl > 16)
            {
                    berserkInt--;
                    cout << "Berserk[b] ";
                    if (a == 'b')
                    {
                    a.berserk();
                    }
            }
            if (lvl > 20)
            {
                    cout << "Rampage[r] ";
                    if (a == 'r')
                    {
                    a.rampage();
                    }
            }
    }
    if (job == 'd')
    {
            if (lvl > 5)
            {
                    lastrInt--;
                    cout << "Last Resort[l] ";
                    if (a == 'l')
                    {
            a.lastResort();
            }
            }
            if (lvl > 15)
            {
                    cout << "Soul Eater[s] ";
                    if (a == 's')
                    {
            a.soulEater();
            }
            }
            if (lvl > 20)
            {
                    cout << "Drain[d] ";
                    if (a == 'd')
                    {
            a.drain();
            }
            }
            if (lvl > 21)
            {
                    absInt--;
                    cout << "Absorb Attack[a] ";
                    if (a == 'a')
                    {
            a.abs_Attack();
            }
            }
            if (lvl > 22)
            {
                    arcanaInt--;
                    cout << "Arcana Circle[c] ";
                    if (a == 'c')
                    {
            a.arcana_Circle();
            }
            }        
    }          
}
int Functions::cure(int& chp)
{
  chp += chp/8;    
}
int Functions::cura(int& chp)
{
  chp += chp/7;
}
int Functions::regen(int& regenGoesHere);
{
    regen = 5;
}
int Functions:fire(int& cmid, int& emid, int& dmg)
{
    dmg = (cmid - emid/2) + rand()%cmid;
    if (mobType == 'f')
    {
                dmg += dmg/4;
    }
    if (mobType == 'w')
    {
                dmg -= dmg/4;
                }     
                   
}
int Functions::water(int cmid, int emid, int& dmg)
   {
    dmg = (cmid - emid/2) + rand()%cmid;
    if (mobType == 'w')
    {
                dmg += dmg/4;
    }
    if (mobType == 'f')
    {
                dmg -= dmg/4;
                }     
                   
} 
int Functions::blizzard(int cmid, int& emid, int& dmg)
    {
    dmg = (cmid - emid/2) + rand()%cmid;
    if (mobType == 'w')
    {
                dmg += dmg/4;
    }
    if (mobType == 'f')
    {
                dmg -= dmg/4;
                }
}
int Functions::thunder(int cmid, int& emid, int& dmg)
      {
    dmg = (cmid - emid/2) + rand()%cmid;
    if (mobType == 'n')
    {
                dmg += dmg/4;
    }
    if (mobType == 'f')
    {
                dmg -= dmg/4;
                }
}
int Abilities::lastResort(int& catt, int& cdef)
{    
        catt += catt/5;
        cdef -+ cdef/5;
}
int Abilities::sentinel(int& cdef, int& sentInt)
{
    sentInt = 3;
    cdef += cdef;
}
int Abilities::soulEater(int& chp, int& dmg)
{
    dmg = chp/5 + dmg;
    chp -= chp/5;
}
int Abilities::protect(int& cdef, int& proInt)
{
    proInt = 5;
    cdef += cdef/5;
}
int Abilities::arcanaCircle(char& mobType, int& circle, bool& arcana)
{
    if (arcana == 1)
    {
               cout << "The enemy is paralyzed";
    }
}
int Abilities::undeadCircle(char& mobType, int& circle, bool& undead)
{
    if (undead ==1)
    {
               cout << "The enemy is paralyzed";
    }
}
int Abilities::berserk(int& catt, int& cdef)
{
    catt += catt/7;
    cdef -= cdef/7;
    cout << "Your attack increased and defense decreased.";
}
int Abilities::defender(int& catt, int& cdef)
{
    catt -= catt/7;
    cdef += cdef/7;
    cout << "Your defense increased and attack decreased.";
}
int Abilities::rampage(int& dmg, int& catt, int& chp)
{
    dmg = rand()/catt;
    chp -= dmg/2;
    cout << "You lost " << dmg << " hit points.";
}
int Abilities::abs_Attack(int& cmid, int& catt, int& eatt)
{
    absInt = 5;
    dmg = rand()%cmid;
    catt += dmg;
    eatt -= dmg;
    cout << "You absorbed " << dmg << " from the enemy!";
}
int Abilities::Drain(int& chp, int& emid, int& dmg, int& ehp, int& ehp, int& cmid)
{
    dmg = rand()%(cmid-(emid/2))
    chp += dmg;
    ehp -= dmg;
    cout << "You absorbed " << dmg << " from the enemy!";
} 
    

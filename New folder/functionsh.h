// in functions header
#ifndef FUNCTIONSH_H
#define FUNCTIONSH_H


class Functions
{
      
      public:
             char e, f;
             int level_up(int& a, int& d, int& e, int& m, int& hp, int& cexp);
             char explore();
             int boss_Battle();
             int customize();
             int flee();
             int forest();
             int dunes();
             int qufim_Island();
             //mobs in qufim Island
             int ghoul();
             int bogy();
             int giant();
             int poltergeist();
             int iceElement();
             // mobs in dunes
             int fireLizard();
             int goblin();
             int pugilist();
             int crab();
             int goblinS();
             int nightBats();
             int damselfly();
             //mobs in ronfaure        
             int fsheep();
             int worm();
             int hare();
             int orcG();
             int orcF();
             int orcM();
             //misc functions
             int beginning();
             int battle();
             int usFleeF();
             int usFleeD();
             int usFleeQ();
             int abilities(int a, int b);
             // paladin abilities         
             int protect();
             int sentinel();
             int undead_Circle();
             
             // mage abilities
             int cure();
             int cura();
             int regen();
             int fire();
             int blizard();
             int thunder();
             int stone();
             int water();
             // warrior abilities
             int defender();
             int berserk();
             int rampage();
             //dark knight abilities
             int soulEater();
             int lastResort();
             int drain();
             int abs_Attack();
             int arcana_Circle();
};
#endif

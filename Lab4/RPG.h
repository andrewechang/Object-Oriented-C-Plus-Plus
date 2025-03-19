#ifndef RPG_H
#define RPG_H
#include <iostream>
#include <iomanip>
using namespace std;
const int SKLL_SIZE = 2;

class RPG {
    public:
        //constructors
        RPG();
        RPG (string name, int health, int strength, int defense, string type);

        //accessors
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;
        bool isAlive() const;
        
        //mutators
        void setSkills();
        void printAction(string, RPG);
        void updateHealth(int health);
        void attack (RPG*);
        void useSkill(RPG*);

    private:
        string name;
        int health;
        int strength;
        int defense;
        string type;
        string skills [SKLL_SIZE];    
};
#endif
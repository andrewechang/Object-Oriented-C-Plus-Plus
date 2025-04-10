#ifndef CHARMANDER_H
#define CHARMANDER_H

#include <iostream>
#include <string>
#include <vector>
#include "pokemon.h"
using namespace std;

class Charmander: public Pokemon {
    public:
        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s);

        //mutator functions
        void speak(); //overrides the Pokemon class speak function
        void printStats(); //overrides the Pokemon class printStats function

    private:
        vector<string> skills;
        string name;
        int hp;
        int attack;
        int defense;

};
#endif
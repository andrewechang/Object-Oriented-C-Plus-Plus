#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
using namespace std;

class Pokemon {
    public:
    Pokemon();
    Pokemon(string name, int hp, int att, int def, vector<string> type);

    //mutator functions
    void speak();
    virtual void printStats();

    //accessor functions
    protected:
    string name;
    int hp;
    int attack;
    int defense;
    vector<string> type;
};
#endif
#include <iostream>
#include <stdio.h>
#include "charmander.h"

Charmander::Charmander() : Pokemon() {
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "Default constructor (Charmander)" << endl;
}
Charmander::Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s) : Pokemon(name, hp, att, def, t) {
    this->name = name;
    this->hp = hp;
    attack = att;
    defense = def;
    type = t;
    skills = s;

    cout << "Overloaded constructor (Charmander)" << endl;
}
void Charmander::speak() {
    cout << "Charmander says: Charmander shall KILL YOU!" << endl;
}

void Charmander::printStats() {
    Pokemon::printStats();
    cout <<"skills";
    for(int i=0; i < skills.size(); i++) {
        cout <<skills[i] <<"\t";
    }
    cout <<endl;
}
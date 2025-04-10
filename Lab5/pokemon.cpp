#include <iostream>
#include "pokemon.h"

Pokemon::Pokemon() {
    name = "Unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout <<"Default contructor (Pokemon)" <<endl;
}

Pokemon::Pokemon (string name, int hp, int att, int def, vector<string> type) {
    this->name = name;
    this->hp = hp;
    attack = att;
    defense = def;
    type = type;
    cout <<"Overloaded Constructor (Pokemon)" <<endl;
}

void Pokemon::speak() {
    cout <<"Pokemon says: THOU SHALT DIE!" <<endl;
}
void Pokemon::printStats() {
    cout << "Name: " << name << endl;
    cout << "HP: " << hp << endl;
    cout << "Attack: " << attack << endl;
    cout << "Defense: " << defense << endl;
    cout << "Type: ";
    for (int i = 0; i < type.size(); i++) {
        cout << type[i] << " ";
    }
    cout << endl;
}
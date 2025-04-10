#include <iostream>
#include "charmander.h"
using namespace std;
int main()
{
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout <<"------Constructor Created------" <<endl;
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType, skills);
    //charmander
    cout <<"\n------Direct Speak------" <<endl;
    charlie.speak();
    //pokemon pointer to Charmander
    Pokemon *p1 = &charlie;
    cout <<"\n------Speak called from Pokemon Pointer------" <<endl;
    (*p1).speak();
    //charmander pointer to Charmander
    Charmander *c1 = &charlie;
    cout <<"\n------Speak called from Charmander Pointer------" <<endl;
    (*c1).speak();
    //charmander
    cout <<"\n------Print Stats------" <<endl;
    charlie.printStats();

}
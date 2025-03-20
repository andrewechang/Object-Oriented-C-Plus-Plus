#include <iostream>
#include <iomanip>
#include "RPG.h"
using namespace std;

//initiation function
RPG::RPG(string name, int health, int strength, int defense, string type) {
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;
    setSkills();
}

//sets the skills based on the type of character
void RPG::setSkills() {
    if (type == "mage") {
        skills[0] = "fire";
        skills[1] = "thunder";
    } else if (type == "thief") {
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer") {
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills[1] = "parry";
    }
}

//default constructor
RPG::RPG() {
    name = "NPC";
    health = 100;
    strength = 50;
    defense = 50;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}

//********************ACCESSOR FUNCTIONS*********************
string RPG::getName() const {
    return name;
}

int RPG::getHealth() const {
    return health;
}

int RPG::getStrength() const {
    return strength;
}

int RPG::getDefense() const {
    return defense;
}

//checks whether the player is alive or not
bool RPG::isAlive() const {
    if (health <= 0) {
        return false;
    } else {
        return true;
    }

}

void RPG::printAction(string skill, RPG opponent) {
    printf ("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str()); 
}
void RPG::updateHealth(int health) {
    this->health = health;
}

//********************ATTACKING FUNCTIONS*********************

//attacks opponent
void RPG::attack(RPG * opponent) {
    int damage = max (0, strength - opponent->getDefense());
    opponent->updateHealth(opponent->getHealth() - damage);
}

//uses the skill chosen by the player
void RPG::useSkill (RPG * opponent) {
    //list skills
    for (int i = 0; i < SKLL_SIZE; i++) {
        cout <<"Skill #" <<i <<" is " <<skills[i] <<endl;
    }
    cout <<"choose a skill to use: enter 0 or 1" <<endl;
    int chosen_skill_index;
    cin >> chosen_skill_index;
    string chosen_skill = skills[chosen_skill_index];
    printAction(chosen_skill, *opponent);
    RPG::attack(opponent);
}

    
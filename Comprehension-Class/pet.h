#include <iostream>
#include <iomanip>
#include <cmath>
#ifndef PET_H
#define PET_H
using namespace std;

class pet {
    pet ();
    pet (string name, int age, string owner, bool isHouseTrained);

    //accessor functions
    void getName(string name);
    void getAge(int age);
    void getOwner(string owner);
    void getIsHouseTrained(bool isHouseTrained);

    //mutator functions
    void updateName (string name);
    void updateAge (int age);
    void updateOwner (string owner);
    void updateIsHouseTrained (bool isHouseTrained);

private:
    string name;
    int age;
    string owner;
    bool isHouseTrained;    
};
#endif
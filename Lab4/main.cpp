#include <iostream>
#include <iomanip>
#include "RPG.h"
using namespace std;

int main()
{
    RPG NPC = RPG();
    RPG Player1  = RPG("Player1", 100, 30, 5, "archer");

    cout <<"Name of NPC: " <<NPC.getName() <<endl;
    cout <<"Health of NPC: " <<NPC.getHealth() <<endl;
    cout <<"is NPC alive? (0 is deaad, 1 is alive) " <<NPC.isAlive() <<endl <<endl;

    cout <<"Name of Player1: " <<Player1.getName() <<endl;
    cout <<"Health of Player1: " <<Player1.getHealth() <<endl;
    cout <<"is Player1 alive? (0 is dead, 1 is alive) " <<Player1.isAlive() <<endl <<endl;

    cout <<"Changing NPC health to 0" <<endl;
    NPC.updateHealth(0);
    cout <<"is NPC alive? (0 is dead, 1 is alive) " <<NPC.isAlive() <<endl <<endl;

    cout <<"Changing Player1 health to 0" <<endl;
    Player1.updateHealth(0);
    cout <<"is Player1 alive? (0 is dead, 1 is alive) " <<Player1.isAlive() <<endl;

    return 0;
}
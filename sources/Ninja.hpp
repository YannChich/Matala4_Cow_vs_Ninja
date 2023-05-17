#pragma once
#include "Character.hpp"

using namespace std;
namespace ariel{

class Ninja:public Character{ // our class Cowboy implement the class Character
private:
// Data of a Ninja
    int speed;

public:
// Constructor (using the constructor of Character)
    // Parameterized
    // Adding health and speed because we got 3 differents type of Ninja
    Ninja(Point& location,int health,string& name,int speed);

// Function for a Ninja
/*
-This function move on our game the ninja to the enemy.(use the function moveToward of Class::Point)
*/
    void speed(Character* enemy);

/*
-This function going to represent the action of the Ninja : slash someone
-Exception : if the enemy is not a meter away , there is no damage
-Damage of slash : -40HP
*/

/*
-This function is the override of the virtual function of the Character
-The function print the detail of a Character and add C before the Print
*/
    virtual string print()const override;
    }
}
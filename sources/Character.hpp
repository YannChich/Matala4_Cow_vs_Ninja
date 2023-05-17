#pragma once
#include <iostream>
#include <string>
#include "Point.hpp"

using namespace std;


namespace ariel{

class Character{

protected: // Data should be accessible by subclasses only are declared as protected
    Point location;
    int health;
    string name;
    bool inTeam;

public: 
// Constructor
    // Parameterized
    Character(Point& location,int healht,string& name);

// Differents function that every type of Character going to share

/*
-This function return True if the Character is alive or False (cheking the heal of the character)
*/
    bool isAlive() const;

/*
-This function going to return the distance between two characters on the game
-The function receives as parameter a ptr of a Character
*/
    double distance(Character* character) const;

/*
-The function going to reduce the health of a Character basing on the damage of the enemy
*/
    void hit(int damage);

// Getters
    int getHealth() const;
    string getName() const;
    Point getLocation() const;
    bool getInTeam() const;

// Setter 
    void setInTeam(bool InTeam);
    void setLocation(Point& new_Location);

/*
-This function print going to print the details of the Character like : Name , damage , health
-If the character is dead going to print the name in parenthese
-Before each prints , will see the Char N(Ninja) and C(Cowboy)
-The function going to be virtual because we got differents Characters and differents details for each of them
*/
    virtual string print() const = 0;
    };
}
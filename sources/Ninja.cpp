#include "Ninja.hpp"

using namespace std;
using namespace ariel;

Ninja::Ninja(Point& location,int health,string& name,int speed):Character(location,health,name),Speed(speed){}

void Ninja::move(Character* enemy){
    return;
}

void Ninja::slash(Character* enemy){
    return;
}

string Ninja::print()const{
    return "";
}

YoungNinja::YoungNinja(Point& location,string& name):Ninja(location,100,name,14){}

TrainedNinja::TrainedNinja(Point& location,string& name):Ninja(location,120,name,12){}

OldNinja::OldNinja(Point& location,string& name):Ninja(location,150,name,8){}
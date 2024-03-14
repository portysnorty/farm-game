#include "sheep.h"
#include <string>
#include <iostream>


void Sheep::funFact(){
    std::cout<<"In medival Europe, doctors would use maggot infested sheep gallbladders to treat the plauge.\n";
}
void Sheep::speak(){
    std::cout<<noise<<"\n";
}

Sheep::Sheep(std::string n) : Animal(n){}

// work in this first
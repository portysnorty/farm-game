#include "chicken.h"
#include <string>
#include <iostream>


void Chicken::funFact(){
    std::cout<<"Chickens will consume anything and will gain a thrist for eating their own eggs.\n";
}
void Chicken::speak(){
    std::cout<<noise<<"\n";
}

Chicken::Chicken(std::string n) : Animal(n){}

//3
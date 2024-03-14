#include "pig.h"
#include <string>
#include <iostream>


void Pig::funFact(){
    std::cout<<"Pigs can consume an entire human body.\n";
}
void Pig::speak(){
    std::cout<<noise<<"\n";
}

Pig::Pig(std::string n) : Animal(n){}

// second
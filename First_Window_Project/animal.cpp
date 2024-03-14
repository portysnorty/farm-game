#include "animal.h"
#include <string>
#include <iostream>


void Animal::funFact(){
    std::cout<<"Hello Mr. Farmer,\n";
}
void Animal::speak(){
    std::cout<<"Hello Mr. Farmer,\n";
}

Animal::Animal(std::string n):name(n){}

Animal::~Animal(){
    std::cout<<"Goodbye. I will be watching over you, always waiting. come back soon......\nor else I will get lonely..........\nYou don't want to see me when I'm lonely.................";
}

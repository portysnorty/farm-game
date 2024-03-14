#include "cow.h"
#include <string>
#include <iostream>


void Cow::funFact(){
    std::cout<<"Cows kill more people than sharks annually.\n";
}
void Cow::speak(){
    std::cout<<noise<<"\n";
}

Cow::Cow(std::string n) : Animal(n){}

//4
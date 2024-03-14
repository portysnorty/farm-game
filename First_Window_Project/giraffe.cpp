#include "giraffe.h"
#include <string>
#include <iostream>


void Giraffe::funFact(){
    std::cout<<"Giraffes will gnaw on the bones of carcasses to retain their strength.\n";
}
void Giraffe::speak(){
    std::cout<<noise<<"\n";
}

Giraffe::Giraffe(std::string n) : Animal(n){}

//5
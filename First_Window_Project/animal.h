#ifndef ANIMAL
#define ANIMAL

#include <string>
#include <iostream>

class Animal {
    public:
        std::string name;

        virtual void funFact();
        virtual void speak();
        Animal(std::string n);
        ~Animal();
};

#endif
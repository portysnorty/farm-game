#include <string>
#include <iostream>

#include "animal.h"

class Sheep : public Animal {
    private:
        std::string noise = "baaaaa";
    public:
        void speak() override;
        void funFact() override;
        Sheep(std::string n);
};
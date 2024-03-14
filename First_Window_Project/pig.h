#include <string>
#include <iostream>

#include "animal.h"

class Pig : public Animal {
    private:
        std::string noise = "oink_oink";
    public:
        void speak() override;
        void funFact() override;
        Pig(std::string n);
};
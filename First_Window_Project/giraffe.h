#include <string>
#include <iostream>

#include "animal.h"

class Giraffe : public Animal {
    private:
        std::string noise = "01011001 01001111 01010101 00100000 01010111 01001001 01001100 01001100 00100000 01000100 01001001 01000101";
    public:
        void speak() override;
        void funFact() override;
        Giraffe(std::string n);
};
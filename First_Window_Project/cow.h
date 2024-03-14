#include <string>
#include <iostream>

#include "animal.h"

class Cow : public Animal {
    private:
        std::string noise = "meow";
    public:
        void speak() override;
        void funFact() override;
        Cow(std::string n);
};
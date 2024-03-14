#include <string>
#include <iostream>

#include "animal.h"

class Chicken : public Animal {
    protected:
        std::string noise = "Baka Baka Baka die";
    public:
        void speak() override;
        void funFact() override;
        Chicken(std::string n);
};
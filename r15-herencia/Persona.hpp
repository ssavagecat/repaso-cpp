#pragma once
#include <iostream>
#include <string>

class Persona {
    private:
        std::string Name;
    public:
        Persona(std::string n);
        ~Persona();
        std::string getName() const;
};
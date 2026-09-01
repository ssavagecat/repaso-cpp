#pragma once 
#include "Persona.hpp"
#include <iostream>
#include <string>

class Empleado : public Persona {
    private:
        int Sueldo;
    public:
        Empleado(std::string n, int s);
        ~Empleado();
        int getSueldo() const;
};
#pragma once
#include "Persona.hpp"
#include "Empleado.hpp"
#include <iostream>
#include <string>

class Gerente : public Empleado {
    private:
        int Empleados;
    public:
        Gerente(std::string n, int s, int e);
        ~Gerente();
        int getEmpleados() const;
};
#include "Empleado.hpp"

Empleado::Empleado(std::string n, int s) : Persona(n), Sueldo(s) {
    std::cout << "Empleado: " << getSueldo() << '\n';
}

Empleado::~Empleado() {
    std::cout << "~Empleado" << '\n';
}

int Empleado::getSueldo() const {
    return Sueldo;
}
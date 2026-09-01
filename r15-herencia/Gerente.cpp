#include "Gerente.hpp"

Gerente::Gerente(std::string n, int s, int e) : Empleado(n,s), Empleados(e) {
    std::cout << "Gerente: " << getEmpleados() << '\n';
}

Gerente::~Gerente() {
    std::cout << "~Gerente" << '\n';
}

int Gerente::getEmpleados() const {
    return Empleados;
}
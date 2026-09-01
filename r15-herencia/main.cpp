// "R15: jerarquia de tres niveles"

#include "Persona.hpp"
#include "Empleado.hpp"
#include "Gerente.hpp"
#include <iostream>

int main() {
    std::cout << "--- Inicio ---" << '\n';
    Gerente g("Ana",1000,5);
    std::cout << "--- Fin ---" << '\n';
    return 0;

}
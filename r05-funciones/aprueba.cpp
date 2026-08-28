#include "aprueba.hpp"
#include <iostream>

void aprueba(int promedio) {
    if (promedio >= 70) std::cout << "Aprobado\n";
    else            std::cout << "Reprobado\n";
}
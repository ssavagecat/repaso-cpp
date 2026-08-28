#include "promedio.hpp"
#include <iostream>

int promedio(int suma) {
    double prom = suma / 3;
    std::cout << "Promedio: " << prom << '\n';
    return prom;
}
#include "leerEnRango.hpp"
#include <iostream>

int main() {
    int lo = 1;
    int hi = 100;
    std::string mensaje = "Write a number: ";
    leerEnRango(mensaje, lo, hi);
    
    return 0;
}
#include "leerEnRango.hpp"
#include <iostream>
#include <limits>

void limpiarLinea() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int leerEnRango(std::string msg, int lo, int hi) {
    int num = 0;
    while (true) {
        std::cout << msg;
        bool ok = static_cast<bool>(std::cin >> num);
        limpiarLinea();

        if (ok && num >= lo && num <= hi) return num;
        std::cout << "Try with a number within the range (1 to 100) " << "\n";
    }
}
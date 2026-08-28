#include "pedirNotas.hpp"
#include <iostream>

int pedirNotas(int notas[], int num) {
    int suma = 0;
    for (int i = 0; i < num; i++) {
        std::cout << "Nota " << i + 1 << ": ";
        std::cin >> notas[i];
        suma += notas[i];
    }
    return suma;
}
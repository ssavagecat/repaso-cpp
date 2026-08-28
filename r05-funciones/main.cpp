// obj: Extrae tres funciones: pedir las notas, calcular el promedio y decidir si aprueba.
#include <iostream>
#include "pedirNotas.hpp"
#include "promedio.hpp"
#include "aprueba.hpp"


int main() {

    int n[] = {};
    int sum = 0; 
    int avg = 0;

    int materias = 0;
    std::cout << "Teclea el num. de materias que cursaste: ";
    std::cin >> materias;
    
    sum = pedirNotas(n, materias);
    avg = promedio(sum);
    aprueba(avg);

    return 0;
}
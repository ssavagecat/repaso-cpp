// "R17: Arreglo convertido en plantilla"

#include "arreglo.hpp"
#include <iostream>
#include <string>

int main() {

        Arreglo<std::string> a(2);
        a.set(0, "Platano");

        Arreglo<double> b(2);
        b.set(0, 99.99);

        std::cout << "a.get(0) = " << a.get(0) << '\n';
        std::cout << "b.get(0) = " << b.get(0) << '\n';
    
    return 0;
}
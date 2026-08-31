// -g -fsanitize=address

#include "arreglo.hpp"
#include <iostream>

int main() {
    Arreglo a(5);
    a.set(0, 42);
    Arreglo b = a;
    b.set(0, 99);
    std::cout << "a.get(0) = " << a.get(0) << '\n';
    std::cout << "b.get(0) = " << b.get(0) << '\n';
    return 0;
}
#include "Fraccion.hpp"

int main() {

    Fraccion f1(1,2);
    Fraccion f2(1,3);
    Fraccion f3 = f1 + f2;
    Fraccion f4 = f1 * f2;

    std::cout << f1 << " + " << f2 << " = " << f3 << '\n';
    std::cout << f1 << " * " << f2 << " = " << f4 << '\n';

    Fraccion f5(6, -8);
    
    std::cout << "6/-8 = " << f5 << '\n';

    return 0;
}
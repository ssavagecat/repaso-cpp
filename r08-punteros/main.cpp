#include "intercambiar.hpp"
#include <iostream>

int main() {

    int x {1};
    int y {2};

    intercambiar1(x, y);
    intercambiar2(&x, &y);
    intercambiar3(x, y);

    return 0;
}
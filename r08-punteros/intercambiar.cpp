#include "intercambiar.hpp"
#include <iostream>

void intercambiar1(int a, int b) {
    int t = a; a = b; b = t;
    std::cout << a << " " << b << '\n';
}  

void intercambiar2(int* a, int* b) {
    int t = *a; *a = *b; *b = t; 
    std::cout << a << " " << b << '\n';
}    

void intercambiar3(int& a, int& b) {
    int t = a; a = b; b = t;
    std::cout << a << " " << b << '\n';
}    
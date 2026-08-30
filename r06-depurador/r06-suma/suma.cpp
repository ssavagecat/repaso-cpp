#include <iostream>

int suma(const int v[], int n) { // A
    int s = 0;
    for (int i = 0; i < n; i++) // leia un valor fuera del arreglo
    s += v[i];
    return s;
}

int main() {
    int v[] = {3, 21, 45, 88, 12};
    int x = 5;
    suma(v, x);
    return 0;
}
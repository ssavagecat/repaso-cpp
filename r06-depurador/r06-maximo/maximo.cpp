#include <iostream>

int maximo(const int v[], int n) { // C
    int mejor = v[0];
    for (int i = 0; i < n; i++) if (v[i] > mejor) mejor = v[i];
    return mejor;
}

int main() {
    int v[] = {3, 21, 45, 88, 12};
    int x = 5;
    maximo(v, x);
    return 0;
}
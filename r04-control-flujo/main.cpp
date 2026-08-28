#include <iostream>

int main() {

    const int N = 5;
    int d[N] = {10, 20, 30, 40, 50};
                                              
    int suma = 0;                              // (0)10,(1)30,(2)60,(3)100,(4)150,(5)????? 
    for (int i = 0; i < N; i++) suma += d[i];  // the solution is to change <= for < 

    int cuantos = 0;                         // B: contar > 25
    for (int i = 0; i < N; i++)              // se salta al 20, pues empieza en d[1]
        if (d[i] > 25) cuantos++;

    int k = 0;                               // imprime 10 y ya, no hay incremento en 'k'
    while (k < N) { 
        std::cout << d[k] << ' '; 
        k++;
    }

    return 0;
}
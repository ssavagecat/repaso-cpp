#include "arreglo.hpp"

    Arreglo::Arreglo(int tam) : datos(new int[tam]), n(tam) {}
    
    // El constructor que recibe otro objeto de su clase
    Arreglo::Arreglo(const Arreglo& otro) : datos(new int[otro.n]), n(otro.n) {
    for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
    }

    Arreglo::~Arreglo() {delete[] datos;} 

    Arreglo& Arreglo::operator=(const Arreglo& otro) {
    if (this == &otro) return *this;
    delete[] datos;
    n = otro.n;
    datos = new int[n];
    for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
    return *this;
    }

    void Arreglo::set(int i, int v) {datos[i] = v;}
    int  Arreglo::get(int i) {return datos[i];}
    int  Arreglo::tam() const {return n;}
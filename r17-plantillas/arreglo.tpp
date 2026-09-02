#include "arreglo.hpp"

    template<typename T>
    Arreglo<T>::Arreglo(int tam) : datos(new T[tam]), n(tam) {}
    
    template<typename T>
    Arreglo<T>::Arreglo(const Arreglo& otro) : datos(new T[otro.n]), n(otro.n) {
        for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
    }

    template<typename T>
    Arreglo<T>::~Arreglo() {delete[] datos;} 

    template<typename T>
    Arreglo<T>& Arreglo<T>::operator=(const Arreglo& otro) {
        if (this == &otro) return *this;
        delete[] datos;
        n = otro.n;
        datos = new T[n];
        for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
        return *this;
    }

    template<typename T>
    void Arreglo<T>::set(int i, T v) {datos[i] = v;}

    template<typename T>
    T  Arreglo<T>::get(int i) {return datos[i];}
    
    template<typename T>
    int  Arreglo<T>::tam() const {return n;}
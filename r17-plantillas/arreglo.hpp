#pragma once
#include <iostream>

template<typename T>
class Arreglo {
    private:
        T* datos;
        int n;
    public:
        Arreglo(int tam);
        Arreglo(const Arreglo& otro);
        ~Arreglo();
        Arreglo& operator=(const Arreglo& otro);
        void set(int i, T v);
        T get(int i);
        int tam() const;
};

#include "arreglo.tpp"
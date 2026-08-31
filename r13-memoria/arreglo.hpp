#pragma once

class Arreglo {
    private:
        int* datos;
        int n;
    public:
        Arreglo(int tam);
        Arreglo(const Arreglo& otro);
        ~Arreglo();
        Arreglo& operator=(const Arreglo& otro);
        void set(int i, int v);
        int get(int i);
        int tam() const;
};
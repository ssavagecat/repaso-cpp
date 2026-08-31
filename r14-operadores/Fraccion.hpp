#pragma once
#include <iostream>
#include <numeric>

class Fraccion {
    private:
        int num_ = 1;
        int den_ = 1;
        void reducir();
    public:

        Fraccion(int n = 0, int d = 1);
        
        Fraccion operator+(const Fraccion& f);
        Fraccion operator*(const Fraccion& f);

        bool operator==(const Fraccion& f);
        bool operator<(const Fraccion& f);

        friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);

};
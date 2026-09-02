#define _USE_MATH_DEFINES
#include "Figura.hpp"
#include <string>
#include <cmath>

class Circulo : public Figura {
    private:
        int r_ {};
    public:
        Circulo(double r);
        double area() const override;
        std::string nombre() const override;
};
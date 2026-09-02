#pragma once
#include "Figura.hpp"
#include <string>


class Rectangulo : public Figura {
    private:
        int a_ {};
        int b_ {};
    public:
        Rectangulo(double a, double b);
        double area() const override;
        std::string nombre() const override;
};
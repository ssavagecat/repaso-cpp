#pragma once
#include <iostream>
#include <string>
#include <vector>

class Figura {
    public:
        virtual double area() const = 0;
        virtual std::string nombre() const = 0;
        virtual ~Figura() = default;

        double areaTotal(const std::vector<Figura*>& figs);
};
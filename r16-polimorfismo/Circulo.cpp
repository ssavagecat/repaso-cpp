#include "Circulo.hpp"

Circulo::Circulo(double r) : r_(r) {}

double Circulo::area() const { return 2 * M_PI * r_ ; }

std::string Circulo::nombre() const { return "Circulo" ; }
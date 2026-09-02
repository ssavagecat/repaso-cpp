#include "Rectangulo.hpp"

Rectangulo::Rectangulo(double a, double b) : a_(a), b_(b) {}

double Rectangulo::area() const { return a_ * b_; }

std::string Rectangulo::nombre() const { return "Rectangulo"; }
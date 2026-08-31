#include "Fraccion.hpp"

Fraccion::Fraccion(int n, int d) : num_(n), den_(d) {reducir();}

Fraccion Fraccion::operator+(const Fraccion& f) {
    return Fraccion(
        num_ * f.den_ + den_ * f.num_ ,
        den_ * f.den_
    );
}

void Fraccion::reducir() {
    int mcd = std::gcd(num_, den_);

    num_ /= mcd;
    den_ /= mcd;

    if (den_ < 0) {
        num_ = -num_;
        den_ = -den_;
    }
}

Fraccion Fraccion::operator*(const Fraccion& f) {
    return Fraccion(
        num_ * f.num_ ,
        den_ * f.den_
    );
}

bool Fraccion::operator==(const Fraccion& f) {
    return num_ * f.den_ == f.num_ * den_ ;
}

bool Fraccion::operator<(const Fraccion& f) {
    return num_ * f.den_ < f.num_ * den_ ;
}

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    os << f.num_ << "/" << f.den_ << '\n';
    return os;
}
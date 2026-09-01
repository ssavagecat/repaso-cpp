#include "Persona.hpp"

Persona::Persona(std::string n) : Name(n) {
    std::cout << "Persona: " << getName() << '\n';
}

Persona::~Persona() {
    std::cout << "~Persona" << '\n';
}

std::string Persona::getName() const {
    return Name;
}
#include "contarPalabras.hpp"
#include <iostream>
#include <string>

int contarPalabras(const std::string& s) {

     int contar {};
     bool dentro {false}; // variable para detectar espacios dentro de "s";

     for (char c : s) {  // c : s, para recorrer caracter por caracter
        if (c == ' ') dentro = false;
        else if (!dentro) {dentro = true; contar++;}
     }

     return contar;
}
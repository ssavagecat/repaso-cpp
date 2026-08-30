#include "contarPalabras.hpp"
#include "voltear.hpp"
#include <iostream>
#include <string>

int main() {

	std::string words    {"Estructura de Datos"};
	std::string volteado {};
	int contador 		 {};

	contador = contarPalabras(words);
	volteado = voltear(words);

	std::cout << "Cantidad de grupos de caracteres separados: " << contador << "\n";
	std::cout << "String volteado: " << volteado << "\n";

	return 0;

}
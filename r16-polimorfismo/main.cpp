// "R16: figuras con area polimorfica"

#include "Figura.hpp"
#include "Rectangulo.hpp"
#include "Circulo.hpp"
#include <vector>


int main() {

    std::vector<Figura*> figs;
    figs.push_back(new Rectangulo(4.0,3.0)); // push_back es para poner un elemento en el vector
    figs.push_back(new Circulo(2.0));

    double total = figs[0]->areaTotal(figs);
    std::cout << "El Area Total es: " << total << '\n';

    for(Figura* f : figs) delete f;
    
    return 0;
}

#include "Figura.hpp"

double Figura::areaTotal(const std::vector<Figura*>& figs) {

    double total {0.0};
    double area_individual {0.0};
    std::string id {"Figura"};

    for (const Figura* f : figs) {
        total += f->area();
        area_individual = f->area();
        id = f->nombre();
        std::cout << "Nombre de la Figura: " << id << '\n';
        std::cout << "Area de la Figura: " << area_individual << '\n';
        std::cout << "====================================" << '\n';
    }
    return total;
}
#include <iostream>
#include <string>

class Reserva {
    private:
        std::string sala {"A1"};
        int personas {1};
        int horaInicio {1};
        int horaFin {2};
    public:
        // Validar el num. de personas en la sala
        bool asignarPersona(int p) {
            if (p < 1 || p > 20) return false;
            personas = p; return true;
        }
        // Validar que la hora este entre las 0 y 23 hrs
        bool validarHora(int hI, int hF) {
            if (hI < 0 || hF > 23 || hF <= hI) return false;
            horaInicio = hI, horaFin = hF; return true;
        }    
};

int main() {
    return 0;
}
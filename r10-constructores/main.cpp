/* "R10: orden de constructores y destructor"

#include <iostream>

Sesion global("global");  // constructores y destructor imprimen
int main() {
    Sesion a("a");
    { Sesion b("b"); Sesion c("c", 2); }
    std::cout << "--- medio ---\n";
    Sesion d;
}

Prediccion:
Sesion(global)
Sesion(a)
Sesion(b)
Sesion(c, 2)
~Sesion(c, 2)
~Sesion(b)
--- medio ---
Sesion(default)
~Sesion(default)
~Sesion(a)
~Sesion(global)

*/
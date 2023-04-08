#include <iostream>

void chequear_igualdad_de_int(int esperado, int obtenido) {
    if (esperado == obtenido) {
        std::cout << "Exito: esperado = obtenido = " << esperado << std::endl;
    } else {
        std::cout << "Fallo: esperado = " << esperado << " | obtenido = " << obtenido << std::endl;
    }
}
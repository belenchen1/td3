#include "seguridad.h"

#include "sucesion_de_fibonacci.h"


std::vector<int> login(std::vector<int> codigo) {
    std::vector<int> respuesta;

    for (int i : codigo) {
        int iesimo_termino = sucesion_de_fibonacci(i);
        respuesta.push_back(iesimo_termino);
    }
    respuesta.push_back(cantidad_de_datos_globales());

    return respuesta;
}

int cantidad_de_datos_globales() {
    return 79;
}
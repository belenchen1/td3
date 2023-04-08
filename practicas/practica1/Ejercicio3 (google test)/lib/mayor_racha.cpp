#include "mayor_racha.h"


int mayor_racha_de_viajes_rapidos_de(const std::vector<int> viajesEnColectivo, const std::vector<int> precios_de_viajes_en_rapido) {
    int mayor_racha = 0;
    int racha_actual = 0;

    for (const int viaje : viajesEnColectivo) {
        if (es_viaje_rapido(viaje, precios_de_viajes_en_rapido)) {
            racha_actual = racha_actual + 1;
        } else {
            racha_actual = 0;
        }
        mayor_racha = obtener_mayor(racha_actual, mayor_racha);
    }

    return mayor_racha;
}

bool es_viaje_rapido(int precio_viaje, const std::vector<int> & precios_de_viajes_en_rapido) {
    for (int precio : precios_de_viajes_en_rapido) {
        if (precio_viaje == precio) {
            return true;
        }
    }
    return false;
}

int obtener_mayor(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
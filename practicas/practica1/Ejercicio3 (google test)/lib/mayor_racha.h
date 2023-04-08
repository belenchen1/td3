#ifndef __MAYOR_RACHA_H__
#define __MAYOR_RACHA_H__

#include <vector>

int mayor_racha_de_viajes_rapidos_de(std::vector<int> viajesEnColectivo, std::vector<int> precios_de_viajes_en_rapido);

bool es_viaje_rapido(int precio_viaje, const std::vector<int> & precios_de_viajes_en_rapido);
int obtener_mayor(int a, int b);

#endif
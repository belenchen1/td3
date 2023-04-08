#include <iostream>
#include <vector>

#include "mayor_racha_test.h"
#include "lib/mayor_racha.h"
#include "lib/test.h"


int main() {
    test01_ejemplo1_es_correcto();
    test02_ejemplo2_es_correcto();
    test03_si_no_hay_viajes_rapidos_no_hay_racha();
    test04_si_no_hay_viajes_no_hay_racha();

    return 0;
}

std::vector<int> precios_de_viajes_en_rapido() {
    return std::vector<int>{40, 48, 50};
}

void test01_ejemplo1_es_correcto() {
    std::cout << std::endl << "Test 01" << std::endl;

    std::vector<int> viajes_de_colectivo = std::vector<int>{40, 50, 18, 40, 48, 50, 48, 40};
    
    chequear_igualdad_de_int(5, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

void test02_ejemplo2_es_correcto() {
    std::cout << std::endl << "Test 02" << std::endl;
    
    std::vector<int> viajes_de_colectivo = std::vector<int>{18, 40, 50, 27, 40, 50, 40, 48, 50, 22, 40, 50, 40, 48, 50, 40, 27, 40, 50, 40};
    
    chequear_igualdad_de_int(6, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

void test03_si_no_hay_viajes_rapidos_no_hay_racha() {
    std::cout << std::endl << "Test 03" << std::endl;
    
    std::vector<int> viajes_de_colectivo = std::vector<int>{18, 27, 18};
    
    chequear_igualdad_de_int(0, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

void test04_si_no_hay_viajes_no_hay_racha() {
    std::cout << std::endl << "Test 04" << std::endl;
    
    std::vector<int> viajes_de_colectivo = std::vector<int>{};
    
    chequear_igualdad_de_int(0, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}
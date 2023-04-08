#include <vector>
#include <iostream>
#include "mayor_racha_test.h"
#include "lib/mayor_racha.h"
#include "lib/test.h"
using namespace std;

int main() {
    test01_ejemplo1_es_correcto();
    test02_ejemplo2_es_correcto();
    test03_si_no_hay_viajes_rapidos_no_hay_racha();
    test04_si_no_hay_viajes_no_hay_racha();

    return 0;
}

vector<int> precios_de_viajes_en_rapido() {
    // COMPLETAR
    return vector<int>{};
}

void test01_ejemplo1_es_correcto() {
    cout << endl << "Test 01" << endl;

    vector<int> viajes_de_colectivo = vector<int>{40, 50, 18, 40, 48, 50, 48, 40};
    
    chequear_igualdad_de_int(5, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

void test02_ejemplo2_es_correcto() {
    cout << endl << "Test 02" << endl;
    
    vector<int> viajes_de_colectivo = vector<int>{18, 40, 50, 27, 40, 50, 40, 48, 50, 22, 40, 50, 40, 48, 50, 40, 27, 40, 50, 40};
    
    chequear_igualdad_de_int(6, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

void test03_si_no_hay_viajes_rapidos_no_hay_racha() {
    cout << endl << "Test 03" << endl;
    
    vector<int> viajes_de_colectivo = vector<int>{18, 27, 18};
    
    chequear_igualdad_de_int(0, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

void test04_si_no_hay_viajes_no_hay_racha() {
    cout << endl << "Test 04" << endl;
    
    vector<int> viajes_de_colectivo = vector<int>{};
    
    chequear_igualdad_de_int(0, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}
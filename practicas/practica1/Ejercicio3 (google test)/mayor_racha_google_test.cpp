#include <gtest/gtest.h>

#include "lib/mayor_racha.h"

#include <vector>

std::vector<int> precios_de_viajes_en_rapido() {
    return std::vector<int>{40, 48, 50};
}

TEST(MayorRachaTest, 01_ejemplo1_es_correcto) {
    std::vector<int> viajes_de_colectivo = std::vector<int>{40, 50, 18, 40, 48, 50, 48, 40};
    
    EXPECT_EQ(5, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

TEST(MayorRachaTest, 02_ejemplo2_es_correcto) {
    std::vector<int> viajes_de_colectivo = std::vector<int>{18, 40, 50, 27, 40, 50, 40, 48, 50, 22, 40, 50, 40, 48, 50, 40, 27, 40, 50, 40};
    
    EXPECT_EQ(6, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

TEST(MayorRachaTest, 03_si_no_hay_viajes_rapidos_no_hay_racha) {
    std::vector<int> viajes_de_colectivo = std::vector<int>{18, 27, 18};
    
    EXPECT_EQ(0, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}

TEST(MayorRachaTest, 04_si_no_hay_viajes_no_hay_racha) {
    std::vector<int> viajes_de_colectivo = std::vector<int>{};
    
    EXPECT_EQ(0, mayor_racha_de_viajes_rapidos_de(viajes_de_colectivo, precios_de_viajes_en_rapido()));
}
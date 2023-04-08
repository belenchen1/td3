#include "mayor_racha.h"
using namespace std;

int mayor_racha_de_viajes_rapidos_de(vector<int> viajesEnColectivo, vector<int> precios_de_viajes_en_rapido) {
    int max_racha=0;
    int cur_racha=0;
    for(int i=0; i<viajesEnColectivo.size(); i++){
        if(viajesEnColectivo[i]>=40){
            cur_racha++;
        }else{
            if(cur_racha>max_racha){
                max_racha=cur_racha;
                cur_racha=0;
            }
            
        }
    }
    if(cur_racha>max_racha){
        max_racha=cur_racha;
    }
    return max_racha;
}
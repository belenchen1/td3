#include "seguridad.h"
#include "sucesion_de_fibonacci.h"
using namespace std;

vector<int> login(vector<int> codigo) {
    vector<int> res;
    for(int i=0; i<codigo.size(); i++){
        res.push_back(sucesion_de_fibonacci(codigo[i]));
    }
    res.push_back(cantidad_de_datos_globales());
    return res;
}

int cantidad_de_datos_globales() {
    return 79;
}
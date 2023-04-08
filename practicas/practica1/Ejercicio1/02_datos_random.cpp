#include <iostream>
using namespace std;
int cantidad_de_datos_globales(){
    int cantidad_de_datos_globales = 79;
    return cantidad_de_datos_globales;
}
float cantidad_de_datos_por_persona(){
    float cantidad_de_datos_por_persona = 1.7;
    return cantidad_de_datos_por_persona;
}
int main (int argc, char **argv) {
    
    cout << "En 2021 se consumieron globalmente " << cantidad_de_datos_globales() << " Zettabytes de información." << endl;

    cout << "En promedio, una persona genera " << cantidad_de_datos_por_persona() << " Megabytes de datos por segundo." << endl;

    return 0;
}
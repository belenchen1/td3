#include <iostream>
#include "matematica.h"

using namespace std;

int main() {
    cout << "Introduzca una expresión matemática: " << endl;
    float a;
    char b;
    float c;
    float res;
    cin >> a >> b >> c;
    if (b == '+'){
        res = sumar(a, c);
    } else if(b == '-'){
        res = restar(a, c);
    } else if(b == '*'){
        res = multiplicar(a, c);
    } else if (b == '/'){
        res = dividir(a, c);
    }
    cout << "La expresión tiene valor: " << res << endl;
}
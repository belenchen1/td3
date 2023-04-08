#include <iostream>
using namespace std;
#include "sucesion_de_fibonacci.h"

int sucesion_de_fibonacci(int i);

int main (int argc, char **argv) {
    
    cout << "Ingrese un numero: ";
    int numero;
    cin >> numero;

    cout << "El numero ingresado es: " << numero << endl;

    cout << "El iesimo término de la sucesión de Fibonacci es " << sucesion_de_fibonacci(numero) << endl;

    return 0;
}


#include <iostream>

#include "lib/sucesion_de_fibonacci.h"


int main (int argc, char **argv) {
    std::cout << "Ingrese un numero: ";

    int numero;
    std::cin >> numero;

    std::cout << "El numero ingresado es: " << numero << std::endl;

    std::cout << "El iesimo término de la sucesión de Fibonacci es " << sucesion_de_fibonacci(numero) << std::endl;

    return 0;
}

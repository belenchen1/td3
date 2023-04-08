#include <iostream>
#include <vector>

#include "lib/seguridad.h"

int main() {
    std::vector<int> codigo;

    for (int i = 0; i < 5; i++) {
        int numero;
        std::cin >> numero;
        codigo.push_back(numero);
    }

    std::cout << "El código de seguridad es: ";
    for (int numero : login(codigo)) {
        std::cout << numero;
    }
    std::cout << std::endl;

    return 0;
}

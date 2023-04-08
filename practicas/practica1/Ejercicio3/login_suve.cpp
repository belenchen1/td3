#include <vector>
#include <iostream>
using namespace std;
#include "lib/seguridad.h"

int main() {
    vector<int> codigo = {0,0,0,0,0};
    cout << "El código de seguridad es: ";
    cin >> codigo[0] >> codigo[1] >> codigo[2] >> codigo[3] >> codigo[4];
    for (int numero : login(codigo)) {
        cout << numero;
    }
    cout << endl;

    return 0;
}

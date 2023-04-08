#include <iostream>
using namespace std;

void print();

int main (int argc, char **argv) {
    print();
    return 0;
}

void print(){
    for(int i=0; i<5;i++){
        cout << "Iniciando sistema SUVE!" << endl;
    }
}
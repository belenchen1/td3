#include "sucesion_de_fibonacci.h"

int sucesion_de_fibonacci(int i) {
    if (i == 0) {
        return 0;
    } else if (i == 1) {
        return 1;
    } else {
        int anterior = 0;
        int actual = 1;
        for (int x = 2; x <= i; x++) {
            int nuevo_actual = actual + anterior;
            anterior = actual;
            actual = nuevo_actual;
        }
        return actual;
    }
}
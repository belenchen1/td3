#include "sucesion_de_fibonacci.h"

int sucesion_de_fibonacci(int i) {
    if (i==0){
        return 0;
    }else if(i==1){
        return 1;
    }else{
        return (sucesion_de_fibonacci(i-1) + sucesion_de_fibonacci(i-2));
    }
}
#include <iostream>
#include <string>
#include "funciones.h"
#include <experimental/random>
using namespace std;

const string listado_palabras_filename = "../listado.txt";

int main(){
    vector<string> listado_cargado = cargar_listado(listado_palabras_filename);
    int size = listado_cargado.size();
    int random_number = experimental::randint(0, size);
    string palabra_secreta = listado_cargado[random_number];
    string intento;
    int cant_intentos=1; // inicializo la cantidad de intentos 
    cout << "Tenes 6 intentos para adivinar la palabra oculta" << endl;
    while(cant_intentos<=6){ // recorro hasta que no hayan más intentos
        cout << "Ingresa una palabra de 5 letras: " << endl;
        cin >> intento;
        if(intento_valido(intento, palabra_secreta, listado_cargado)){
            string evaluado = (respuesta_en_string(evaluar_intento(intento, palabra_secreta)));
            cout << evaluado << endl;
            if(evaluado == "+++++"){
                cout << "¡Felicitaciones! Adivinaste la palabra oculta en " << cant_intentos << " intentos." << endl;
                exit(0);
            }else{
                if(cant_intentos!=5){
                    cout << "Te quedan " << (6 - cant_intentos) << " intentos." << endl;
                }else{
                    cout << "Te queda 1 intento." << endl;
                }
            }
            cant_intentos++;
        }else{
            cout << "La palabra no está en la lista, volvé a intentar" << endl;
        }
    }
    cout << "Te quedaste sin intentos" << endl;

    return 0;
}

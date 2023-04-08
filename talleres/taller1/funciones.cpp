#include "funciones.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <filesystem>
using namespace std;
const string listado_palabras_filename = "../listado.txt";

vector<string> cargar_listado(const string & nombre_archivo){
    //* toma el nombre de un archivo que contiene una palabra por línea y devuelve un vector de strings con todas las palabras tal como están en el archivo
    vector<string> palabras_validas; 
    ifstream infile(nombre_archivo);
    if (infile.good() == false) { // chequeo que se pueda abrir correctamente el archivo
        cout << "No se pudo abrir el archivo " << endl;
        exit (1);
    }
    string line;
    auto isEmpty = (filesystem::file_size(nombre_archivo) == 0); 
    if (isEmpty){ // chequeo si el archivo está vacío
        return palabras_validas;
    }
    while(!infile.eof()){ // Mientras no (!) de error al leer el archivo
        getline(infile, line);
        if(line != ""){ // Chequeo que la linea contenga caracteres (útil para caso archivo vacío)
            palabras_validas.push_back(line);
        }        
    }
    infile.close();
    return palabras_validas;
    }

bool intento_valido(const string & intento, const string & palabra_secreta, const vector<string> &listado){
    //* toma un intento, una palabra secreta y un listado de palabras e indica si el intento es legal o no. Un intento es legal si tiene la misma longitud que la palabra secreta y si es una palabra reconocida en el listado de palabras
    
    if(intento.size() == palabra_secreta.size()){
        for(int i=0; i<listado.size(); i++){ // recorro el listado de palabras válidas
            if(intento == listado[i]){ // me fijo si la encuentro
                return 1;
            }
        }
    }
    return 0;
}

vector<EstadoLetra> evaluar_intento(const string & intento, const string & palabra_secreta){
    //* toma un intento y una palabra secreta, y devuelve un vector con la respuesta para cada una de las letras del intento. 
    //* Una letra del intento puede estar en: LugarCorrecto si la palabra secreta tiene esa misma letra en esa posición, LugarIncorrecto si la palabra secreta contiene esa letra pero en otra posición, o NoPresente si la palabra secreta no contiene esa letra.
    vector<EstadoLetra> evaluado;
    for(int i=0; i<5; i++){ // recorro el intento
        EstadoLetra temp = EstadoLetra::NoPresente;
        if(intento[i] == palabra_secreta[i]){ // chequeo si está el mismo caracter en la misma posición
            evaluado.push_back(EstadoLetra::LugarCorrecto);
        }else{
            for(int j=0; j<5;j++){ // chequeo si la letra está en otra posición o no
                if(intento[i] == palabra_secreta[j]){ // comparo el caracter del intento con cada una de las posiciones de la palabra secreta
                    temp = EstadoLetra:: LugarIncorrecto;
                    break;
                }
            }
            evaluado.push_back(temp);
        }   
    }
    return evaluado;
}

string respuesta_en_string(const vector<EstadoLetra> & respuesta){
    //* toma el vector de EstadoLetra que devuelve evaluar_intento y devuelve un string que indica el LugarCorrecto con el caracter "+", LugarIncorrecto con "-", y NoPresente con "X".
    string evaluadoStr;
    for(int i=0; i<5; i++){
        if(respuesta[i]==(EstadoLetra::LugarCorrecto)){
            evaluadoStr.append("+");
        }else if(respuesta[i]==(EstadoLetra::LugarIncorrecto)){
            evaluadoStr.append("-");
        }else{
            evaluadoStr.append("X");
        }
    }
    return evaluadoStr;
}
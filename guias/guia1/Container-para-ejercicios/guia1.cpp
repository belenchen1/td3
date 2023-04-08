#include <iostream>
#include <vector>
using namespace std;
#include "guia1.h"

/*
// (a) Escribir un programa que tome dos números enteros por entrada estándar y que imprima si la suma de los números ingresados es positiva, negativa o cero.
void signoSuma(){
   int a;
   int b;
   cout << "Ingrese los dos numeros a sumar:" << endl;
   cin >> a >> b;
   int res = a + b;
   if(res < 0){
      cout << "El resultado de la suma es negativo" << endl;
   } else if (res > 0){
      cout << "El resultado de la suma es positivo" << endl;
   } else{
      cout << "El resultado de la suma es 0" << endl;
   }
}
(b) ¿Cuál será la salida al ejecutar el siguiente programa? ¿Qué realiza la instrucción de de la línea 6?
#include <iostream>
using namespace std;

int main(){
   int n = 5;
   bool condicion = (n == 4 || n == 5);
   if(condicion){
   cout << "verdadero" << endl;
   } else{
   cout << "falso" << endl;
*/
/* (c) Indique cuál será la salida al ejecutar el siguiente programa. ¿Por qué el comportamiento cambia para mi_entero y para mi_decimal? ¿Qué valor toma la expresión (mi_entero / 2 > 4)? ¿Y (mi_decimal / 2 > 4)?
---> Porque mi_entero es un int, entonces 9/2 es 4, mientras que mi_decimal/2 es 4.5 . Entonces toma los valores falso, verdadero.
#include <iostream>
using namespace std;
int main(){
   int mi_entero = 9;
   float mi_decimal = 9;
   if(mi_entero / 2 > 4){
   cout << "mi_entero dividido 2 es mayor a 4" << endl;
   } else {
   cout << "mi_entero dividido 2 NO es menor a 4" << endl;
   }

   if(mi_decimal / 2 > 4){
   cout << "mi_decimal dividido 2 es mayor a 4" << endl;
   } else {
   cout << "mi_decimal dividido 2 NO es menor a 4" << endl;
   }
}
*/

/* 
//? 5a
string reemplazar_vocales_por_a(string txt){
   for(int i=0; i<txt.size(); i++){
        if(esVocal(txt[i])){                       //* LOS STRINGS SON CADENAS DE CARACTERES, LOS MANIPULO COMO VECTORES
            txt[i] = 'a';
        }
    }
   return txt;
}
//? 5b
bool suman_cero(int a, int b){
   if((a+b)==0){return 1;}else{return 0;}
}
//? 5c
int maximo(int a, int b){
   if(a>b){ return a; }else{ return b; }
}
//? 5d
int cantidad_de_vocales(string texto){
   int res=0;
   for(int i=0; i<texto.size(); i++){
      if(esVocal(texto[i])){
         res++;
      }
   }
   return res;
}
//? 5e
bool esVocal(char a){
   vector<char> vocales = {'a', 'e', 'i', 'o', 'u'};
   for(int i=0; i<5; i++){
      if(a == vocales[i]){
         return 1;
      }
   }
   return 0;
} */
//! Ej6
//? a
void funcion_A(int n){
   n = 5;
}
void funcion_B(int & n){
   n = 5;
}
//? b
void encerrar_entre_parentesis(string & s){
   // tome un string por parámetro y lo modifique para que su contenido quede encerrado entre paréntesis.
   string p = "(";
   p.append(s);
   p.push_back(')');
   s = p;
}
int reemplazar_numero(vector<int> & lista, int n){
   // modifica c/ aparición de n en el vector por un 0 y devuelve la cantidad de apariciones de n en el vector original.
   int cantidad_n = 0;
   for(int i=0; i<lista.size(); i++){
      if(lista[i] == n){
         lista[i] = 0;
         cantidad_n++;
      }
   }
   return cantidad_n;
}

//! Ej7
//? a
/* void modificar_primero(const vector<int> & lista){
   lista[0] = 0; // lista esta declarado como const por lo que NO PUEDE MODIFICARSE
void modificar_primero(vector<int> & lista){
   lista[0] = 0;
}
//? b
bool es_vacio(vector<int> & lista){
   return (lista.size() == 0);
}
} */
//! Ej8
//? a
int sumatoria(const vector<int> &numeros){
   int res=0;
   for(int i=0; i<numeros.size(); i++){
      res += numeros[i];
   }
   return res;
}
//? b 
float farenheit_a_celsius(float f){
   return (f-32)/1.8;
}
//? c
void print_f2c(){
   // imprimir una tabla con la conversión de los valores Fahrenheit desde 30 a 100 en intervalos de 10
   for(int n=30; n<=100; n+=10){
      cout << farenheit_a_celsius(n) << endl;
   }
}
//? d
bool es_primo(int n){
   int res = 0;
   for(int i=1; i<=n; i++){
      if(n % i == 0){
         res++;
      }
   }
   if(res>2){
      return 0;
   }else{
      return 1;
   }
}
//? e
void primos_e1y100(){
   for(int i=1; i<=100; i++){
      if(es_primo(i)){
         cout << i << endl;
      }
   }
}
//? f
bool es_palindromo(string s){
   int i, j;
   string inverted;
   for(i=s.size()-1, j=0; i>=0; i--, j++){ //* size-1 es la ultima posicion
      inverted.push_back(s[i]); //* lo manipulo como un vector
   }
   if(inverted == s){
      return 1;
   }else{
      return 0;
   }
}
//? g
string concatenate(vector<string> v){
   // devuelve un string que resulta de concatenar todos los strings del vector
   string concat;
   for(int i=0; i<v.size(); i++){
      concat.append(v[i]);
   }
   return concat;
}

//! Ej9
int cant_rojo(vector<Color> c){
   int res = 0;
   for(int i=0; i<c.size(); i++){
      if(c[i] == Color::Rojo){
         res++;
      }
   }
   return res;
}
//? c
// Escribir un programa que utilice un tipo enumerado para almacenar un día de la semana y escribir una función que tome un día de la semana e indique si es fin de semana o no.
bool es_findesemana(Dia d){
   if(d == Dia::Viernes || d == Dia::Sabado || d == Dia::Domingo){
      return true;
   }else{
      return false;
   }
}
//! Ej11
//? a
struct usuario createNewUser(string name, string email){
   // tome por entrada los datos de un nuevo usuario, inicializando la cantidad de seguidores en cero y luego imprima todos los datos por pantalla.
   struct usuario newUser = {name, email, 0};
   return newUser;
}
//? b
int se_llevan_decada(struct persona a, struct persona b){
   int diferencia = abs(a.edad - b.edad);
   if(diferencia > 10){
      return 1;
   }else{
      return 0;
   }
}
//? d
persona persona_mas_grande(const vector<persona> & lista_de_personas){
   // devuelve la persona cuya edad es la más grande
   int mayor = 0;
   persona mas_grande;
   for(int i=0; i<lista_de_personas.size(); i++){
      if(lista_de_personas[i].edad > mayor){
         mas_grande = lista_de_personas[i];
         mayor = lista_de_personas[i].edad;
      }
   }
   return mas_grande;
}
   
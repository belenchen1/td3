#include <vector>
#include <string>
#include <iostream>

void signoSuma();
bool esVocal(char a);
string reemplazar_vocales_por_a(string txt);
bool suman_cero(int a, int b);
int maximo(int a, int b);
int cantidad_de_vocales(string texto);
void funcion_A(int n);
void funcion_B(int &n);
string encerrar_entre_parentesis(string s);
int reemplazar_numero(vector<int> & lista, int n);
// void modificar_primero(const vector<int> & lista);
void modificar_primero(vector<int> & lista);
bool es_vacio(vector<int> & lista);
int sumatoria(const vector<int> &numeros);
float farenheit_a_celsius(float f);
void print_f2c();
bool es_primo(int n);
void primos_e1y100();
bool es_palindromo(string s);
string concatenate(vector<string> v);
enum class Color {Blanco, Negro, Rojo, Verde, Azul};
int cant_rojo(vector<Color> c);
enum class Dia {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
bool es_findesemana(Dia d);
struct usuario {
   string nombre;
   string email;
   int cantidad_de_seguidores;
};
struct usuario createNewUser(string name, string email);
struct persona{
   string nombre;
   int edad;
   string dni;
};
int se_llevan_decada(struct persona a, struct persona b);
persona persona_mas_grande(const vector<persona> & lista_de_personas);
// Escribir la declaración de un tipo materia que almacene el nombre de la materia, el código de la materia, la cantidad de alumnos y el nombre de la carrera
//? 11c
struct materia{
   string materia;
   string codigo;
   int alumnos;
   string carrera;
};
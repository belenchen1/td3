#include <iostream> // A) permite la entrada y salida en consola
using namespace std; // B) te ahorra escribir "std::" para todas las cosas que vengan de la biblioteca standard
#include "guia1.h"
#include <vector>
#include <set>
#include <map>
#include <string>

int main(){
//! Ej1
/* D)
    string nombre;
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Su nombre es " << nombre << "." << endl;
}
(e) ¿Qué sucede si se ingresa un texto con espacios en el programa anterior? Ingrese por ejemplo su nombre y apellido.
No funcionaria porque los espacios indican que cambiamos de variable ingresada

(f) La función getline permite leer una línea completa de la entrada estándar
    string nombre_completo;
    cout << "Ingrese su nombre completo: ";
    getline(cin, nombre_completo);
    cout << "Su nombre es " << nombre_completo << "." << endl;
}
*/
//! Ej2
// signoSuma();
//! Ej3
/*
cout << "-------------------Ej3" << endl;
//? a
    string materia = "Algoritmos y Estructuras de Datos";
    cout << materia[0] << endl; // A
    cout << materia[5] << endl; // i
    cout << (materia.front() == 'E') << endl; // false (0)
    cout << (materia.back() == 's') << endl; // true (1)
    cout << materia.size() << endl; // 33
    cout << materia.length() << endl; // 33
    cout << materia.substr(13, 11) << endl; // Estructuras
//? b
    vector<int> mediciones = {19, 18, 22, 20, 23, 24};
    cout << mediciones[0] << endl; // 19
    cout << mediciones[3] << endl; // 20
    cout << mediciones.front() << endl; // 19
    cout << (mediciones.back() == 23) << endl; // 0
    cout << mediciones.size() << endl; // 6
*/
//! Ej4
/*
vector<int> mediciones = {19, 18, 22, 20, 23, 24};
cout << "-------------------Ej4" << endl;
//? a 
// Imprima por pantalla todos los elementos del vector mediciones.
    int i = 0;
    cout << "---while---" << endl;
    while(i<mediciones.size()){
        cout << mediciones[i] << ", ";
        i++;
    }
    cout << endl;
    cout << "---for---" << endl;
    for(int j=0; j<mediciones.size(); j++){
        cout << mediciones[j] << ", ";
    }
//? b
// Modificar el punto anterior para que imprima los valores en orden inverso al que están almacenados en la variable. La salida esperada en ese caso es 24 23 20 22 18 19.
    // - i comience en mediciones.size() - 1 y recorra el vector desde el final hacia el principio.
    for(int i=mediciones.size()-1; i!=-1; i--){
        cout << mediciones[i] << ", ";
    }
    cout << endl;
    // - i comience en 0 y aumente hasta mediciones.size().
    int s = mediciones.size();
    for(int i=0; i<s; i++){
        cout << mediciones.back() << ", ";
        mediciones.pop_back();
    }
    cout << endl;
//? c
    // devuelve la posicion en la que se encuentra la letra 'z' en el texto ingresado, si es que la tiene
    string texto;
    getline(cin, texto);
    if (texto.empty()){ return -1; }
    int pos = 0;
    string res = "La z esta en la/s posicion/es: ";
    for(int i : texto){
        if (i=='z'){
            if((res.size()) == 34){
                res.append(to_string(pos));
            }else{
                res.append(" ");
                res.append(to_string(pos));
            }
        }
        pos++;
    }
    cout << res << endl;
//?d
    // imprime por pantalla el texto ingresado reemplazando todas las letras vocales por la letra 'a'.
    string txt;
    cout << "Ingrese un texto con vocales: " << endl;
    getline(cin, txt);
       for(int i=0; i<txt.size(); i++){
        if(esVocal(txt[i])){                       
            txt[i] = 'a';
        }
    }
    cout << txt << endl;
    
//* LOS STRINGS SON CADENAS DE CARACTERES, LOS MANIPULO COMO VECTORES
*/
//! Ej6
/*
//? a
   int numero = 10;
   cout << "numero: " << numero << endl; // imprime 10
   cout << "Llamada a funcion_A(numero)." << endl;
   funcion_A(numero);
   cout << "numero: " << numero << endl; // imprime 10 (pasaje por copia!!!!)

   cout << "Llamada a funcion_B(numero)." << endl;
   funcion_B(numero);
   cout << "numero: " << numero << endl; // imprime 5 (pasaje por referencia)
//? b
    string s = "hola soy belu";
    cout << s << endl;
    encerrar_entre_parentesis(s);
    cout << "Entre parentesis: " << s << endl;
//? c
    vector<int> v = {1, 9, 2, 4, 6, 2};
    int n = 2;
    int res = reemplazar_numero(v, n);
    cout << res << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> q = {1, 9, 2, 4, 6, 2};
    int m = 8;
    int res2 = reemplazar_numero(q, m);
    cout << res2 << endl;
    for(int i=0; i<q.size(); i++){
        cout << q[i] << " ";
    }
    cout << endl;
*/
//! Ej7
/* 
//? a
    vector<int> mediciones = {19, 18, 22, 20, 23, 24};
    modificar_primero(mediciones);
    cout << mediciones[0] << endl;
//? b
    const vector<int> mediciones = {19, 18, 22, 20, 23, 24};
    bool res = es_vacio(mediciones); // NO le puedo pasar una variable constante porque toma como parametro una modificable
*/
//! Ej8
/* 
//? a
    vector<int> q = {2, 4, 5, 10};
    int sum = sumatoria(q);
    cout << sum << endl;
//? b
    float conversion = farenheit_a_celsius(20.4);
    cout << conversion << endl;
//? c
    print_f2c();
//? d
    cout << es_primo(2) << endl;
    cout << es_primo(4) << endl;
    cout << es_primo(7) << endl;
    cout << es_primo(9) << endl;
    cout << es_primo(1) << endl;
//? e
    primos_e1y100();
//? f
    cout << es_palindromo("anilina") << endl;
    cout << es_palindromo("reconocer") << endl;
    cout << es_palindromo("hola") << endl;
//? g
    vector<string> v = {"hol", "a mun", "do"};
    cout << concatenate(v) << endl;
*/
//! Ej9
/*
//? a
Color un_color = Color::Blanco; // tipo: Color; valor: Blanco
Color otro_color = Color::Rojo;
// (un_color == otro_color); // no esta definido el == para esta clase
// (un_color == Color::Blanco); // no esta definido el == para esta clase
// (Color::Blanco == Color::Azul); // no esta definido el == para esta clase
//? b
    vector<Color> c = {Color::Azul, Color::Rojo, Color::Rojo, Color::Verde, Color::Rojo};
    cout << cant_rojo(c) << endl;
//? c
    Dia d = Dia::Miercoles;
    Dia e = Dia::Sabado;
    cout << es_findesemana(d) << endl;
    cout << es_findesemana(e) << endl;
*/
//! Ej10
/*
//? a
    set<int> mi_conjunto = {6, 8, -95, 9};
    mi_conjunto.insert(6); // {6, 8, -95, 9}; --> no se repiten los elementos
    mi_conjunto.insert(7); // {6, 8, -95, 9, 7}; --> en este orden o en cualquier otro
    mi_conjunto.erase(9); // {6, 8, -95, 7}; --> en este orden o en cualquier otro
    
    cout << mi_conjunto.size() << endl; // 4
    // mi_conjunto.contains(6); // "contains" NO declarado para conjuntos 
    // mi_conjunto.contains(9); // idem

    //* C++ set find() function is used to find an element with the given value val. If it finds the element then it returns an iterator pointing to the element otherwise, it returns an iterator pointing to the end of the set i.e. set::end().
    if(mi_conjunto.find(6) != mi_conjunto.end()){ 
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
    if(mi_conjunto.find(9) != mi_conjunto.end()){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
    
    cout << mi_conjunto.empty() << endl; // 0
//? b
    map<string, int> info_personas = { {"Ada", 1800}, {"Barbara", 1939}};
    info_personas["Rebeca"] = 1926; // Agrega la clave "Rebeca" y le asigna el valor 1926
    info_personas["Ada"] = 1815; // Modifica la clave "Ada" asignandole el valor 1815

    cout << info_personas["Ada"] << endl; // 1815
    // cout << info_personas.contains("Alan") << endl; //! por qué no funciona ningun contains()??
    cout << info_personas.size() << endl; // 3
    cout << info_personas.empty() << endl; // 0
*/
//! Ej11
/* 
//? a
    string name = "beluchen";
    string email = "belendchen@icloud.com";
    struct usuario me = createNewUser(name, email);
    cout << me.nombre << endl;
    cout << me.email << endl;
    cout << me.cantidad_de_seguidores << endl;
//? b
    persona p1 = {"belen", 20, "44794400"};
    persona p2 = {"emilia", 46, "25623871"};
    persona p3 = {"tomas", 19, "45577568"};
    cout << se_llevan_decada(p1, p2) << endl;
    cout << se_llevan_decada(p1, p3) << endl;
//? c
    materia m = {"algebra", "2B", 300, "td"};
    cout << m.carrera << endl;
    cout << m.alumnos << endl;
    cout << m.codigo << endl;
    cout << m.materia << endl;
//? d
    persona p1 = {"belen", 20, "44794400"};
    persona p2 = {"emilia", 46, "25623871"};
    persona p3 = {"tomas", 19, "45577568"};
    vector<persona> pers = {p1, p2, p3};
    cout << persona_mas_grande(pers).nombre << endl;
 */

    return 0; 
}

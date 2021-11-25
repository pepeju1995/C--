#include <iostream>
#include <string>

using namespace std;

int main(){
    string *puntero1 = NULL, *puntero2 = NULL;
    string nombre, apellidos, nombreCompleto;

    cout << "Introduzca el nombre.\n";
    getline(cin, nombre);
    cout << "Introduzca los apellidos.\n";
    getline(cin, apellidos);

    puntero1 = &nombre;
    puntero2 = &apellidos;

    nombreCompleto = *puntero1 + " " + *puntero2;

    cout << nombreCompleto << endl;
}
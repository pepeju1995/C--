#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string nombre, apellidos;
    ofstream fichero;

    cout << "Introduzca el nombre: ";
    getline(cin, nombre);

    cout << "Introduzca los apellidos: ";
    getline(cin, apellidos);

    fichero.open("fichero/usuarios.txt");
    fichero << nombre << " " << apellidos << endl;
    fichero.close();

}
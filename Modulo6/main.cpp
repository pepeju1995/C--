#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Cliente{
    public:
        string nombre;
        string apellidos;
        int edad;

        Cliente(string nombre, string apellidos, int edad){
            this->nombre = nombre;
            this->apellidos = apellidos;
            this->edad = edad;
        }
};

ostream& operator << (ostream &p1, Cliente p2){
    p1 << p2.nombre << " " << p2.apellidos << " " << p2.edad << endl;
    return p1;
}

int main(){
    string nombre, apellidos;
    int edad;
    ofstream archivo;

    cout << "Introduzca el nombre del cliente: ";
    getline(cin, nombre);
    cout << "Introduzca los apellidos del cliente: ";
    getline(cin, apellidos);
    cout << "Introduzca la edad del cliente: ";
    cin >> edad;

    try{
        if(edad < 0 || edad > 100){
            throw "Error";
        }
        Cliente cliente(nombre, apellidos, edad);
        archivo.open("ficheros/clientes.txt", ios::app);
        archivo << cliente;
        archivo.close();
        cout << "Nuevo cliente creado con exito.\n";
    } catch(...){
        cout << "No ha sido posible crear el cliente.\n";
        return -1;
    }
    return 0;
}
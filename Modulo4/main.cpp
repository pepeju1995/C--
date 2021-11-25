#include <iostream>
#include <string>

using namespace std;

class Cliente{
    private:
        string nombre;
        string apellidos;
        int turno;

    public:
        Cliente(string nombre, string apellidos, int turno){
            this->nombre = nombre;
            this->apellidos = apellidos;
            this->turno = turno;
        }

        void mostrarCliente(){
            cout << "El cliente " << this->nombre << " " << this->apellidos << " tiene el turno " << this->turno << endl;
        }

        ~Cliente(){
            cout << "Cliente destruido\n";
        }
};

class Empleado{
    private:
        string nombre;
        string apellidos;
        string categoria;

    public:
        Empleado(string nombre, string apellidos, string categoria){
            this->nombre = nombre;
            this->apellidos = apellidos;
            this->categoria = categoria;
        }

        void mostrarEmpleado(){
            cout << "El empleado " << this->nombre << " " << this->apellidos << " dara clases de " << this->categoria << endl;
        }

        ~Empleado(){
            cout << "Empleado destruido\n";
        }
};

int registro(){
    int entidad;
    cout << "Que entidad eres?\nPulse 1 para Cliente\nPulse 2 para Empleado\n";
    cin >> entidad;
    return entidad;
}

int main(){
    string nombre, apellidos;
    int tipoRegistro;

    tipoRegistro = registro();
    
    while(tipoRegistro != 1 && tipoRegistro != 2){
        cout << "Registro no valido\n";
        tipoRegistro = registro();
    }

    cout << "Introduzca el nombre\n";
    cin.ignore();
    getline(cin, nombre);
    cout << "Introduzca los apellidos\n";
    getline(cin, apellidos);

    if(tipoRegistro == 1){
        int turno;
        cout << "Introduzca el turno\n";
        cin >> turno;
        Cliente cliente(nombre, apellidos, turno);
        cliente.mostrarCliente();
    } else {
        string categoria;
        cout << "Introduzca la categoria\n";
        getline(cin, categoria);
        Empleado empleado(nombre, apellidos, categoria);
        empleado.mostrarEmpleado();
    }

    cin.get();
    return 0;
}
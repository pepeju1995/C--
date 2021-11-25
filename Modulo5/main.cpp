#include <iostream>
#include <string>

using namespace std;

class Persona{
    private:
        string nombre;
        string apellidos;
    
    public:
        Persona(string nombre, string apellidos){
            this->nombre = nombre;
            this->apellidos = apellidos;
        }

        void imprimirPersona(){
            cout << this->nombre << " " << this->apellidos << endl;
        }
};

class Empleado: public Persona{
    private:
        string categoria;
    
    public:
        Empleado(string nombre, string apellidos): Persona(nombre, apellidos){}

        void setCategoria(string categoria){
            this->categoria = categoria;
        }

        void imprimirEmpleado(){
            this->imprimirPersona();
            cout << "Puesto: " << this->categoria << endl;
        }
};

class Paciente: public Persona{
    private:
        string aseguradora;
    
    public:
        Paciente(string nombre, string apellidos): Persona(nombre, apellidos){}

        void setAseguradora(string aseguradora){
            this->aseguradora = aseguradora;
        }

        void imprimirPaciente(){
            this->imprimirPersona();
            cout << "Aseguradora: " << this->aseguradora << endl;
        }
};

void generarEmpleado(string categoria, Empleado *empleado){
    empleado->setCategoria(categoria);
    empleado->imprimirEmpleado();
}

void generarPaciente(string aseguradora, Paciente *paciente){
    paciente->setAseguradora(aseguradora);
    paciente->imprimirPaciente();
}

int main(){
    int tipoRegistro;
    string nombre, apellidos;

    cout << "Que tipo de registro desea almacenar?\n"
        << "Pulse 1 para Empleado\nPulse 2 para Paciente\n";
    cin >> tipoRegistro;

    cout << "Introduzca el nombre\n";
    cin.ignore();
    getline(cin, nombre);

    cout << "Introduzca el apellido\n";
    getline(cin, apellidos);

    if(tipoRegistro == 1){
        string categoria;
        cout << "Introduzca la categoria del empleado\n";
        getline(cin, categoria);
        Empleado empleado(nombre, apellidos);
        generarEmpleado(categoria, &empleado);
    } else if(tipoRegistro == 2){
        string aseguradora;
        cout << "Introduzca la aseguradora del paciente\n";
        getline(cin, aseguradora);
        Paciente paciente(nombre, apellidos);
        generarPaciente(aseguradora, &paciente);
    }
    cin.get();
    return 0;
}
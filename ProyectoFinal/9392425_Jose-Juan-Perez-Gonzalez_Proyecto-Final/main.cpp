#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

///////////////////////////////////////
////            CLASE             ////
////         DATO MAESTRO         ////
//////////////////////////////////////
class DatoMaestro{ 
    protected:
        string nombre;
        string apellidos;
        string dni;
        string fechaNacimiento;
        string domicilio;
        string localidad;
        string codigoPostal;
        string telefono;
    
    public:
        DatoMaestro(vector<string> datos){
            this->nombre = datos[0];
            this->apellidos = datos[1];
            this->dni = datos[2];
            this->fechaNacimiento = datos[3];
            this->domicilio = datos[4];
            this->localidad = datos[5];
            this->codigoPostal = datos[6];
            this->telefono = datos[7];
        }

        string getNombre(){
            return nombre;
        }

        string getApellidos(){
            return apellidos;
        }

        string getDni(){
            return dni;
        }

        string getFecha(){
            return fechaNacimiento;
        }

        string getDomicilio(){
            return domicilio;
        }

        string getLocalidad(){
            return localidad;
        }

        string getCodigoPostal(){
            return codigoPostal;
        }

        string getTelefono(){
            return telefono;
        }
};

///////////////////////////////////////
////            CLASE             ////
////          EMPLEADO            ////
//////////////////////////////////////
class Empleado: public DatoMaestro{
    private:
        string departamento;
        string catProfesional;

    public:
        Empleado(vector<string> datos): DatoMaestro(datos){
                    this->departamento = datos[8];
                    this->catProfesional = datos[9];
        }

        string getDepartamento(){
            return departamento;
        }

        string getCatProfesional(){
            return catProfesional;
        }
};

///////////////////////////////////////
////            CLASE             ////
////          PACIENTE            ////
//////////////////////////////////////
class Paciente: public DatoMaestro{
    public:        
        Paciente(vector<string> datos): DatoMaestro(datos){}
};


//Sobrecarga de operador << para los objetos Empleado
ostream& operator << (ostream &p1, Empleado p2){
    p1 << "\nEmpleado con DNI/NIE: " << p2.getDni() << "\nNombre y apellidos: " 
        << p2.getNombre() + " " + p2.getApellidos() << "\nFecha de nacimiento: "
        << p2.getFecha() << "\nDomicilio: " << p2.getDomicilio() << "\nC.P.: "
        << p2.getCodigoPostal() << " Localidad: " << p2.getLocalidad()
        << "\nTelefono: " << p2.getTelefono() << "\nDepartamento: "
        << p2.getDepartamento() << "\nCategoria Profesional: " << p2.getCatProfesional();
    p1 << "\n_____________________________________________________________";
    return p1;
}


//Sobrecarga de operador << para los objetos Paciente
ostream& operator << (ostream &p1, Paciente p2){
    p1 << "\nPaciente con DNI/NIE: " << p2.getDni() << "\nNombre y apellidos: " 
        << p2.getNombre() + " " + p2.getApellidos() << "\nFecha de nacimiento: "
        << p2.getFecha() << "\nDomicilio: " << p2.getDomicilio() << "\nC.P.: "
        << p2.getCodigoPostal() << " Localidad: " << p2.getLocalidad()
        << "\nTelefono: " << p2.getTelefono();
    p1 << "\n_____________________________________________________________";
    return p1;
}

//Metodo para la introduccion de los datos comunes a Empleado y Paciente
vector<string> nuevosDatos(string entidad, vector<string> &datos){
    string nombre, apellidos, dni, fecha, domicilio, localidad, cp, telf;

    cout << "Introduzca el nombre del " << entidad << endl;
    getline(cin, nombre);
    datos.push_back(nombre);

    cout << "Introduzca los apellidos del " << entidad << endl;
    getline(cin, apellidos);
    datos.push_back(apellidos);

    cout << "Introduzca el DNI o NIE del " << entidad << endl;
    getline(cin, dni);
    datos.push_back(dni);

    cout << "Introduzca la fecha de nacimiento del " << entidad
        << " (en formato dd/mm/aaaa)" << endl;
    getline(cin, fecha);
    datos.push_back(fecha);

    cout << "Introduzca el domicilio del " << entidad << endl;
    getline(cin, domicilio);
    datos.push_back(domicilio);

    cout << "Introduzca la localidad del " << entidad << endl;
    getline(cin, localidad);
    datos.push_back(localidad);

    cout << "Introduzca el codigo postal del " << entidad << endl;
    getline(cin, cp);
    datos.push_back(cp);

    cout << "Introduzca el numero de telefono del " << entidad << endl;
    getline(cin, telf);
    datos.push_back(telf);
    
    return datos;
}


//Metodo principal
int main(){
    int eleccion;
    vector<string> datos;
    ofstream salida;

    cout << "Bienvenido a Clinica Radiologica Aranguren.\n"
        << "Pulse 1 para agregar un nuevo paciente\n"
        << "Pulse 2 para agregar un nuevo empleado\n";
    cin >> eleccion;
    cin.ignore();

    if(eleccion == 1){
        nuevosDatos("paciente", datos);
        Paciente nuevoPaciente(datos);
        salida.open("archivos/pacientes.txt", ios::app);
        salida << nuevoPaciente;
        salida.close();
        cout << "El paciente ha sido registrado correctamente.\n";
    } else {    
        string departamento, catProfesional;
        cout << "Introduzca el departamento del empleado\n";
        getline(cin, departamento);
        nuevosDatos("empleado", datos);
        cout << "Introduzca la categoria profesional del empleado\n";
        getline(cin, catProfesional);
        datos.push_back(departamento);
        datos.push_back(catProfesional);
        
        Empleado nuevoEmpleado(datos);
        salida.open("archivos/empleados.txt", ios::app);
        salida << nuevoEmpleado;
        salida.close();
        cout << "El empleado ha sido registrado correctamente.\n";
    }
    return 0;
}
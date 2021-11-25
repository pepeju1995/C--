#include <iostream>

using namespace std;

int main(){
    struct Alumno
    {
        string nombre;
        string apellidos;
        string dni;
        double calificacion;
    };
    Alumno alumnos[4];
    string dniSolicitado;
    bool encontrado = false;
    
    alumnos[0].nombre = "Juan";
    alumnos[0].apellidos = "Lopez";
    alumnos[0].dni = "12345678A", 
    alumnos[1].nombre = "Laura";
    alumnos[1].apellidos = "Perez";
    alumnos[1].dni = "12345678B",
    alumnos[2].nombre = "Carlos";
    alumnos[2].apellidos = "Lopez";
    alumnos[2].dni = "12345678C",
    alumnos[3].nombre = "Maria";
    alumnos[3].apellidos = "Gutierrez";
    alumnos[3].dni = "12345678D";

    cout << "Introduzca el DNI del alumno.\n";
    cin >> dniSolicitado;

    for(int i = 0; i < 3; i++){
        if(alumnos[i].dni == dniSolicitado){
            encontrado = true;
            cout << "Introduzca la calificacion del alumno " << alumnos[i].nombre <<
                " " << alumnos[i].apellidos << ".\n";
            cin >> alumnos[i].calificacion;
            cout << "El alumno " << alumnos[i].nombre <<
                " " << alumnos[i].apellidos << "\nha obtenido un " << alumnos[i].calificacion << ".\n";
            break;
        }
    }

    if(!encontrado){
        cout << "No hay ningun alumno con el DNI " << dniSolicitado << endl;  
    }

}
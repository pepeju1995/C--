#include <iostream>

using namespace std;

namespace Autenticacion{
    string email, clave = "Hola", claveIntroducida;

    void comprobarClave(string clave1, string clave2){
        if(clave1.compare(clave2) == 0){
            cout << "Bienvenido "<< email << ".\n";
        } else {
            cout << "Clave incorrecta.\n";
        }
    }
}

int main(){
    cout << "Introduzca su email.\n";
    cin >> Autenticacion::email;
    cout << "Introduzca su clave.\n";
    cin>> Autenticacion::claveIntroducida;

    Autenticacion::comprobarClave(Autenticacion::clave, Autenticacion::claveIntroducida);
}
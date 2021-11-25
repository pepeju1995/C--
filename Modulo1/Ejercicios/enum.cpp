#include <iostream>

using namespace std;

int main(){
    enum diaSemana {
        Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo
    };
    
    diaSemana dia = Miercoles;
    cout << dia << "\n";
    cin.get();
    return 0;
}
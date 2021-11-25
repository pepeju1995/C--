#include <iostream>

using namespace std;

int mostrarOpciones(string lista[], int longitud){
    int eleccion;
    cout << "Seleccione un videojuego.\n";
    for(int i = 0; i < longitud; i++){
        cout << i + 1 << ". " << lista[i] << ".\n";
    }
    cin >> eleccion;
    return eleccion;
}

void mensaje(int edad, int eleccion, string lista[]){
    if(edad < 18 && (eleccion == 1 || eleccion == 4)){
        cout << "No tienes la edad necesaria para jugar a " << lista[eleccion - 1] << ".\n";
    } else {
        cout << "Bienvenido, estamos cargando " << lista[eleccion - 1] << " en el sistema.\n";
    }
}

int main(){
    int edad, eleccion;
    string videojuegos[] = {
        "DOOM",
        "Mario kart",
        "Pokemon",
        "World of Warcraft"
    };

    cout << "Introduzca su edad.\n";
    cin >> edad;

    eleccion = mostrarOpciones(videojuegos, 4);

    mensaje(edad, eleccion, videojuegos);
    
    cin.get();
    return 0;
}
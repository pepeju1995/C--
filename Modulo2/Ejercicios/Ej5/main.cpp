#include <iostream>

using namespace std;

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

    cout << "Seleccione un videojuego.\n";
    for(int i = 0; i < 4; i++){
        cout << i + 1 << ". " << videojuegos[i] << ".\n";
    }
    cin >> eleccion;

    if(edad < 18 && (eleccion == 1 || eleccion == 4)){
        cout << "No tienes la edad necesaria para jugar a " << videojuegos[eleccion - 1] << ".\n";
    } else {
        cout << "Bienvenido, estamos cargando " << videojuegos[eleccion - 1] << " en el sistema.\n";
    }
    
    cin.get();
    return 0;
}
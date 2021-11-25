#include <iostream>

using namespace std;

int main(){
    double nota;

    cout << "Introduzca la nota del examen.(0-10)\n";
    cin >> nota;

    if(nota <= 10 && nota >= 0){
        if(nota >= 9){
            cout << "Ha obtenido un Sobresaliente.\n";
        } else if (nota >= 7){
            cout << "Ha obtenido un Notable.\n";
        } else if (nota >= 6){
            cout << "Ha obtenido un Bien.\n";
        } else if (nota >= 5){
            cout << "Ha obtenido un Suficiente.\n";
        } else{
            cout << "Ha obtenido un Suspenso.\n";
        }
    } else {
        cout << "La nota introducida no esta en el rango establecido.\n";
    }
    cin.get();
    return 0;
}
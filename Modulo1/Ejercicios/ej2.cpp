#include <iostream>
using namespace std;

int main() {
    short int enteroCorto = 1;
    int entero = 1500;
    long long int enteroLargo = 69834905879834;
    char caracter = 'a';
    float comaFlotante = 2.3;
    double comaFlotanteDoblePrecision = 4.35;
    long double comaFlotanteLargo = 3.4566234425352;
    bool comprobacion = false;

    cout << "Entero corto: " << enteroCorto << "\n";
    cout << "Entero: " << entero << "\n";
    cout << "Entero largo: " << enteroLargo << "\n";
    cout << "Caracter: " << caracter << "\n";
    cout << "Coma flotante: " << comaFlotante << "\n";
    cout << "Coma flotante doble precision: " << comaFlotanteDoblePrecision << "\n";
    cout << "Coma flotante largo:" << comaFlotanteLargo << "\n";
    cout << "Comprobacion:" << comprobacion << "\n";

    cin.get();
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    string nombre;
    string apellidos;
    cout << "Introduzca su nombre: ";
    cin >> nombre;
    cout <<"\nIntroduzca sus apellidos:";
    cin >> apellidos;

    cout << "Bienvenido " << nombre << " " << apellidos;
    cin.get();
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(){
    string direccion;
    double largo;
    double ancho;
    double superficie;

    cout << "Intoduzca la dirección de la parcela.\n";
    getline(cin, direccion);
    cout<< "Introduzca el largo promedio en mts.\n";
    cin >> largo;
    cout << "Introduzca el ancho promedio en mts.\n" ;
    cin >> ancho;

    superficie = largo * ancho;

    cout << "La parcela situada en " << direccion << "\ntiene una superficie promedio de "<< superficie << " m2.\n";

}
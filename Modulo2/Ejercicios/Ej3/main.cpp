#include <iostream>

using namespace std;

int main(){
    int edad;

    cout << "Introduzca la edad. (De 7 a 16)\n";
    cin >> edad;

    switch (edad){
    case 7:
        cout << "Pertenece a 1 de primaria.\n";
        break;

    case 8:
        cout << "Pertenece a 2 de primaria.\n";
        break;

    case 9:
        cout << "Pertenece a 3 de primaria.\n";
        break;

    case 10:
        cout << "Pertenece a 4 de primaria.\n";
        break;

    case 11:
        cout << "Pertenece a 5 de primaria.\n";
        break;

    case 12:
        cout << "Pertenece a 6 de primaria.\n";
        break;

    case 13:
        cout << "Pertenece a 1 de ESO.\n";
        break;
    
    case 14:
        cout << "Pertenece a 2 de ESO.\n";
        break;

    case 15:
        cout << "Pertenece a 3 de ESO.\n";
        break;

    case 16:
        cout << "Pertenece a 4 de ESO.\n";
        break;

    default:
        cout << "La edad introducida no esta entre los valores indicados.\n";
        break;
    }

    cin.get();
    return 0;
}
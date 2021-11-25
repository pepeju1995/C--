#include <iostream>

using namespace std;

int main(){
    int numero, numeroSecreto, intentos = 3;
    bool acertado = false;

    cout << "Introduzca el numero secreto. (Entre 0-10)\n";
    cin >> numeroSecreto;

    do{
        cout << "Introduzca respuesta.\n";
        cin >> numero;
        intentos --;
        if(numero == numeroSecreto){
            cout << "Has acertado, el numero secreto es " << numeroSecreto << endl;
            acertado = true;
        } else if(intentos == 0) {
            cout << "Incorrecto, se acabaron los intentos.\n";
        } else {
            if(numero > numeroSecreto){
                cout << "El numero secreto es menor. (" << intentos << " restantes).\n";
            } else{
                cout << "El numero secreto es mayor. (" << intentos << " restantes).\n";
            }            
        }
    }while(intentos > 0 && !acertado);

    cin.get();
    return 0;
}
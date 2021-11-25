#include <iostream>

using namespace std;

int main(){
    int clave;

    for(int i = 0; i < 5; i++){
        cout << "Introduzca la clave.\n";
        cin >> clave;

        if(clave == 1995){
            cout << "Bienvenido al sistema.\n";
            break;
        } else if(i == 4) {
            cout << "No ha sido posible entrar al sistema.\n";
        } else{
            cout << "Intento fallido, le quedan " << 4 - i << " intentos.\n";
        }
    }

    cin.get();
    return 0;    
}
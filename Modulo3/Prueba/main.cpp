#include <iostream>

using namespace std;

int main(){
    int numClientes, numCampos;
    string **clientes;
    string *campos;

    cout << "Cuantos clientes desea almacenar?\n";
    cin >> numClientes;
    cout << "Cuantos campos tiene cada cliente?\n";
    cin >> numCampos;

    campos = new string[numCampos];
    for(int i = 0; i < numCampos; i++){
        cout << "Introduzca el nombre del campo " << i + 1 << endl;
        cin >> campos[i];
    }

    for(int i = 0; i < numClientes; i++){
        clientes[i] = new string[numCampos];
        for(int j = 0; j < numCampos; j++){
            cout << "Introduzca " << campos[j] << " para el cliente " << i + 1 << endl;
            cin >> clientes[i][j];
        }
    }

    for(int i = 0; i < numClientes; i++){
        delete [] clientes[i];
    }
    delete []campos;

    cin.get();
    return 0;
}

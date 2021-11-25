#include <iostream>

using namespace std;

class Cliente{
    private:
        string nombre;
        string apellidos;
        

    public:
        Cliente(string nombre, string apellidos){
            this->nombre = nombre;
            this->apellidos = apellidos;
        }

        void mostrarCliente(){
            cout << this->nombre << " " << this->apellidos << " va a clase con el monitor " << monitor << endl;
        }

        static string monitor;
};

string Cliente::monitor = "Carlos";

int main(){
    Cliente cliente1("Jose", "Perez"), cliente2("Juan", "Gonzalez"), cliente3("Laura", "Rodriguez");

    cliente1.mostrarCliente();
    cliente2.mostrarCliente();
    cliente3.mostrarCliente();

    cin.get();
    return 0;    
}
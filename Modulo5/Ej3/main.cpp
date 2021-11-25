#include <iostream>

using namespace std;

class Vehiculo{
    private:
        string marca;
        string modelo;

    public:
        Vehiculo(string marca, string modelo){
            this->marca = marca;
            this->modelo = modelo;
        }
        
        void imprimirVehiculo(){
            cout << this->marca << " " << this->modelo << endl;
        }
};

void queCocheConduce(string nombre, string apellidos, Vehiculo coche){
    cout << nombre << " " << apellidos << " conduce un ";
    coche.imprimirVehiculo();
}

int main(){
    Vehiculo coche("Audi", "A3");

    queCocheConduce("Jose Juan", "Perez Gonzalez", coche);
}


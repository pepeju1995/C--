#include <iostream>

using namespace std;

class Vehiculo{
    public:
        string marca;
        string color;
        int velocidad;

        void aceleracion(){
            velocidad += 10;
            cout << "Marca: " << this->marca << ". Color: " << this->color << ". Velocidad: " << this->velocidad << ".\n";
        }

};

int main(){
    Vehiculo coche1;
    coche1.marca = "Mercedes";
    coche1.color = "Blanco";
    coche1.velocidad = 0;

    for(int i = 0; i < 10; i++){
        coche1.aceleracion();
    }

    cin.get();
    return 0;
}
#include <iostream>
using namespace std;

class Factura{
    public:
        string cliente;
        double baseImponible;

        Factura(string cliente, double baseImponible){
            this->cliente = cliente;
            this->baseImponible = baseImponible;
        }
};

ostream& operator << (ostream &p1, Factura p2){
    p1 << p2.cliente << " Total factura: " << p2.baseImponible + (p2.baseImponible * 0.21);
    return p1;
}

int main(){
    Factura cliente("Jose Juan Perez", 123.45);

    cout << cliente << endl;

    return 0;
}
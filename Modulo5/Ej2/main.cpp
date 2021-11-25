#include <iostream>

using namespace std;

class Factura{
    protected:
        double baseImponible;
        double importe;

    public:
        Factura(double baseImponible){
            this->baseImponible = baseImponible;
        }

        virtual void setImporte(double iva) = 0;

        void printImporte(){
            cout << "Base imponible: " << this->baseImponible <<
                " Importe: " << this->importe << endl;
        }
};

class FraClienteExterno: public Factura{
    public:
        FraClienteExterno(double baseImponible): Factura(baseImponible){}

        void setImporte(double iva){
            this->importe = this->baseImponible + (this->baseImponible*(iva/100));
        }
};

int main(){
    FraClienteExterno *cliExterno = new FraClienteExterno(1);

    cliExterno->setImporte(21);
    cliExterno->printImporte();
}
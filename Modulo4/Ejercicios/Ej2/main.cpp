#include <iostream>

using namespace std;

class Videojuego{
    private:
        string titulo;
        string categoria;
        double precio;

    public:
        Videojuego(string titulo, string categoria, double precio){
            this->titulo = titulo;
            this->categoria = categoria;
            this->precio = precio;
        }

        string getTitulo(){
            return this->titulo;
        }

        string getCategoria(){
            return this->categoria;
        }

        double getPrecio(){
            return this->precio;
        }
};


int main(){
    Videojuego videojuego1("Doom", "3pa", 23.95);
    Videojuego videojuego2("Mario Kart", "Infantil", 35.95);

    cout << "Videojuego: " << videojuego1.getTitulo() << ". Categoria: " 
        << videojuego1.getCategoria() << ". Precio: " << videojuego1.getPrecio() << "€\n";
    cout << "Videojuego: " << videojuego2.getTitulo() << ". Categoria: " 
        << videojuego2.getCategoria() << ". Precio: " << videojuego2.getPrecio() << "€\n";

    cin.get();
    return 0;
}
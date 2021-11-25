#include <iostream>
#include <string>

using namespace std;

int main(){
    struct Peliculas{
        string titulo;
        string autor;
    };
    Peliculas favoritas[3];

    for(int i = 0; i < 3; i++){
        cout << "Introduzca el nombre de la pelicula.\n";
        getline(cin, favoritas[i].titulo);
        cout << "Introduzca el autor de la pelicula.\n";
        getline(cin, favoritas[i].autor);
    }

    for(int i = 0; i < 3; i++){
        cout << i + 1 << ". " << favoritas[i].titulo << " dirigida por " << favoritas[i].autor << ".\n";
    }

    cin.get();
    return 0;
}
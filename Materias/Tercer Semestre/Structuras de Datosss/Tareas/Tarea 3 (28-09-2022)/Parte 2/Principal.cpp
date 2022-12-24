#include <iostream>
#include <string>
#include "ListaDoble.h"
using namespace std;
int main(){
    ListaDoble ld;
    string nombre;
    cout << "Pon tu nombre" << endl;
    getline(cin, nombre);
    for(int i = 0; i < nombre.length(); i++){
        ld.insertarXCola(nombre[i]);
    }
    cout << "Mostrar tu nombre tal cual lo mandas por consolas" << endl;
    ld.visualizarPorDelante();
    cout << endl;
    cout << "Mostrar tu nombre de forma inversa" << endl;
    ld.visualizarPorDetras();
    return 0;
}
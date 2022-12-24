#include <iostream>
#include "ArbolBinarioDeBusqueda.h"
using namespace std;
int main(){
    ArbolBinarioDeBusqueda abb;
    abb.insertar(25);
    abb.insertar(1);
    abb.insertar(3);
    abb.insertar(9);
    abb.insertar(56);
    abb.insertar(87);
    abb.insertar(4);
    abb.insertar(85);
    abb.insertar(96);
    abb.insertar(7);
    abb.insertar(2);
    cout << "El elemento de mayor valor es: " << endl;
    cout << abb.mayorValor() << endl;
    return 0;
}
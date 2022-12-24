#include <iostream>
#include "ArbolBinarioDeBusqueda.h"
using namespace std;
int main(){
    ArbolBinarioDeBusqueda abb;
    abb.insertar(40);
    abb.insertar(20);
    abb.insertar(60);
    abb.insertar(10);
    abb.insertar(30);
    abb.insertar(50);
    abb.insertar(70);
    abb.insertar(45);
    abb.insertar(55);
    abb.insertar(54);
    abb.enorden();
    cout << endl;
    abb.eliminarNodo(55);
    abb.enorden();
    cout << endl;
    abb.eliminarNodo(54);
    abb.enorden();
    cout << endl;
    abb.eliminarNodo(60);
    abb.enorden();
    cout << endl;



    /*
    abb.insertar(4);
    abb.insertar(42);
    abb.insertar(77);
    abb.insertar(46);
    abb.insertar(932);
    abb.insertar(54);
    abb.insertar(87);
    abb.insertar(1);
    abb.insertar(33);
    abb.enorden();
    NodoArbol *datoBuscar;
    datoBuscar = abb.buscarDato(4);
    cout << datoBuscar -> getDato() << endl;

    cout << endl;
    cout << abb.numeroNodos() << endl;
    */
    return 0;
}
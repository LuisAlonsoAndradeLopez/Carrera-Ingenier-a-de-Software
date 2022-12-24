#include <iostream>
#include "ArbolBinarioDeBusqueda.h"
using namespace std;
int main(){
    ArbolBinarioDeBusqueda abb;
    
    abb.insertar(40);
    abb.enorden();
    abb.eliminarNodo(40);
    abb.enorden();

    /*
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

    cout << "Mostrar el arbol enorden" << endl;
    abb.enorden();
    cout << endl;

    cout << "Mostrar el arbol enorden eliminando el nodo con dato 54" << endl;
    abb.eliminarNodo(54);
    abb.enorden();
    cout << endl;

    cout << "Mostrar el arbol enorden eliminando el nodo con dato 55" << endl;
    abb.eliminarNodo(55);
    abb.enorden();
    cout << endl;

    cout << "Mostrar el arbol enorden eliminando el nodo con dato 60" << endl;
    abb.eliminarNodo(60);
    abb.enorden();
    cout << endl;*/

    return 0;
}
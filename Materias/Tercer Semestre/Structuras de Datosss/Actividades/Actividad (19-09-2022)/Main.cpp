//Programa que pone nodos en la lista de izquierda a derecha en lugar de derecha a izquierda como normalmente

#include <iostream>
#include "Lista.h"

using namespace std;

int main(){
    Lista L;
    Nodo *nodo = new Nodo(34);
    Nodo *nodo2 = new Nodo(49);
    L.crearLista();
    L.insertarCabezaLista(3);
    L.insertarNodo(nodo, 3);
    L.insertarNodo(nodo2, 5);
    L.visualizar();
    cout << endl;
    //L.ultimo();
    L.insertarUltimo(45);
    cout << endl;
    L.visualizar();
    /*
    L.eliminarNodo(5);
    L.visualizar();
    */

    return 0;
}
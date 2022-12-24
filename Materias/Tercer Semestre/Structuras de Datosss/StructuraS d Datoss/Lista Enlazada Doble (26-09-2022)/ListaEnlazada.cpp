//Crear una lista enlazada y mostrarla1


#include <iostream>
#include "NodoDoble.h"
#include "ListaDoble.h"

using namespace std;

int main(){
    ListaDoble L;
    L.insertarXCabeza(10);
    L.insertarXCabeza(8);
    L.insertarXCabeza(25);
    L.insertarXCabeza(35);
    L.visualizarPorDelante();
    cout << endl;

    L.insertarNodo(56, 2);
    L.visualizarPorDelante();
    return 0;
}

/*
Dato extra: Que pasa cuando tenemos esto: int **x?

pues es que está apuntando a la direccion de un puntero y a lo que apunta un puntero

ej 

int z;
int *y
int **x;

y = &z;
x = &y;

*/
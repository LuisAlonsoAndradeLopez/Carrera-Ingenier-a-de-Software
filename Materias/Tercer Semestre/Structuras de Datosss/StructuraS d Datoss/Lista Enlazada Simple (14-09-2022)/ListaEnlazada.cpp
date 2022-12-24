//Crear una lista enlazada y mostrarla

#include <iostream>
#include "Nodo.h"
#include "Lista.h"

using namespace std;

int main(){
    Lista L;
    L.crearLista();
    L.insertarCabezaLista(5);
    L.visualizar();
    return 0;
}
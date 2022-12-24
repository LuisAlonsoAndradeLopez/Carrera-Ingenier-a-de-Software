#include <iostream>
#include "ArbolBinarioDeBusqueda.h"
using namespace std;
int main(){
    ArbolBinarioDeBusqueda abb;
    abb.insertar("Ambrosio", 78);
    abb.insertar("Roberto", 18);
    abb.insertar("Victor", 24);
    abb.insertar("Rene", 26);
    abb.insertar("Miguel", 25);

    abb.mostrarMayoresDe25();
    return 0;
}
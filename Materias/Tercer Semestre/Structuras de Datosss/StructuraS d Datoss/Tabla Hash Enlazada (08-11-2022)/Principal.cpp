#include "TablaHashEnlazada.h"

int main(){
    TablaHashEnlazada the;
    Diccionario d1, d2, d3;
    d1.clave = 7;
    d1.dato = "D1";
    d2.clave = 12;
    d2.dato = "D2";
    d3.clave = 17;
    d3.dato = "D3";

    the.insertar(d1);
    the.insertar(d2);
    the.insertar(d3);

    the.mostrar(7);
    return 0;
}
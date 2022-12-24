#include <iostream>
#include "ListaCircular.h"
using namespace std;
int main(){
    ListaCircular l;
    l.insertarNodo(4);
    l.insertarNodo(5);
    l.insertarNodo(6);
    l.insertarNodo(7);
    l.mostrar();
    return 0;
}
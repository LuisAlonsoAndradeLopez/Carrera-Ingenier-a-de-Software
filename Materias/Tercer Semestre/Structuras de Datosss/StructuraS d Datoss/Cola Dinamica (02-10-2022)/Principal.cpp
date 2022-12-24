#include <iostream>
#include "ColaDinamica.h"
using namespace std;
typedef int Dato;
int main(){
    ColaDinamica cd;
    cd.insertarNodo(1);
    cd.insertarNodo(2);
    cd.insertarNodo(3);
    cd.insertarNodo(4);
    cd.insertarNodo(5);
    cd.mostrarCola();
    cout << endl;
    cd.eliminarNodo();
    cd.mostrarCola();
    return 0;
}
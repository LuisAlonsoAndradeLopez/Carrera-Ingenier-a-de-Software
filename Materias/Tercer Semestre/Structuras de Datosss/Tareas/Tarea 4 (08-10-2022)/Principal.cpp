#include <iostream>
#include "ColaDinamica.h"
using namespace std;
typedef int Dato;
int main(){
    ColaDinamica cd;
    cd.insertarNodo(34);
    cd.insertarNodo(98);
    cd.insertarNodo(29);
    cd.insertarNodo(52);
    cd.insertarNodo(88);
    cd.mostrarCola();
    cout << endl;
    cd.ordenarDatos();
    cout << endl;

    cout << "Cola Final: " << endl;
    cd.mostrarCola();
    return 0;
}
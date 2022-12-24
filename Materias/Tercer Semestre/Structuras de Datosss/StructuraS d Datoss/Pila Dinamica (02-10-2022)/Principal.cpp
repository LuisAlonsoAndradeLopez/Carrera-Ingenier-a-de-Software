#include <iostream>
#include "PilaDinamica.h"
using namespace std;
int main(){
    PilaDinamica pd;
    pd.insertarNodo(4);
    pd.insertarNodo(8);
    pd.insertarNodo(12);
    pd.insertarNodo(16);
    pd.insertarNodo(20);
    pd.insertarNodo(24);
    pd.mostrarCola();
    pd.eliminarNodo();
    cout << endl;
    pd.mostrarCola();
    return 0;
}
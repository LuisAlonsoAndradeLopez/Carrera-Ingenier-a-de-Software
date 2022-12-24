#include <iostream>
#include "ColaCircular.h"
using namespace std;
int main(){
    ColaCircular cc;
    cc.mostrar();
    cout << endl;

    cc.insertar(1);
    cc.mostrar();
    cout << endl;

    cc.insertar(1);
    cc.insertar(1);
    cc.insertar(1);
    cc.insertar(1);
    cc.insertar(1);
    cc.mostrar();
    cout << endl;

    cc.quitar();
    cc.mostrar();
    cout << endl;

    cc.quitar();
    cc.mostrar();
    cout << endl;

    cc.insertar(1);
    cc.mostrar();
    cout << endl;

    cc.quitar();
    cc.quitar();
    cc.quitar();
    cc.quitar();
    cc.quitar();
    cc.mostrar();
    cout << endl;
    return 0;
}
#include "TablaHash.h"

int main(){
    TablaHash th;
    Diccionario d1, d2, d3, d4, d5, d6, d7, d8;
    d1.clave = 29;
    d2.clave = 41;
    d3.clave = 22;
    d4.clave = 31;
    d5.clave = 50;
    d6.clave = 19;
    d7.clave = 42;
    d8.clave = 38;

    cout << "Clave para la multiplicacion: 0.61825" << endl;

    cout << "Clave: " << d1.clave << ", "
         << "Modular: " << th.hashModular(d1.clave) << ", "
         << "Plegamiento: " << th.hashPlegamiento(d1.clave) << ", "
         << "Multiplicacion: " << th.hashMultiplicacion(d1.clave)
         << endl;

    cout << "Clave: " << d2.clave << ", "
         << "Modular: " << th.hashModular(d2.clave) << ", "
         << "Plegamiento: " << th.hashPlegamiento(d2.clave) << ", "
         << "Multiplicacion: " << th.hashMultiplicacion(d2.clave)
         << endl;
    
    cout << "Clave: " << d3.clave << ", "
         << "Modular: " << th.hashModular(d3.clave) << ", "
         << "Plegamiento: " << th.hashPlegamiento(d3.clave) << ", "
         << "Multiplicacion: " << th.hashMultiplicacion(d3.clave)
         << endl;

    cout << "Clave: " << d4.clave << ", "
         << "Modular: " << th.hashModular(d4.clave) << ", "
         << "Plegamiento: " << th.hashPlegamiento(d4.clave) << ", "
         << "Multiplicacion: " << th.hashMultiplicacion(d4.clave)
         << endl;

    cout << "Clave: " << d5.clave << ", "
         << "Modular: " << th.hashModular(d5.clave) << ", "
         << "Plegamiento: " << th.hashPlegamiento(d5.clave) << ", "
         << "Multiplicacion: " << th.hashMultiplicacion(d5.clave)
         << endl;

    cout << "Clave: " << d6.clave << ", "
         << "Modular: " << th.hashModular(d6.clave) << ", "
         << "Plegamiento: " << th.hashPlegamiento(d6.clave) << ", "
         << "Multiplicacion: " << th.hashMultiplicacion(d6.clave)
         << endl;

    cout << "Clave: " << d7.clave << ", "
         << "Modular: " << th.hashModular(d7.clave) << ", "
         << "Plegamiento: " << th.hashPlegamiento(d7.clave) << ", "
         << "Multiplicacion: " << th.hashMultiplicacion(d7.clave)
         << endl;

    cout << "Clave: " << d8.clave << ", "
         << "Modular: " << th.hashModular(d8.clave) << ", "
         << "Plegamiento: " << th.hashPlegamiento(d8.clave) << ", "
         << "Multiplicacion: " << th.hashMultiplicacion(d8.clave)
         << endl;
    return 0;
}
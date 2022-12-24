#include "TablaHash.h"

int main(){
    TablaHash th;
    Diccionario d1, d2, d3, d4;
    d1.clave = 2134;
    d2.clave = 5231;
    d3.clave = 2212;
    d4.clave = 1011;

    cout << "Agarrar los elementos 5 y 6 a la derecha del resultado, osea que si sale 645359 agarra 64" << endl;

    cout << "Clave: " << d1.clave << ", "
         << "Indice: " << th.hashMitadDelCuadrado(d1.clave) << 
         endl;

    cout << "Clave: " << d2.clave << ", "
         << "Indice: " << th.hashMitadDelCuadrado(d2.clave) <<
         endl;
    
    cout << "Clave: " << d3.clave << ", "
         << "Indice: " << th.hashMitadDelCuadrado(d3.clave) <<
         endl;

    cout << "Clave: " << d4.clave << ", "
         << "Indice: " << th.hashMitadDelCuadrado(d4.clave) <<
         endl;

    return 0;
}
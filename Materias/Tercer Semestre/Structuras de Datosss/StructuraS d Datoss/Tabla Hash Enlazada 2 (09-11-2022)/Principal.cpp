#include "TablaHash.h"
int main(){
    TablaHash th;

    Diccionario d1, d2, d3;
    d1.clave = 7;
    d1.dato = "D1";
    d2.clave = 12;
    d2.dato = "D2";
    d3.clave = 17;
    d3.dato = "D3";

    th.insertar(d1);
    th.insertar(d2);
    th.insertar(d3);

    th.mostrar(7);

    long long int x = 1584321 * 1584321;  
    cout << x << endl;
    cout << 479 % 197 << endl;
    return 0;
}
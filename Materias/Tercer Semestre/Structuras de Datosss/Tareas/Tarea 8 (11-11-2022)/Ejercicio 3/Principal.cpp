#include "TablaHash.h"

int main(){
    TablaHash th;
    Diccionario d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
    d1.clave = 14;
    d2.clave = 31;
    d3.clave = 62;
    d4.clave = 26;
    d5.clave = 39;
    d6.clave = 44;
    d7.clave = 45;
    d8.clave = 22;
    d9.clave = 15;
    d10.clave = 16;

    cout << "Clave: " << d1.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d1.clave) <<
        endl;
        
    cout << "Clave: " << d2.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d2.clave) <<
        endl;
        
    cout << "Clave: " << d3.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d3.clave) <<
        endl;
        
    cout << "Clave: " << d4.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d4.clave) <<
        endl;
        
    cout << "Clave: " << d5.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d5.clave) <<
        endl;
        
    cout << "Clave: " << d6.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d6.clave) <<
        endl;
        
    cout << "Clave: " << d7.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d7.clave) <<
        endl;
        
    cout << "Clave: " << d8.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d8.clave) <<
        endl;
        
    cout << "Clave: " << d9.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d9.clave) <<
        endl;
        
    cout << "Clave: " << d10.clave << ", "
        << "Posicion: " << th.resolucionPorDobleDireccionDispersa(d10.clave) <<
        endl;
        

    return 0;
}
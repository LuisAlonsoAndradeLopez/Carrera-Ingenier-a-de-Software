#ifndef TABLAHASH_H_
#define TABLAHASH_H_
#include "Diccionario.h"
#include <iostream>
using namespace std;
const int TAM_TABLA = 12;
class TablaHash{
    protected:
        Diccionario tablaHash[TAM_TABLA];

    public:
        int hashModular(int clave);
        int hashPlegamiento(int clave);
        int hashMultiplicacion(int clave);

        void insertarPorHashModular(Diccionario diccionario);
        void insertarPorHashPlegamiento(Diccionario diccionario);
        void insertarPorHashMultiplicacion(Diccionario diccionario);
};

int TablaHash::hashModular(int clave){
    return clave % TAM_TABLA;
}

int TablaHash::hashPlegamiento(int clave){
    int primeraMitad;
    int segundaMitad;
    int laClave = clave;

    primeraMitad = laClave / 10;
    segundaMitad = laClave % 10;
    laClave = primeraMitad + segundaMitad;
        
    if(laClave >= TAM_TABLA){
        laClave = laClave % 10;
    }

    return laClave;
}

int TablaHash::hashMultiplicacion(int clave){
    const float constante = 0.61825;

    //Paso 1: Multiplicar la clave por la constante
    int paso1 = clave * constante;

    //Paso 2: Sacarle los decimales al resultado del paso 1
    float paso2 = (clave * constante) - paso1;

    //Paso 3: Multiplicar el tamaño de la tabla por el resultado del paso 2
    int paso3 = TAM_TABLA * paso2;

    return paso3;
}


void TablaHash::insertarPorHashModular(Diccionario diccionario){
    tablaHash[hashModular(diccionario.clave)] = diccionario;
}

void TablaHash::insertarPorHashPlegamiento(Diccionario diccionario){
    tablaHash[hashPlegamiento(diccionario.clave)] = diccionario;
}

void TablaHash::insertarPorHashMultiplicacion(Diccionario diccionario){
    tablaHash[hashMultiplicacion(diccionario.clave)] = diccionario;
}
#endif
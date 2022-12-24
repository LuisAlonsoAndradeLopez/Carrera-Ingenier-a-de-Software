#ifndef ARBOLBINARIODEBUSQUEDA_H_
#define ARBOLBINARIODEBUSQUEDA_H_
#include "NodoArbol.h"
#include <iostream>
using namespace std;

void insertador(NodoArbol*, NodoArbol*);
Dato buscadorMayorValor(NodoArbol*, Dato);

class ArbolBinarioDeBusqueda{
    protected:
        NodoArbol *raiz;

    public:
        ArbolBinarioDeBusqueda(){
            raiz = NULL;
        }

        void insertar(Dato dato);
        void enorden();
        Dato mayorValor(); 
};

void ArbolBinarioDeBusqueda::insertar(Dato dato){
    NodoArbol *nuevo = new NodoArbol(dato);
    if(raiz != NULL){
        insertador(raiz, nuevo);
    }else{
        raiz = nuevo;
    }
}

void insertador(NodoArbol *raiz, NodoArbol *nuevo){
    if(nuevo -> getDato() < raiz -> getDato()){
        if(raiz -> getIzquierdo() == NULL){
            raiz -> setIzquierdo(nuevo);
        }else{
            insertador(raiz -> getIzquierdo(), nuevo);
        }
    }

    if(nuevo -> getDato() > raiz -> getDato()){
        if(raiz -> getDerecho() == NULL){
            raiz -> setDerecho(nuevo);
        }else{
            insertador(raiz -> getDerecho(), nuevo);
        }
    }
}

Dato ArbolBinarioDeBusqueda::mayorValor(){
    Dato mayorValor;
    if(raiz != NULL){
        mayorValor = buscadorMayorValor(raiz, raiz -> getDato());
    }else{
        cout << "Arbol Vacio" << endl;
    }
    return mayorValor;
}

Dato buscadorMayorValor(NodoArbol *raiz, Dato dato){
    if(raiz != NULL){
        dato = buscadorMayorValor(raiz -> getDerecho(), dato);
    
        if(raiz -> getDato() > dato){
            dato = raiz -> getDato();
        }

    }

    return dato;
}
#endif
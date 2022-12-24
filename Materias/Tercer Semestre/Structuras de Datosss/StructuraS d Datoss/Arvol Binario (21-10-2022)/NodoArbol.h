#ifndef NODOARBOL_H_
#define NODOARBOL_H_
#include <iostream>
using namespace std;
typedef int Dato;
class NodoArbol{
    protected:
        NodoArbol *izquierdo;
        Dato dato;
        NodoArbol *derecho;

    public:
        NodoArbol(Dato dato){
            izquierdo = NULL;
            this -> dato = dato;
            derecho = NULL;
        }

        void setIzquierdo(NodoArbol* izquierdo);
        NodoArbol* getIzquierdo();
        void setDato(Dato dato);
        Dato getDato();
        void setDerecho(NodoArbol* derecho);
        NodoArbol* getDerecho();
};

void NodoArbol::setIzquierdo(NodoArbol *izquierdo){
    this -> izquierdo = izquierdo;
}

NodoArbol* NodoArbol::getIzquierdo(){
    return this -> izquierdo;
}

void NodoArbol::setDato(Dato dato){
    this -> dato = dato;
}

Dato NodoArbol::getDato(){
    return this -> dato;
}

void NodoArbol::setDerecho(NodoArbol *derecho){
    this -> derecho = derecho;
}

NodoArbol* NodoArbol::getDerecho(){
    return this -> derecho;
}
#endif
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
            this -> izquierdo = NULL;
            this -> dato = dato;
            this -> derecho = NULL;
        }

        void setIzquierdo(NodoArbol *izquierdo){
            this -> izquierdo = izquierdo;
        }

        NodoArbol* getIzquierdo(){
            return this -> izquierdo;
        }

        void setDato(Dato dato){
            this -> dato = dato;
        }

        Dato getDato(){
            return this -> dato;
        }

        void setDerecho(NodoArbol *derecho){
            this -> derecho = derecho;
        }

        NodoArbol* getDerecho(){
            return this -> derecho;
        }
};
#endif
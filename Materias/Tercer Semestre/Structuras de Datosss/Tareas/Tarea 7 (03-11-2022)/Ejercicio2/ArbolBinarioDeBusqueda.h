#ifndef ARBOLBINARIODEBUSQUEDA_H_
#define ARBOLBINARIODEBUSQUEDA_H_
#include "NodoArbol.h"
#include <iostream>
using namespace std;

void insertador(NodoArbol*, NodoArbol*);
void preordenanear(NodoArbol*);
void enordenanear(NodoArbol*);
void postordenanear(NodoArbol*);

class ArbolBinarioDeBusqueda{
    protected:
        NodoArbol *raiz;

    public:
        ArbolBinarioDeBusqueda(){
            raiz = NULL;
        }

        void insertar(Dato dato);
        void preorden();
        void enorden();
        void postorden();
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

void ArbolBinarioDeBusqueda::preorden(){
    if(raiz != NULL){
        preordenanear(raiz);
    }else{
        cout << "Arbol Vacio";
    }
}

void preordenanear(NodoArbol *raiz){
    if(raiz != NULL){
        cout << raiz -> getDato() << endl;
        preordenanear(raiz -> getIzquierdo());
        preordenanear(raiz -> getDerecho());
    }
}

void ArbolBinarioDeBusqueda::enorden(){
    if(raiz != NULL){
        enordenanear(raiz);
    }else{
        cout << "Arbol Vacio";
    }
}

void enordenanear(NodoArbol *raiz){
    if(raiz != NULL){
        enordenanear(raiz -> getIzquierdo());
        cout << raiz -> getDato() << endl;
        enordenanear(raiz -> getDerecho());
    }
}

void ArbolBinarioDeBusqueda::postorden(){
    if(raiz != NULL){
        postordenanear(raiz);
    }else{
        cout << "Arbol Vacio";
    }
}

void postordenanear(NodoArbol *raiz){
    if(raiz != NULL){
        postordenanear(raiz -> getIzquierdo());
        postordenanear(raiz -> getDerecho());
        cout << raiz -> getDato() << endl;
    }
}

#endif
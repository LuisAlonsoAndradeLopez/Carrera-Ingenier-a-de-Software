#ifndef ARBOLBINARIO_H_
#define ARBOLBINARIO_H_
#include "NodoArbol.h"
#include <iostream>
using namespace std;
class ArbolBinario{
    protected:
        NodoArbol *raiz;
        int numeroNiveles;
    public:
        ArbolBinario(){
            raiz = NULL;
            numeroNiveles = -1;
        }

        void insertar(Dato dato);
        void insertador(NodoArbol* auxiliar, NodoArbol* nodo);
        void eliminar();
        void eliminador();
        void preorden();
        void preordenR(NodoArbol* auxiliar);
        void enorden();
        void postorden();
};

void ArbolBinario::insertar(Dato dato){
    NodoArbol *nodo = new NodoArbol(dato);
    if(raiz != NULL){
        NodoArbol *auxiliar = raiz;
        NodoArbol *referencia = raiz;
        this -> insertador(auxiliar, nodo);
    }else{
        raiz = nodo;
        cout << "Elemento Insertado" << endl;
    }
}

void ArbolBinario::insertador(NodoArbol* auxiliar, NodoArbol* nodo){
    int posicion;
    cout << "Selecciona a donde quieres ir, si a la derecha o a la izquierda: (0: izquierda, 1: derecha)" << endl;
    cin >> posicion;

    //Si dices ir a la izquierda
    if(posicion == 0){
        if(auxiliar -> getIzquierdo() != NULL){
            this -> insertador(auxiliar -> getIzquierdo(), nodo);
        }else{
            auxiliar -> setIzquierdo(nodo);
            cout << "Elemento insertado" << endl;
        }
    }

    //Si dices ir a la derechaa
    if(posicion == 1){
        if(auxiliar -> getDerecho() != NULL){
            this -> insertador(auxiliar -> getDerecho(), nodo);
        }else{
            auxiliar -> setDerecho(nodo);
            cout << "Elemento insertado" << endl;
        }
    }
}

void ArbolBinario::preorden(){
    NodoArbol *auxiliar = raiz;
    if(auxiliar != NULL){
        this -> preordenR(auxiliar);
    }else{
        cout << "Arbol Vacio" << endl;
    }
}

void ArbolBinario::preordenR(NodoArbol* auxiliar){
    if(auxiliar != NULL){
        cout << auxiliar -> getDato() << endl;
        this -> preordenR(auxiliar -> getIzquierdo());
        this -> preordenR(auxiliar -> getDerecho());
    }
}
#endif
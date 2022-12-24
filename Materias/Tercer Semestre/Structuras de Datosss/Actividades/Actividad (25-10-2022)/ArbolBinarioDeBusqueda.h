#ifndef ARBOLBINARIODEBUSQUEDA_H_
#define ARBOLBINARIODEBUSQUEDA_H_
#include "NodoArbol.h"
#include <iostream>
using namespace std;
void insertador(NodoArbol*, NodoArbol*);
void enordenanear(NodoArbol*);
void mostradorDeMayoresDe25(NodoArbol*);
class ArbolBinarioDeBusqueda{
    protected:
        NodoArbol *raiz;

    public:
        ArbolBinarioDeBusqueda(){
            raiz = NULL;
        }

        void insertar(string nombre, Edad edad);
        void enorden();
        void mostrarMayoresDe25();
};

void ArbolBinarioDeBusqueda::insertar(string nombre, Edad edad){
    NodoArbol *nuevo = new NodoArbol(nombre, edad);
    if(raiz != NULL){
        NodoArbol *auxiliar = raiz;
        insertador(auxiliar, nuevo);
    }else{
        raiz = nuevo;
    }
}

void insertador(NodoArbol *auxiliar, NodoArbol *nuevo){
    if(nuevo -> getEdad() < auxiliar -> getEdad()){
        if(auxiliar -> getIzquierdo() != NULL){
            insertador(auxiliar -> getIzquierdo(), nuevo);
        }else{
            auxiliar -> setIzquierdo(nuevo);
        }
    }

    if(nuevo -> getEdad() > auxiliar -> getEdad()){
        if(auxiliar -> getDerecho() != NULL){
            insertador(auxiliar -> getDerecho(), nuevo);
        }else{
            auxiliar -> setDerecho(nuevo);
        }
    }
}

void ArbolBinarioDeBusqueda::enorden(){
    if(raiz != NULL){
        NodoArbol *auxiliar = raiz;
        enordenanear(auxiliar);
    }else{
        cout << "Arbol Vacio" << endl;
    }
}

void enordenanear(NodoArbol *auxiliar){
    if(auxiliar != NULL){
        enordenanear(auxiliar -> getIzquierdo());
        cout << auxiliar -> getEdad() << endl;
        enordenanear(auxiliar -> getDerecho());
    }
}

void ArbolBinarioDeBusqueda::mostrarMayoresDe25(){
    if(raiz != NULL){
        NodoArbol *auxiliar = raiz;
        mostradorDeMayoresDe25(auxiliar);
    }else{
        cout << "Arbol Vacio" << endl;
    }
}

void mostradorDeMayoresDe25(NodoArbol *auxiliar){
    if(auxiliar != NULL){
        if(auxiliar -> getEdad() > 25){
            cout << auxiliar -> getEdad() << endl;
            cout << auxiliar -> getNombre() << endl;
        }
        mostradorDeMayoresDe25(auxiliar -> getDerecho());
        mostradorDeMayoresDe25(auxiliar -> getIzquierdo());
    }
}

#endif
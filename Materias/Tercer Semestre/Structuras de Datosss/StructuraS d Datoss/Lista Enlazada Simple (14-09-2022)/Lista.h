#ifndef _LISTA_H
#define _LISTA_H
#include <iostream>
#include "Nodo.h"
using namespace std;
typedef int Dato;

class Lista{
    protected:
        Nodo* primero;
    
    public:
        Lista(){
            primero = NULL;

        }

        void crearLista();
        void insertarCabezaLista(Dato entrada);
        void visualizar();
};

void Lista::crearLista(){
    int x;
    primero = 0;
    cout << "Termina con -1" << endl;
    do{
        cin >> x;
        if(x != -1){
            primero = new Nodo(x, primero);
        }
    }while(x != -1);
}

void Lista::insertarCabezaLista(Dato entrada){
    Nodo* nuevo = new Nodo(entrada);
    nuevo -> ponerEnlace(primero); //enlaza a nuevo con primero
    primero = nuevo; //mueve a primero
}

void Lista::visualizar(){
    Nodo* n;
    n = primero;
    while(n != NULL){
        cout << n -> datoNodo() << endl;
        n = n -> enlaceNodo();
    }
}

#endif
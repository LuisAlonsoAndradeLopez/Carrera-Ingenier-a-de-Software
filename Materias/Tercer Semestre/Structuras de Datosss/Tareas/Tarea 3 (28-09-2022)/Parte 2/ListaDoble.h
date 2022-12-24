#ifndef _LISTADOBLE_H
#define _LISTADOBLE_H
#include <iostream>
#include "NodoDoble.h"
using namespace std;
typedef char Dato;

class ListaDoble{
    protected:
        NodoDoble* cabeza;
        NodoDoble* ultimo;
        unsigned int numeroNodos;
    
    public:
        ListaDoble(){
            cabeza = NULL;
            ultimo = NULL;
            numeroNodos = 0;
        }

        //void crearLista();
        //void insertarCabezaLista(Dato entrada);
        void visualizarPorDelante();
        void visualizarPorDetras();
        void insertarXCabeza(Dato entrada);
        void insertarXCola(Dato entrada);
        void insertarNodo(Dato entrada, unsigned int posicion);
        NodoDoble* buscarNodo(Dato entrada);
};

void ListaDoble::visualizarPorDelante(){
    NodoDoble* n;
    n = cabeza;
    while(n != NULL){
        cout << n -> datoNodo() << endl;
        n = n -> adelanteNodo();
    }
}

void ListaDoble::visualizarPorDetras(){
    NodoDoble* n;
    n = ultimo;
    while(n != NULL){
        cout << n -> datoNodo() << endl;
        n = n -> atrasNodo();
    }
}

void ListaDoble::insertarXCabeza(Dato entrada){
    NodoDoble *nuevo = new NodoDoble(entrada);
    nuevo -> ponerAdelante(cabeza);
    if(cabeza != NULL){
        cabeza -> ponerAtras(nuevo);
    }
    cabeza = nuevo;
    numeroNodos++;
}

void ListaDoble::insertarXCola(Dato entrada){
    NodoDoble *nuevo = new NodoDoble(entrada);
    if(cabeza != NULL){
        ultimo -> ponerAdelante(nuevo);
        nuevo -> ponerAtras(ultimo);
        ultimo = nuevo;
    }else{
        cabeza = nuevo;
        ultimo = nuevo;
    }
    numeroNodos++;
}

void ListaDoble::insertarNodo(Dato Dato, unsigned int posicion){
    NodoDoble *anterior;
    NodoDoble *siguiente;
    anterior = cabeza;
    siguiente = cabeza;

    if(posicion == 0){
        NodoDoble *nuevo;
        nuevo = new NodoDoble(Dato);
        nuevo -> ponerAdelante(cabeza);
        cabeza -> ponerAtras(nuevo);
        cabeza = nuevo;
    }
    if(posicion > 0){
        for(int i = 1; i <= this -> numeroNodos; i++){
            if(i == posicion){
                NodoDoble *nuevo = new NodoDoble(Dato);
                siguiente = anterior -> adelanteNodo();
                anterior -> ponerAdelante(nuevo);
                nuevo -> ponerAtras(anterior);
                nuevo -> ponerAdelante(siguiente);
                siguiente -> ponerAtras(nuevo);
                break;
            }
            anterior = anterior -> adelanteNodo();
            siguiente = siguiente -> adelanteNodo();
        }
    }
}

NodoDoble* ListaDoble::buscarNodo(Dato entrada){
    NodoDoble *n;
    n = cabeza;
    NodoDoble *objetivo;
    bool encontrado = false;
    while(n != NULL && !encontrado){
        if(n -> datoNodo() == entrada){
            encontrado = true;
            objetivo = n;
        }
        n = n -> adelanteNodo();
    }
    return objetivo;
}


#endif


/*
//Crear la lista por la cabeza
void ListaDoble::crearLista(){
    int x;
    NodoDoble *nuevo;
    bool laListaEstaVacia = true;
    cabeza = 0;
    ultimo = 0;
    cout << "Termina con -1" << endl;
    do{
        cin >> x;
        if(x != -1){
            if(laListaEstaVacia){
                laListaEstaVacia = false;
                ultimo 
            }
            nuevo = new NodoDoble(x);
            cabeza -> ponerAtras(nuevo);
            nuevo -> ponerAdelante(cabeza);
            cabeza = nuevo;
        }
    }while(x != -1);
}*/


/*
void ListaDoble::insertarCabezaLista(Dato entrada){
    NodoDoble* nuevoParaCabeza = new NodoDoble(entrada);
    nuevoParaCabeza -> ponerAdelante(cabeza);
    cabeza -> ponerAtras(nuevoParaCabeza);
    cabeza = nuevoParaCabeza;
}*/
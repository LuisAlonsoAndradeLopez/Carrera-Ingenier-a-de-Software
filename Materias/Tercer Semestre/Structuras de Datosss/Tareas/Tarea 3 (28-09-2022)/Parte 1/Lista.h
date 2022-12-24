#ifndef _LISTA_H
#define _LISTA_H
#include <iostream>
#include "Nodo.h"
using namespace std;
typedef int Dato;

class Lista{
    protected:
        Nodo* primero;
        int numeroNodos = 0;
    
    public:
        Lista(){
            primero = NULL;
        }

        void crearLista();
        void insertarCabezaLista(Dato entrada);
        void visualizar();
        Nodo* nodoUltimo();
        void insertarNodo(Nodo* nodo, int posicion);
        int getNumeroNodos();
        void insertarUltimo(Dato entrada);
        Nodo* ultimo();
        void eliminarNodo(int posicion);
        void sumaDeDosListas(Lista a, Lista b);
        void eliminarValoresMayoresA20();
};

//Esto inserta los nodohs de derecha a izquierda
void Lista::crearLista(){
    int x;
    primero = 0;
    cout << "Termina con -1" << endl;
    do{
        cin >> x;
        if(x != -1){
            primero = new Nodo(x, primero);
            numeroNodos++;
        }
    }while(x != -1);
}

void Lista::insertarCabezaLista(Dato entrada){
    Nodo* nuevo = new Nodo(entrada);
    nuevo -> ponerEnlace(primero); //enlaza a nuevo con primero
    primero = nuevo; //mueve a primero
    numeroNodos++;
}

void Lista::visualizar(){
    Nodo* n;
    n = primero; //Cambiar a primero para que visualice la lista que va de derecha a izquierda
    while(n != NULL){
        cout << n -> datoNodo() << endl;
        n = n -> enlaceNodo();
    }
}


//Parte 1: Insertar nodos de izquierda a derecha
//Este metodo va a agarrar de la lista que va de derecha a izquierda, el ultimo nodo


Nodo* Lista::ultimo(){
    Nodo *p = primero;
    while(p -> enlaceNodo() != NULL){  //AY DIOS MIO NO PONGAS PUNTO Y COMA EN UN WHILEEEEEEEEE
        p = p -> enlaceNodo();
    }
    return p;
}


void Lista::insertarUltimo(Dato entrada){
    Nodo *p = primero;
    if(p == NULL){
        p = 0;
        p = new Nodo(entrada, p);
        primero = p;
    }else{
        Nodo *ultimo = this -> ultimo();
        //cout << ultimo -> datoNodo();
        ultimo -> ponerEnlace(new Nodo(entrada));
    }
}

int Lista::getNumeroNodos(){
    return this -> numeroNodos;
}


//Parte 2: Insertar nodohs en la lista en la parte que quieras
void Lista::insertarNodo(Nodo* nodo, int posicion){
    Nodo *auxiliar1;
    auxiliar1 = primero;

    if(posicion == 0){
        nodo -> ponerEnlace(primero);
        primero = nodo;
    }

    if(posicion > 0){
        for(int i = 1; i <= this -> numeroNodos; i++){
            if(i == posicion){
                nodo -> ponerEnlace(auxiliar1 -> enlaceNodo());
                auxiliar1 -> ponerEnlace(nodo);
                break;
            }
            auxiliar1 = auxiliar1 -> enlaceNodo();
        }
    }
}

//Parte 3: Eliminar cualquier nodo de la lista
void Lista::eliminarNodo(int posicion){
    Nodo *eliminar, *auxiliar;
    eliminar = primero;
    auxiliar = primero;
    for(int i = 1; i <= this -> numeroNodos; i++){
        if(i == (posicion - 1)){

            eliminar = eliminar -> enlaceNodo();
            auxiliar -> ponerEnlace(eliminar -> enlaceNodo());
            numeroNodos--;
            delete eliminar;
            break;
        }
        eliminar = eliminar -> enlaceNodo();
        auxiliar = auxiliar -> enlaceNodo();
    }
}


//Tarea 2: Parte de los 6 Nodos, son estos 2 metodos

//Sumar los elementos de 2 nodos
void Lista::sumaDeDosListas(Lista listaA, Lista listaB){
    Nodo *auxiliarListaA, *auxiliarListaB, *auxiliarListaActual;
    int numero;
    auxiliarListaA = listaA.primero;
    auxiliarListaB = listaB.primero;

    primero = 0;
    cout << "Dime el numero de nodos de la lista C (Pon 6 por que son los nodos que vienen en el ejercicio)" << endl;
    cin >> numero;
    for(int i = 1; i <= numero; i++){
        primero = new Nodo(0, primero);
        numeroNodos++;
    }

    auxiliarListaActual = primero;

    while(auxiliarListaActual != NULL){
        auxiliarListaActual -> ponerDato((auxiliarListaA -> datoNodo()) + (auxiliarListaB -> datoNodo()));
        auxiliarListaA = auxiliarListaA -> enlaceNodo();
        auxiliarListaB = auxiliarListaB -> enlaceNodo();
        auxiliarListaActual = auxiliarListaActual -> enlaceNodo();
    }
}

void Lista::eliminarValoresMayoresA20(){
    Nodo *auxiliar;
    auxiliar = primero;
    for(int i = 1; i < numeroNodos; i++){
        while(auxiliar -> enlaceNodo() -> datoNodo() > 20){
            this -> eliminarNodo(i + 1);
        }

        if(auxiliar == NULL){
            break;
        }

        auxiliar = auxiliar -> enlaceNodo();
    }
}

#endif
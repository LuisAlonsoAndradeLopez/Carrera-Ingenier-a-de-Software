//Tarea: insertar nodos a cualquier posicion de la lista
//Tarea: agregar elemento a la cola
//Tarea: eliminarNodo: 1.- buscar el objetivo, 2.- cambiar el enlace del anterior al objetivo al enlace que apuntaba el objetivo, 3.- borrar el objetivo

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
        cout << ultimo -> datoNodo();
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
    for(int i = 1; i <= this -> numeroNodos; i++){
        if(i == posicion){
            nodo -> ponerEnlace(auxiliar1 -> enlaceNodo());
            auxiliar1 -> ponerEnlace(nodo);
            break;
        }
        auxiliar1 = auxiliar1 -> enlaceNodo();
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
            
            delete eliminar;
            break;
        }
        eliminar = eliminar -> enlaceNodo();
        auxiliar = auxiliar -> enlaceNodo();
    }
}
//esto es gg como una catedral

/*
Nodo* Lista::nodoUltimo(){
    Nodo* p;
    p = primero; //Cambiar a primero para que cree la lista de derecha a izquierda
    while(p -> enlaceNodo() != NULL){
        p = p -> enlaceNodo();
    }
    
    //Este definitivamente es el ultimo
    if(p -> enlaceNodo() == NULL){
        p = p -> enlaceNodo();
    }

    return p;
}

void Lista::insertarUltimo(Dato entrada){
    Nodo *auxiliar = primero; //Nodo Ultimo
    //auxiliar2 = 0;
    int x;
    do{
        cin >> x;
        if(x != -1){
            auxiliar = new Nodo(x, NULL);
            nodoUltimo() -> ponerEnlace(auxiliar);
        }
    }while(x != -1);
}

*/

#endif
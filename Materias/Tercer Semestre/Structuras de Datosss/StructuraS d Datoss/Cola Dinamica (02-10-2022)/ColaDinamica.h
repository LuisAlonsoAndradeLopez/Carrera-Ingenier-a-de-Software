#ifndef COLADINAMICA_H_
#define COLADINAMICA_H_
#include <iostream>
#include "Nodo.h"
using namespace std;
typedef int Dato;
class ColaDinamica{
    protected:
        Nodo *primero;
        Nodo *ultimo;
        unsigned int numeroNodos;
    public:
        ColaDinamica(){
            primero = NULL;
            ultimo = NULL;
            numeroNodos = 0;
        }
        void insertarNodo(Dato dato);
        void eliminarNodo();
        void mostrarCola();
};

void ColaDinamica::insertarNodo(Dato dato){
    Nodo *nuevo = new Nodo(dato);
    if(primero != NULL){
        ultimo -> insertarEnlace(nuevo);
        ultimo = nuevo;
        numeroNodos++;
    }else{
        primero = nuevo;
        ultimo = primero;
        numeroNodos++;
    }
}

void ColaDinamica::eliminarNodo(){
    Nodo *eliminar = primero;
    if(primero != NULL){
        primero = primero -> enlaceNodo();
        delete eliminar;
        numeroNodos--;
    }else{
        cout << "Cola Vacía" << endl;
    }
}

void ColaDinamica::mostrarCola(){
    Nodo *auxiliar = primero;
    for(int i = 1; i <= numeroNodos; i++){
        cout << auxiliar -> datoNodo() << endl;
        auxiliar = auxiliar -> enlaceNodo();
    }
}
#endif
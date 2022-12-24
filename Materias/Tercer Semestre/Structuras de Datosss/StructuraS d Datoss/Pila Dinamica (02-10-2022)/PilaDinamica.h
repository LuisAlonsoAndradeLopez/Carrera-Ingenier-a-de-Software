#ifndef PILADINAMICA_H_
#define PILADINAMICA_H_
#include <iostream>
#include "Nodo.h"
using namespace std;
typedef int Dato;
class PilaDinamica{
    protected:
        Nodo *primero;
        Nodo *ultimo;
        unsigned int numeroNodos;
    public:
        PilaDinamica(){
            primero = NULL;
            numeroNodos = 0;
        }
        void insertarNodo(Dato dato);
        void eliminarNodo();
        void mostrarCola();
};

void PilaDinamica::insertarNodo(Dato dato){
    Nodo *nuevo = new Nodo(dato);
    if(primero != NULL){
        nuevo -> insertarEnlace(ultimo);
        ultimo = nuevo;
        numeroNodos++;
    }else{
        primero = nuevo;
        ultimo = primero;
        numeroNodos++;
    }
}

void PilaDinamica::eliminarNodo(){
    Nodo *eliminar = ultimo;
    if(primero != NULL){
        ultimo = ultimo -> enlaceNodo();
        delete eliminar;
        numeroNodos--;
    }else{
        cout << "Cola Vacía" << endl;
    }
}

void PilaDinamica::mostrarCola(){
    Nodo *auxiliar = ultimo;
    for(int i = 1; i <= numeroNodos; i++){
        cout << auxiliar -> datoNodo() << endl;
        auxiliar = auxiliar -> enlaceNodo();
    }
}
#endif
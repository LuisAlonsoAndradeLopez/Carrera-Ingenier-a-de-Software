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
        void ordenarDatos();
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

void ColaDinamica::ordenarDatos(){
    ColaDinamica colaAuxiliar;
    Nodo *auxiliar;
    auxiliar = primero;

    //Meter los elementos de forma ordenada de los ultimos digitos
    for(int i = 0; i <= 9; i++){
        while(auxiliar != NULL){
            if(auxiliar -> datoNodo() % 10 == i){
                colaAuxiliar.insertarNodo(auxiliar -> datoNodo()); 
            }
            auxiliar = auxiliar -> enlaceNodo();
        }

        auxiliar = primero;
    }

    auxiliar = primero;
    Nodo *auxiliar2 = colaAuxiliar.primero;

    //Cambiar los elementos de la cola por los de la cola auxiliar de forma ordenada en el segundo digito
    for(int i = 0; i <= 9; i++){
        while(auxiliar2 != NULL){
            if( (auxiliar2 -> datoNodo() / 10) == i){
                auxiliar -> insertarDato(auxiliar2 -> datoNodo());
                auxiliar = auxiliar -> enlaceNodo();
            }
            auxiliar2 = auxiliar2 -> enlaceNodo();
        }

        auxiliar2 = colaAuxiliar.primero;
    }
    //colaAuxiliar.mostrarCola();
}
#endif
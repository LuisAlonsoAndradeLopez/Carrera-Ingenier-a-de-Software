#ifndef LISTAENLAZADA_H_
#define LISTAENLAZADA_H_
#include "Nodo1Enlace.h"
class ListaEnlazada{
    protected:
        Nodo1Enlace *primero;
    public:
        ListaEnlazada(){
            this -> primero = NULL;
        }

        void insertar(Diccionario diccionario);
        void mostrar();
};

void ListaEnlazada::insertar(Diccionario diccionario){
    Nodo1Enlace *nuevo = new Nodo1Enlace(diccionario);
    if(primero != NULL){
        Nodo1Enlace *auxiliar = primero;
        while(auxiliar != NULL){
            if(auxiliar -> getSiguiente() == NULL){
                auxiliar -> setSiguiente(nuevo);
                break;
            }
            auxiliar = auxiliar -> getSiguiente();
        }
    }else{
        primero = nuevo;
    }
}

void ListaEnlazada::mostrar(){
    if(primero != NULL){
        Nodo1Enlace *auxiliar = primero;
        while(auxiliar != NULL){
            cout << auxiliar -> getDiccionario().clave << " ";
            cout << auxiliar -> getDiccionario().dato << endl;
    
            auxiliar = auxiliar -> getSiguiente();
        }
    }else{
        cout << "Esta vacio" << endl;
    }
    
}
#endif
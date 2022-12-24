#ifndef LISTAENLAZADA_H_
#define LISTAENLAZADA_H_
#include "Nodo1Enlace.h"
class ListaEnlazada{
    protected:
        Nodo1Enlace *primero;
        unsigned int numeroNodos;

    public:
        ListaEnlazada(){
            this -> primero = NULL;
            this -> numeroNodos = 0;
        }

        void insertar(Dato diccionario);
        void mostrar();
        void ordenar();
        void setPrimero(Nodo1Enlace* dato);
        Nodo1Enlace* getPrimero();
};

//Crea un nodo a la lista enlazada
void ListaEnlazada::insertar(Dato dato){
    Nodo1Enlace *nuevo = new Nodo1Enlace(dato);
    if(primero != NULL){
        Nodo1Enlace *auxiliar = primero;
        while(auxiliar != NULL){
            if(auxiliar -> getSiguiente() == NULL){
                auxiliar -> setSiguiente(nuevo);
                numeroNodos++;
                break;
            }
            auxiliar = auxiliar -> getSiguiente();
        }
    }else{
        primero = nuevo;
        numeroNodos++;
    }
}

//Muestra todos los nodos de la lista enlazada
void ListaEnlazada::mostrar(){
    if(primero != NULL){
        Nodo1Enlace *auxiliar = primero;
        while(auxiliar != NULL){
            cout << auxiliar -> getDato() << endl;
    
            auxiliar = auxiliar -> getSiguiente();
        }
    }else{
        cout << "Esta vacio" << endl;
    }
    
}

void ListaEnlazada::setPrimero(Nodo1Enlace *dato){
    this -> primero = dato;
}

//Devuelve el primer nodo de la lista
Nodo1Enlace* ListaEnlazada::getPrimero(){
    return primero;
}

#endif
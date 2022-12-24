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

//Ordena todos los elementos de la lista enlazada
void ListaEnlazada::ordenar(){
    Nodo1Enlace *auxiliar = primero;
    if(primero != NULL){
        
        //Metodo de ordenamiento seleccionado: Burbuja
        for(int i = 1; i <= this -> numeroNodos; i++){
            for(int j = 1; j < this -> numeroNodos; j++){
                if(auxiliar -> getDato() > auxiliar -> getSiguiente() -> getDato()){
                    int auxiliar3 = auxiliar -> getDato();
                    auxiliar -> setDato(auxiliar -> getSiguiente() -> getDato());
                    auxiliar -> getSiguiente() -> setDato(auxiliar3);
                }

                auxiliar = auxiliar -> getSiguiente();
            }

            auxiliar = primero;
            
        }
    }
}

//Devuelve el primer nodo de la lista
Nodo1Enlace* ListaEnlazada::getPrimero(){
    return primero;
}

#endif
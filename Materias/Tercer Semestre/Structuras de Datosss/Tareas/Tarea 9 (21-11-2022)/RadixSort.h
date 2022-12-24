#ifndef RADIXSORT_H_
#define RADIXSORT_H_
#include "ListaEnlazada.h"
const int MAX_TABLA = 100;
class RadixSort{

    protected:
        ListaEnlazada tablaHash[MAX_TABLA];
        ListaEnlazada listaConElementosOrdenados; //Lista Enlazada que tiene los elementos ordenados
        int numeroElementos;

    //ESTOS METODOS SON PARA QUE SOLO LOS PUEDA USAR LA CLASE, NO LOS PUEDES USAR EN EL MAIN
    private:
        void guardarElementosEnLaListaConElementosOrdenados(); //NO USES ESTE METODO EN EL MAIN

    public:
        RadixSort(){
            numeroElementos = 0;
        }

        int funcionHash1aPasada(int clave);
        int funcionHash2aPasada(int clave);

        void insertar(Dato dato);
        void mostrarListaOrdenada();
        //Nodo1Enlace* getPrimerDatoDeLaListaOrdenada();
};

int RadixSort::funcionHash1aPasada(int clave){
    return clave % 10;
}

int RadixSort::funcionHash2aPasada(int clave){
    return clave / 10;
}

//Inserta los elementos a la tabla de Hash
void RadixSort::insertar(Dato dato){
    listaConElementosOrdenados.insertar(dato);
    numeroElementos++;
}


//PASA LOS ELEMENTOS DE LA TABLA DE HASH A LA LISTA CON ELEMENTOS ORDENADOS
//ALERTA: METODO PRIVADO
void RadixSort::guardarElementosEnLaListaConElementosOrdenados(){
   
   //Primera pasada: Insertar los elementos de la listaCOnElementosOrdenados a la tabla de hash
   //con la función de la primera pasada
    Nodo1Enlace* auxiliar = listaConElementosOrdenados.getPrimero();
    while(auxiliar != NULL){
        tablaHash[funcionHash1aPasada(auxiliar -> getDato())].insertar(auxiliar -> getDato());
        auxiliar = auxiliar -> getSiguiente();
    }

    //auxiliar que apunte al primer elemento de la listaConElementosOrdenados, para después poder
    //sobreescribir los elementos de la lista con los elementos de la tabla de hash
    auxiliar = listaConElementosOrdenados.getPrimero();

    //Meter los elementos de la tabla de hash a la listaConELementosOrdenados tal cual estan en
    //la tabla de hash
    for(int i = 0; i < MAX_TABLA; i++){
        Nodo1Enlace *auxiliar2 = tablaHash[i].getPrimero();
        while(auxiliar2 != NULL){
            auxiliar -> setDato(auxiliar2 -> getDato());
            auxiliar2 = auxiliar2 -> getSiguiente();
            auxiliar = auxiliar -> getSiguiente();
        }
    }

    //Forrrrrrrrrrrrrrrrrrmatear la tabla de hash
    for(int i = 0; i < 10; i++){
        tablaHash[i].setPrimero(NULL);
    }

    //auxiliar que apunte al primer elemento de la listaConElementosOrdenados, para después poder
    //llenar la tabla de hash
    auxiliar = listaConElementosOrdenados.getPrimero();

    //Segunda pasada: Insertar los elementos de la listaConElementosOrdenados a la tabla de hash
    //con la función de la segunda pasada
    while(auxiliar != NULL){
        tablaHash[funcionHash2aPasada(auxiliar -> getDato())].insertar(auxiliar -> getDato());
        auxiliar = auxiliar -> getSiguiente();
    }

    //auxiliar que apunte al primer elemento de la listaConElementosOrdenados, para después poder
    //sobreescribir los elementos de la lista con los elementos de la tabla de hash
    auxiliar = listaConElementosOrdenados.getPrimero();

    //Meter los elementos de la tabla de hash a la listaConELementosOrdenados tal cual estan en
    //la tabla de hash
    for(int i = 0; i < MAX_TABLA; i++){
        Nodo1Enlace *auxiliar2 = tablaHash[i].getPrimero();
        while(auxiliar2 != NULL){
            auxiliar -> setDato(auxiliar2 -> getDato());
            auxiliar2 = auxiliar2 -> getSiguiente();
            auxiliar = auxiliar -> getSiguiente();
        }
    }

}


void RadixSort::mostrarListaOrdenada(){
    this -> guardarElementosEnLaListaConElementosOrdenados();
    
    Nodo1Enlace *auxiliar = listaConElementosOrdenados.getPrimero();
    while(auxiliar != NULL){
        cout << auxiliar -> getDato() << " ";
        auxiliar = auxiliar -> getSiguiente();
    }
}


/*
Nodo1Enlace* RadixSort::getPrimerDatoDeLaListaOrdenada(){
    this -> guardarElementosEnLaListaConElementosOrdenados();
    return listaConElementosOrdenados.getPrimero();
}*/

#endif
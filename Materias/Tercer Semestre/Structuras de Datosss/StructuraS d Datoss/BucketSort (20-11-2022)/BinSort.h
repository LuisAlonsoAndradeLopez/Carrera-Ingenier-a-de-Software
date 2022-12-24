#ifndef BINSORT_H_
#define BINSORT_H_
#include "ListaEnlazada.h"
const int MAX_TABLA = 10;
class BinSort{

    protected:
        ListaEnlazada tablaHash[MAX_TABLA];
        ListaEnlazada listaConElementosOrdenados; //Lista Enlazada que tiene los elementos ordenados
        int numeroElementos;

    //ESTOS METODOS SON PARA QUE SOLO LOS PUEDA USAR LA CLASE, NO LOS PUEDES USAR EN EL MAIN
    private:
        void mostrarTodo(); //NO USES ESTE METODO EN EL MAIN
        void ordenarIndices(); //NO USES ESTE METODO EN EL MAIN
        void guardarElementosEnLaListaConElementosOrdenados(); //NO USES ESTE METODO EN EL MAIN

    public:
        BinSort(){
            numeroElementos = 0;
        }

        int funcionHash(int clave);

        void insertar(Dato dato);
        //void mostrar(int clave);
        Nodo1Enlace* getPrimerDatoDeLaListaOrdenada();
};

//La funcion de hash que introduce los elementos a la tabla
int BinSort::funcionHash(int clave){
    return clave / 10;
}

//Inserta los elementos a la tabla de Hash
void BinSort::insertar(Dato dato){
    tablaHash[this -> funcionHash(dato)].insertar(dato);
    numeroElementos++;
}


//Muestra todos los elementos de la tabla de Hash
//ALERTA: METODO PRIVADO
void BinSort::mostrarTodo(){
    for(int i = 0; i < MAX_TABLA; i++){
        tablaHash[i].mostrar();
    }
}

//ORDENA LOS ELEMENTOS DE CADA INDICE DE LA TABLA DE HASH
//ALERTA: METODO PRIVADO
void BinSort::ordenarIndices(){
    for(int i = 0; i < MAX_TABLA; i++){
        tablaHash[i].ordenar();
    }
}

//PASA LOS ELEMENTOS DE LA TABLA DE HASH A LA LISTA CON ELEMENTOS ORDENADOS
//ALERTA: METODO PRIVADO
void BinSort::guardarElementosEnLaListaConElementosOrdenados(){
    for(int i = 0; i < MAX_TABLA; i++){
        Nodo1Enlace* auxiliar = tablaHash[i].getPrimero();
        while(auxiliar != NULL){
            listaConElementosOrdenados.insertar(auxiliar -> getDato());
            auxiliar = auxiliar -> getSiguiente();
        }    
    }
}

//Devuelve el primer elemento de la lista ordenada
//Primero ordena todos los elementos de cada indice de la tabla de hash
//Luego llena la lista con elementos ordenados con los elementos de la tabla de hash ordenados valga la redundancia
//Y al final devuelve un puntero que apunta al primer elemento de la lista ordenada, para que
//en el main con un while puedas sacar los elementos de la lista
Nodo1Enlace* BinSort::getPrimerDatoDeLaListaOrdenada(){
    this -> ordenarIndices();
    this -> guardarElementosEnLaListaConElementosOrdenados();
    return listaConElementosOrdenados.getPrimero();
}




/*
//Muestra la tabla de Hash dependiendo el elemento que le mandes
void BinSort::mostrar(int clave){
    tablaHash[this -> funcionHash(clave)].mostrar();
}*/
#endif
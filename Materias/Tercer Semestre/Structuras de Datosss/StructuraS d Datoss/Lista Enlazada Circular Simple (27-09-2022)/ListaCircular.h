#ifndef LISTACIRCULAR_H_
#define LISTACIRCULAR_H_
#include <iostream>
#include "NodoCircular.h"
using namespace std;
typedef int Dato;
class ListaCircular{
    protected:
        NodoCircular *cabeza;
        NodoCircular *cola;
        int numeroNodos;

    public:
        ListaCircular(){
            cabeza = NULL;
            int numeroNodos = 0;
        }
        void insertarNodo(Dato dato);
        void mostrar();
};

void ListaCircular::insertarNodo(Dato dato){
    NodoCircular *nuevo = new NodoCircular(dato);
    if(cabeza != NULL){
        nuevo -> ponerEnlace(cabeza);
        cola -> ponerEnlace(nuevo);
        cola = nuevo;
    }else{
        cabeza = nuevo;
        cola = nuevo;
    } 
}

void ListaCircular::mostrar(){
    NodoCircular *auxiliar;
    auxiliar = cabeza;
    if(auxiliar != NULL){
        cout << auxiliar-> datoNodo() << endl;
        auxiliar = auxiliar -> enlaceNodo();
    }
    while(auxiliar != cabeza){
        cout << auxiliar-> datoNodo() << endl;
        auxiliar = auxiliar -> enlaceNodo();
    }
}


/* Para insertar entre la cabeza y el ultimo (NO BORRES ESTE CACHO DE CODIGO)
void ListaCircular::insertarNodo(Dato dato){
    NodoCircular *nuevo = new NodoCircular(dato);
    if(cabeza != NULL){
        nuevo -> ponerEnlace(cabeza -> enlaceNodo());
        cabeza -> ponerEnlace(nuevo);
    }else{
        cabeza = nuevo;
    } 
}


*/

#endif
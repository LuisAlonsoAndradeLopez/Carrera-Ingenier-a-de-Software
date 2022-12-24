#ifndef PILADINAMICA_H_
#define PILADINAMICA_H_
#include "NodoPila.h"
#include <iostream>
using namespace std;
class PilaDinamica{
    private:
        NodoPila *cima;

    public:
        PilaDinamica(){
            cima = NULL;
        }

        void agregarNodo(Dato e);
        void eliminarNodo();
        bool pilaVacia();
        void mostrarPila();
};

void PilaDinamica::agregarNodo(Dato e){
    NodoPila *nuevo = new NodoPila(e);
    if(!pilaVacia()){
        nuevo -> setEnlace(cima);
        cima = nuevo;
    }else{
        cima = nuevo;
    }
}

void PilaDinamica::eliminarNodo(){
    if(!pilaVacia()){
        NodoPila *eliminar = cima;
        cima = cima -> getEnlace();
        delete eliminar;
    }else{
        cout << "Pila Vacia" << endl;
    }
}

bool PilaDinamica::pilaVacia(){
    return cima == NULL;
}

void PilaDinamica::mostrarPila(){
    NodoPila *auxiliar = cima;
    if(!pilaVacia()){
        while(auxiliar != NULL){
            cout << "-----------------" << endl;
            cout << "|\t" << auxiliar -> getElemento() << "\t|"<< endl;
            auxiliar = auxiliar -> getEnlace();
        }
        cout << "-----------------" << endl;
        cout << "|\tNULL\t|" << endl;
        cout << "-----------------" << endl;
    }else{
        cout << "No hay nada" << endl;
    }    
}
#endif
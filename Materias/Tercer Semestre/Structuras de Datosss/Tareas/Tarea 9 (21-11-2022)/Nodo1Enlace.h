#ifndef NODO1ENLACE_H_
#define NODO1ENLACE_H_
#include <iostream>
using namespace std;
typedef int Dato;
class Nodo1Enlace{
    protected:
        Dato dato;
        Nodo1Enlace *siguiente;

    public:
        Nodo1Enlace(Dato dato){
            this -> dato = dato;
            this -> siguiente = NULL;
        }

        void setDato(Dato dato){
            this -> dato = dato;
        }

        Dato getDato(){
            return this -> dato;
        }

        void setSiguiente(Nodo1Enlace *siguiente){
            this -> siguiente = siguiente;
        }

        Nodo1Enlace* getSiguiente(){
            return this -> siguiente;
        }
};
#endif
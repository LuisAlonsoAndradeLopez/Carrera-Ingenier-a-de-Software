#ifndef NODO1ENLACE_H_
#define NODO1ENLACE_H_
#include "Diccionario.h"
#include <iostream>
using namespace std;
class Nodo1Enlace{
    protected:
        Diccionario diccionario;
        Nodo1Enlace *siguiente;

    public:
        Nodo1Enlace(Diccionario diccionario){
            this -> diccionario = diccionario;
            this -> siguiente = NULL;
        }

        void setDiccionario(Diccionario diccionario){
            this -> diccionario = diccionario;
        }

        Diccionario getDiccionario(){
            return this -> diccionario;
        }

        void setSiguiente(Nodo1Enlace *siguiente){
            this -> siguiente = siguiente;
        }

        Nodo1Enlace* getSiguiente(){
            return this -> siguiente;
        }
};
#endif
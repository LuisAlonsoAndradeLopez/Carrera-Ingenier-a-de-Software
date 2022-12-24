#ifndef NODO_H_
#define NODO_H_
#include <iostream>
typedef int Dato;
class Nodo{
    protected:
        Dato dato;
        Nodo *enlace;
    public:
        Nodo(Dato dato){
            this -> dato = dato;
            this -> enlace = NULL;
        }
        void insertarDato(Dato dato){
            this -> dato = dato;
        }

        void insertarEnlace(Nodo *enlace){
            this -> enlace = enlace;
        }

        Dato datoNodo(){
            return this -> dato;
        }

        Nodo* enlaceNodo(){
            return this -> enlace;
        }

};
#endif
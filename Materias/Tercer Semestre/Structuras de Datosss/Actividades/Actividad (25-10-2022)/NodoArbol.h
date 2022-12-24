#ifndef NODOARBOL_H_
#define NODOARBOL_H_
#include <iostream>
using namespace std;
typedef int Edad;
class NodoArbol{
    private:
        NodoArbol *izquierdo;
        string nombre;
        Edad edad;
        NodoArbol *derecho;

    public:
        NodoArbol(string nombre, Edad edad){
            izquierdo = NULL;
            this -> nombre = nombre;
            this -> edad = edad;
            derecho = NULL;
        }

        void setIzquierdo(NodoArbol *izquierdo);
        NodoArbol* getIzquierdo();
        void setNombre(string nombre);
        string getNombre();
        void setEdad(Edad edad);
        Edad getEdad();
        void setDerecho(NodoArbol *derecho);
        NodoArbol* getDerecho();
};

void NodoArbol::setIzquierdo(NodoArbol *izquierdo){
    this -> izquierdo = izquierdo;
}

NodoArbol* NodoArbol::getIzquierdo(){
    return this -> izquierdo;
}

void NodoArbol::setNombre(string nombre){
    this -> nombre = nombre;
}

string NodoArbol::getNombre(){
    return this -> nombre;
}

void NodoArbol::setEdad(Edad edad){
    this -> edad = edad;
}

Edad NodoArbol::getEdad(){
    return this -> edad;
}

void NodoArbol::setDerecho(NodoArbol *derecho){
    this -> derecho = derecho;
}

NodoArbol* NodoArbol::getDerecho(){
    return this -> derecho;
}

#endif
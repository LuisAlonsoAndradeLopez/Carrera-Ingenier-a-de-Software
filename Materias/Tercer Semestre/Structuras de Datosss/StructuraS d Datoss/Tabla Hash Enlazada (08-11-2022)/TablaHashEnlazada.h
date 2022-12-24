#ifndef TABLAHASHENLAZADA_H_
#define TABLAHASHENLAZADA_H_
#include "Nodo1Enlace.h"
const int MAX_ELEM = 5;
class TablaHashEnlazada{
    protected:
        Nodo1Enlace *tablaHash[MAX_ELEM];

    public:
        int hashModulo(int clave);
        void insertar(Diccionario diccionario);
        void mostrar(int clave);
};

int TablaHashEnlazada::hashModulo(int clave){
    return clave % MAX_ELEM;
}

void TablaHashEnlazada::insertar(Diccionario diccionario){

    //Verificar si en la posición en donde se va a introducir el elemento ya hay un elemento o no
    if(tablaHash[this -> hashModulo(diccionario.clave)] != NULL){
        Nodo1Enlace *auxiliar = tablaHash[this -> hashModulo(diccionario.clave)];
        while(auxiliar != NULL){
            if(auxiliar -> getSiguiente() == NULL){
                Nodo1Enlace *nuevo = new Nodo1Enlace(diccionario);
                auxiliar -> setSiguiente(nuevo);
                break;
            }

            auxiliar = auxiliar -> getSiguiente();
        }
        
    }else{
        tablaHash[this -> hashModulo(diccionario.clave)] = new Nodo1Enlace(diccionario);
    }

}

void TablaHashEnlazada::mostrar(int clave){
    Nodo1Enlace *auxiliar = tablaHash[this -> hashModulo(clave)];
    while(auxiliar != NULL){
        cout << auxiliar->getDiccionario().clave << " ";
        cout << auxiliar->getDiccionario().dato << endl;

        auxiliar = auxiliar -> getSiguiente();
    }
}
#endif
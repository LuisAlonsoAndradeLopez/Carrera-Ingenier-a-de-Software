#ifndef TABLAHASH_H_
#define TABLAHASH_H_
#include "ListaEnlazada.h"
const int MAX_TABLA = 5;
class TablaHash{
    protected:
        ListaEnlazada tablaHash[MAX_TABLA];

    public:
        int hashModular(int clave);

        void insertar(Diccionario diccionario);
        void mostrar(int clave);
};

int TablaHash::hashModular(int clave){
    return clave % MAX_TABLA;
}

void TablaHash::insertar(Diccionario diccionario){
    tablaHash[this -> hashModular(diccionario.clave)].insertar(diccionario);
}

void TablaHash::mostrar(int clave){
    tablaHash[this -> hashModular(clave)].mostrar();
}
#endif
#include "Diccionario.h"
#ifndef TABLAHASH_H_
#define TABLAHASH_H_
const int NUM_ELEMENTOS = 17;
class TablaHash{
    protected:
        Diccionario tablaHash[NUM_ELEMENTOS];
    
    public:

        //Funciones de Hash
        int hashModular(int clave);
        int hashPlegamiento(int clave);
        int hashCuadrados(int clave);
        int hashMultiplicacion(int clave);

        void insertar(Diccionario diccionario);
        void eliminar(int clave);
        void buscar(int clave);
};

int TablaHash::hashModular(int clave){
    return clave % NUM_ELEMENTOS;
}

int TablaHash::hashPlegamiento(int clave){

}

int TablaHash::hashPlegamiento(int clave){
    
}

int TablaHash::hashPlegamiento(int clave){
    
}
#endif
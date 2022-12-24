#ifndef TABLAHASH_H_
#define TABLAHASH_H_
#include "Diccionario.h"
#include <iostream>
using namespace std;
const int TAM_TABLA = 100;
class TablaHash{
    protected:
        Diccionario tablaHash[TAM_TABLA];
        unsigned int indicesOcupados;

    public:
        TablaHash(){
            for(int i = 0; i < TAM_TABLA; i++){
                tablaHash[i].clave = -1;
            }

            indicesOcupados = 0;
        }

        bool tablaLlena();

        int hashModular(int clave);
        int hashPlegamiento(int clave);
        int hashMitadDelCuadrado(int clave);
        int hashMultiplicacion(int clave);

        void insertarPorHashModular(Diccionario diccionario);
        void insertarPorHashPlegamiento(Diccionario diccionario);
        void insertarPorHashMitadDelCuadrado(Diccionario diccionario);
        void insertarPorHashMultiplicacion(Diccionario diccionario);

        int resolucionPorExploracionLineal(int clave);
        int resolucionPorExploracionCuadratica(int clave);
        int resolucionPorDobleDireccionDispersa(int clave);
};

bool TablaHash::tablaLlena(){
    return indicesOcupados == TAM_TABLA;
}



int TablaHash::hashModular(int clave){
    return clave % TAM_TABLA;
}

int TablaHash::hashPlegamiento(int clave){
    int primeraMitad;
    int segundaMitad;
    int laClave = clave;

    primeraMitad = laClave / 10;
    segundaMitad = laClave % 10;
    laClave = primeraMitad + segundaMitad;
        
    if(laClave >= TAM_TABLA){
        laClave = laClave % 10;
    }

    return laClave;
}

int TablaHash::hashMitadDelCuadrado(int clave){
    long long int auxiliar;
    auxiliar = (clave * clave) % 1000000;
    //cout << "paso 1: " << auxiliar << endl;
    auxiliar = auxiliar - (auxiliar % 1000);
    //cout << "paso 2: " << auxiliar << endl;
    auxiliar = auxiliar / 10000;
    //cout << "paso 3: " << auxiliar << endl;

    int mitadDelCuadrado = (int)auxiliar;
    return mitadDelCuadrado;
}

int TablaHash::hashMultiplicacion(int clave){
    const float constante = 0.61825;

    //Paso 1: Multiplicar la clave por la constante
    int paso1 = clave * constante;

    //Paso 2: Sacarle los decimales al resultado del paso 1
    float paso2 = (clave * constante) - paso1;

    //Paso 3: Multiplicar el tamaño de la tabla por el resultado del paso 2
    int paso3 = TAM_TABLA * paso2;

    return paso3;
}



void TablaHash::insertarPorHashModular(Diccionario diccionario){
    if(!tablaLlena()){
        tablaHash[hashModular(diccionario.clave)] = diccionario;
        indicesOcupados++;
    }else{
        cout << "La tabla esta llena" << endl;
    }
    
}

void TablaHash::insertarPorHashPlegamiento(Diccionario diccionario){
    if(!tablaLlena()){
        tablaHash[hashPlegamiento(diccionario.clave)] = diccionario;
        indicesOcupados++;
    }else{
        cout << "La tabla esta llena" << endl;
    }
}

void TablaHash::insertarPorHashMitadDelCuadrado(Diccionario diccionario){
    if(!tablaLlena()){
        tablaHash[hashMitadDelCuadrado(diccionario.clave)] = diccionario;  
        indicesOcupados++;  
    }else{
        cout << "La tabla esta llena" << endl;
    }
}

void TablaHash::insertarPorHashMultiplicacion(Diccionario diccionario){
    if(!tablaLlena()){
        tablaHash[hashMultiplicacion(diccionario.clave)] = diccionario;
        indicesOcupados++;    
    }else{
        cout << "La tabla esta llena" << endl;
    }
}



int TablaHash::resolucionPorExploracionLineal(int clave){
    int laClave = hashModular(clave);
    bool posicionEncontrada = false;

    //Si la posicion que da de primeras esta vacio
    if(tablaHash[laClave].clave == -1){
        posicionEncontrada = true;
    }

    //Si la posicion que da de primeras genera una colision, se hace el metodo exploracion lineal
    //hasta que encuentre valor vacio
    if(!tablaLlena()){
        while( !posicionEncontrada ){
            if(tablaHash[laClave].clave != -1){
                laClave++;
            } else {
                posicionEncontrada = true;
            }

            if(laClave == TAM_TABLA){
                laClave = 0;
            }
        }
    }else{
        cout << "Tabla llena" << endl;
        return -1;
    }

    return laClave;
}

int TablaHash::resolucionPorExploracionCuadratica(int clave){
    int laClave = hashModular(clave);
    bool posicionEncontrada = false;
    int elCuadrado = 0; //Este es la clave de la exploracion cuadrática, este es el cuadrado que aumenta asi: 1x1 = 1, 2x2 = 4, 3x3 = 9..., y se suma al resultado

    //Si la posicion que da de primeras esta vacio
    if(tablaHash[laClave].clave == -1){
        posicionEncontrada = true;
    }

    //Si la posicion que da de primeras genera una colision, se hace el metodo exploracion cuadratica
    //hasta que encuentre valor vacio
    if(!tablaLlena()){
        while( !posicionEncontrada ){
            if(tablaHash[laClave].clave != -1){
                elCuadrado++;
                laClave += elCuadrado * elCuadrado;
                if(laClave >= TAM_TABLA){
                    laClave -= TAM_TABLA;
                }
            } else {
                posicionEncontrada = true;
            }

        }
    }else{
        cout << "Tabla llena" << endl;
        return -1;
    }

    return laClave;
}

int TablaHash::resolucionPorDobleDireccionDispersa(int clave){
    int laClave;
    bool posicionEncontrada = false;
    int contador = 0; //Contador para auxiliar de la doble Direccion Dispersa

    //Si la posicion que da de primeras genera una colision, se hace el metodo exploracion lineal
    //hasta que encuentre valor vacio
    if(!tablaLlena()){
        while( !posicionEncontrada ){
            if(tablaHash[laClave].clave != -1){
                laClave = ( (hashModular(clave)) + (contador * hashMultiplicacion(clave)) ) % TAM_TABLA;
                contador++;
            } else {
                posicionEncontrada = true;
            }
        }
    }else{
        cout << "Tabla llena" << endl;
        return -1;
    }

    return laClave;
}
#endif
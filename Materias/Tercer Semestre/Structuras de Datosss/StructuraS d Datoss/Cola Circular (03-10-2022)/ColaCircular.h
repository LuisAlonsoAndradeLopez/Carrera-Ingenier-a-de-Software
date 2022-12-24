#ifndef COLACIRCULAR_H_
#define COLACIRCULAR_H_
#include <iostream>
#include "ColaLineal.h"
using namespace std;
class ColaCircular : public ColaLineal{
    protected:
        unsigned int indicesOcupados;

    public:
        ColaCircular(){

            //Son las posiciones de el arreglo
            frente = 0;
            ultimo = MAX - 1;
            indicesOcupados = 0;

            //Llenar el arreglo de 0s para poder utilizarlo
            /*
            for(int i = 0; i < MAX; i++){
                listaCola[i] = 0;
            }*/
        }

        int siguiente(int r);
        int anterior(int r);
        void insertar(Dato elemento);
        bool colaLlena();
        void mostrar();
        void quitar();
        bool colaVacia();
};

int ColaCircular::siguiente(int r){
    return (r + 1) % MAX;
}

int ColaCircular::anterior(int r){
    int valorAnterior;
    if(r > 0){
        valorAnterior = r--;
    }else{
        valorAnterior = MAX - 1;
    }
    return valorAnterior;
}

void ColaCircular::insertar(Dato elemento){
    if(!colaLlena()){
        ultimo = siguiente(ultimo);
        listaCola[ultimo] = elemento;
        indicesOcupados++;
    }else{
        cout << "Cola Llena" << endl;
    }
}

bool ColaCircular::colaLlena(){
    return indicesOcupados == MAX;
}

void ColaCircular::mostrar(){
    for(int i = 0; i < MAX; i++){
        cout << listaCola[i] << endl;
    }
}

bool ColaCircular::colaVacia(){
    return indicesOcupados == 0;
}

void ColaCircular::quitar(){
    if(!colaVacia()){
        int *eliminante;
        eliminante = &listaCola[frente];
        frente = siguiente(frente);
        *eliminante = NULL;
        indicesOcupados--;
    }else{
        cout << "La cola esta vacia" << endl;
    }
}
#endif


/*
bool ColaCircular::colaLlena(){
    return frente == siguiente(siguiente(ultimo));
}*/
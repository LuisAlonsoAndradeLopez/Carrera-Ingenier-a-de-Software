#ifndef PILASTATICA_H_
#define PILASTATICA_H_
#include <iostream>
using namespace std;
typedef int Dato;
const int MAXELEM = 10;
class PilaStatica{
    private:
        int cima;
        Dato estructuraPila[MAXELEM];

    public:
        PilaStatica(){
            cima = -1;
        }

        void insertar(Dato elemento);
        Dato quitar();
        bool pilaVacia();
        bool pilaLlena();
        void mostrarPila();
};

void PilaStatica::insertar(Dato elemento){
    if(pilaLlena())
        throw "Pila Llena";
    cima++;
    this -> estructuraPila[cima] = elemento;
}

Dato PilaStatica::quitar(){
    Dato aux;
    if(pilaVacia())
        throw "Pila Vacía"; //<-- ESTO PARA BOTAR UNA EXCEPCION
    aux = estructuraPila[cima];
    estructuraPila[cima] = 0;
    cima--;
    return aux;
}

bool PilaStatica::pilaLlena(){
    return cima == MAXELEM - 1;
}

bool PilaStatica::pilaVacia(){
    return cima == -1;
}

void PilaStatica::mostrarPila(){
    for(int i = 0; i <= cima; i++){
        cout << estructuraPila[i] << endl;
    }
}

#endif

/*
Dato PilaStatica::quitar(){
    Dato aux;
    if(!pilaVacia()){
        aux = estructuraPila[cima];
        estructuraPila[cima] = 0;
        cima--;
    }else{
        cout << "Pila Vacia" << endl;
    }
    return aux;
}

void PilaStatica::insertar(Dato elemento){
    if(!pilaLlena()){
        cima++;
        this -> estructuraPila[cima] = elemento;
    }else{
        cout << "La pila esta llena" << endl;
    }
}
*/
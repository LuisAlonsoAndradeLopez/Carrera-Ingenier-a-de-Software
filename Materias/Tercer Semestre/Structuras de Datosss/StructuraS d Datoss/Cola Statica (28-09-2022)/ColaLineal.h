#ifndef COLALINEAL_H_
#define COLALINEAL_H_
#include <iostream>
using namespace std;
typedef int Dato;
const int MAX = 5;
class ColaLineal{
    protected:
        int frente;
        int ultimo;
        Dato listaCola[MAX];
    
    public:
        ColaLineal(){
            frente = 0;
            ultimo = -1;
        }

        void insertar(Dato &elemento);
        Dato quitar();
        bool colaVacia();
        bool colaLlena();
        void mostrar();
};

void ColaLineal::insertar(Dato &elemento){
    if(!colaLlena()){
        listaCola[++ultimo] = elemento;
    }else{
        cout << "No se puede insertar nada" << endl;
    }
}

Dato ColaLineal::quitar(){
    Dato quitarValor;
    if(!colaVacia()){
        quitarValor = listaCola[frente];
        for(int i = 0; i < ultimo; i++){
            listaCola[i] = listaCola[i + 1];
        }
        ultimo--;
    }else{
        cout << "No puedes sacar nada ya" << endl;
    }
    return quitarValor;
}

bool ColaLineal::colaVacia(){
    if(ultimo == -1){
        return true;
    }else{
        return false;
    }
}

bool ColaLineal::colaLlena(){
    if(ultimo == (MAX - 1)){
        return true;
    }else{
        return false;
    }
}

void ColaLineal::mostrar(){
    for(int i = 0; i <= ultimo; i++){
        cout << listaCola[i] << endl;
    }
}
#endif


/*
Dato ColaLineal::quitar(){
    if(!colaVacia()){
        return listaCola[frente];
    }else{
        cout << "No puedes sacar nada ya" << endl;
    }
}
*/
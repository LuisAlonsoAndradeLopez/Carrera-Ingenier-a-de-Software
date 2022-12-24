#ifndef NODOPILA_H_
#define NODOPILA_H_
#include <iostream>
typedef int Dato;
using namespace std;
class NodoPila{
    private:
        Dato elemento;
        NodoPila *enlace;

    public:
        NodoPila(Dato x){
            elemento = x;
            enlace = NULL;
        }

        Dato getElemento(){
            return this -> elemento;
        }

        void setElemento(Dato e){
            elemento = e;
        }

        NodoPila* getEnlace(){
            return this -> enlace;
        }

        void setEnlace(NodoPila *e){
            enlace = e;
        }
};
#endif
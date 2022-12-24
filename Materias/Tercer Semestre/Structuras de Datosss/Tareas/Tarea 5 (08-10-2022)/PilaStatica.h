#ifndef PILASTATICA_H_
#define PILASTATICA_H_
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
typedef char Dato;
const int maxElementos = 50;
class PilaStatica{
    protected:
        Dato pila[maxElementos];
        int numElementosPila;
        int cima;
    public:
        PilaStatica(){
            numElementosPila = 0;
            cima = -1;
        }

        void agregarElemento(Dato elemento);
        void quitarElemento();
        bool estaVacio();
        bool estaLleno();
        void mostrarPila();
        bool esPalindromo();
};

void PilaStatica::agregarElemento(Dato elemento){
    if(!estaLleno()){
        cima++;
        pila[cima] = elemento;
        numElementosPila++;
    }else{
        cout << "Pila Yena" << endl;
    } 
}

void PilaStatica::quitarElemento(){
    if(!estaVacio()){
        pila[cima] = 0;
        cima--;
        numElementosPila--;
    }else{
        cout << "La pila esta vacia" << endl;
    }
}

bool PilaStatica::estaLleno(){
    return numElementosPila == maxElementos;
}

bool PilaStatica::estaVacio(){
    return numElementosPila == 0;
}

void PilaStatica::mostrarPila(){
    for(int i = 0; i < numElementosPila; i++){
        cout << pila[i] << endl;
    }
}

bool PilaStatica::esPalindromo(){
    string auxiliar, auxiliar2, stringSinEspacios, stringSinEspaciosInvertido;
    int contadorAuxiliar1 = 0;
    int contadorAuxiliar2 = 0;
    for(int i = 0; i <= cima; i++){
        auxiliar += pila[i];
    }

    for(int i = 0; i <= cima; i++){
        if(auxiliar[i] >= 'A' && auxiliar[i] <= 'Z'){
            auxiliar[i] = tolower(auxiliar[i]);
        }
        
        if(auxiliar[i] != ' '){
            stringSinEspacios += auxiliar[i];
        }
    }

    for(int i = cima; i >= 0; i--){
        auxiliar2 += pila[i];
        contadorAuxiliar2++;
    }

    for(int i = 0; i <= cima; i++){
        if(auxiliar2[i] >= 'A' && auxiliar2[i] <= 'Z'){
            auxiliar2[i] = tolower(auxiliar2[i]);
        }

        if(auxiliar2[i] != ' '){
            stringSinEspaciosInvertido += auxiliar2[i];
            contadorAuxiliar2++;
        }
    }

    //cout << stringSinEspacios << endl;
    //cout << stringSinEspaciosInvertido << endl;

    return stringSinEspacios == stringSinEspaciosInvertido;
}
#endif
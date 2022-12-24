#include <iostream>
#include "ArbolBinarioDeBusqueda.h"
using namespace std;
int main(){

    //Arbol i "M,Y,T,E,R"
    ArbolBinarioDeBusqueda abbi;
    abbi.insertar('M');
    abbi.insertar('Y');
    abbi.insertar('T');
    abbi.insertar('E');
    abbi.insertar('R');
    cout << "Arbol i en preorden: " << endl;
    abbi.preorden();
    cout << endl;
    cout << "Arbol i en enorden: " << endl;
    abbi.enorden();
    cout << endl;
    cout << "Arbol i en postorden: " << endl;
    abbi.postorden();
    cout << endl;

    //Arbol ii "T,Y,M,E,R"
    ArbolBinarioDeBusqueda abbii;
    abbii.insertar('T');
    abbii.insertar('Y');
    abbii.insertar('M');
    abbii.insertar('E');
    abbii.insertar('R');
    cout << "Arbol ii en preorden: " << endl;
    abbii.preorden();
    cout << endl;
    cout << "Arbol ii en enorden: " << endl;
    abbii.enorden();
    cout << endl;
    cout << "Arbol ii en postorden: " << endl;
    abbii.postorden();
    cout << endl;

    //Arbol iii "R,E,M,Y,T"
    ArbolBinarioDeBusqueda abbiii;
    abbiii.insertar('R');
    abbiii.insertar('E');
    abbiii.insertar('M');
    abbiii.insertar('Y');
    abbiii.insertar('T');
    cout << "Arbol iii en preorden: " << endl;
    abbiii.preorden();
    cout << endl;
    cout << "Arbol iii en enorden: " << endl;
    abbiii.enorden();
    cout << endl;
    cout << "Arbol iii en postorden: " << endl;
    abbiii.postorden();
    cout << endl;

    //Arbol iv "C,O,R,N,F,L,A,K,E,S"
    ArbolBinarioDeBusqueda abbiv;
    abbiv.insertar('C');
    abbiv.insertar('O');
    abbiv.insertar('R');
    abbiv.insertar('N');
    abbiv.insertar('F');
    abbiv.insertar('L');
    abbiv.insertar('A');
    abbiv.insertar('K');
    abbiv.insertar('E');
    abbiv.insertar('S');
    cout << "Arbol iv en preorden: " << endl;
    abbiv.preorden();
    cout << endl;
    cout << "Arbol iv en enorden: " << endl;
    abbiv.enorden();
    cout << endl;
    cout << "Arbol iv en postorden: " << endl;
    abbiv.postorden();
    cout << endl;

    return 0;
}
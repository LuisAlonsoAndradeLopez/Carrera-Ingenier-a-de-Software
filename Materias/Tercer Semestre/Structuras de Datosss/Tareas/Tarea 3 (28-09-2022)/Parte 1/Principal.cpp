//Crear una lista enlazada y mostrarla

#include <iostream>
#include "Nodo.h"
#include "Lista.h"

using namespace std;

int main(){
    Lista ListaA, ListaB, ListaC;
    //Parte1 Ejercicio 1a: generar lista A por la cabeza:
    cout << "Crear la ListaA" << endl;
    ListaA.crearLista();
    cout << endl;

    //Parte2 Ejercicio 1a: generar lista B por la cola:
    cout << "Crear la ListaB" << endl;
    ListaB.insertarUltimo(4);
    ListaB.insertarUltimo(9);
    ListaB.insertarUltimo(80);
    ListaB.insertarUltimo(5);
    ListaB.insertarUltimo(3);
    ListaB.insertarUltimo(2);
    ListaB.visualizar();
    cout << endl;

    //Parte3 Ejercicio 1a: los valores de la lista A y B al sumarlos generarán los valores de la lista C:
    cout << "Crear la ListaC" << endl;
    ListaC.sumaDeDosListas(ListaA, ListaB);
    cout << "Mostrar ListaC" << endl;
    ListaC.visualizar();
    cout << endl;

    //Ejercicio 1b: de la lista C buscar y eliminar el o los nodos cuyos valores sean mayores a 20;
    cout << "Eliminar nodos mayores a 20" << endl;
    ListaC.eliminarValoresMayoresA20();
    ListaC.visualizar();
    cout << endl;

    //Ejercicio 1c: Insertar en la lista C estos valores:
    //25 antes del valor 10
    //2 entre el valor 10 y 13
    Nodo *veinticinco, *dos;
    veinticinco = new Nodo(25);
    dos = new Nodo(2);
    cout << "Agregar 25 y 2" << endl;
    ListaC.insertarNodo(veinticinco, 0); //Poniendo 0 para poner nodo por cabeza
    ListaC.insertarNodo(dos, 2);
    ListaC.visualizar();
    cout << endl;
    
    
    return 0;
}
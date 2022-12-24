#ifndef ARBOLBINARIODEBUSQUEDA_H_
#define ARBOLBINARIODEBUSQUEDA_H_
#include "NodoArbol.h"
#include <iostream>
using namespace std;

void insertador(NodoArbol*, NodoArbol*);
void enordenanear(NodoArbol*);
void eliminadorDeNodos(NodoArbol*, NodoArbol*, Dato, NodoArbol**);
void eliminadorParaNodoCon2Hijos(NodoArbol*, NodoArbol*, NodoArbol*, bool);
bool verificadorHayDatoEnElArbol(NodoArbol *, Dato, bool);

class ArbolBinarioDeBusqueda{
    protected:
        NodoArbol *raiz; //La raiz del arbol

    public:
        ArbolBinarioDeBusqueda(){
            raiz = NULL;
        }

        void insertar(Dato dato);
        void enorden();
        //NodoArbol* buscarDato(Dato dato);
        //int numeroNodos();
        void eliminarNodo(Dato dato);

};

void ArbolBinarioDeBusqueda::insertar(Dato dato){
    NodoArbol *nuevo = new NodoArbol(dato);
    if(raiz != NULL){
        NodoArbol *auxiliar = raiz;
        insertador(auxiliar, nuevo);
    }else{
        raiz = nuevo;
    }
}

void insertador(NodoArbol *auxiliar, NodoArbol *nuevo){
    if(nuevo -> getDato() < auxiliar -> getDato()){
        if(auxiliar -> getIzquierdo() != NULL){
            insertador(auxiliar -> getIzquierdo(), nuevo);
        }else{
            auxiliar -> setIzquierdo(nuevo);
        }
    }

    if(nuevo -> getDato() > auxiliar -> getDato()){
        if(auxiliar -> getDerecho() != NULL){
            insertador(auxiliar -> getDerecho(), nuevo);
        }else{
            auxiliar -> setDerecho(nuevo);
        }
    }
}

void ArbolBinarioDeBusqueda::enorden(){
    if(raiz != NULL){
        NodoArbol *auxiliar = raiz;
        enordenanear(auxiliar);
    }else{
        cout << "Arbol Vacio" << endl;
    }
}

void enordenanear(NodoArbol *auxiliar){
    if(auxiliar != NULL){
        enordenanear(auxiliar -> getIzquierdo());
        cout << auxiliar -> getDato() << endl;
        enordenanear(auxiliar -> getDerecho());
    }
}


//Metodo para eliminar nodos del arvol
void ArbolBinarioDeBusqueda::eliminarNodo(Dato dato){

    //Si el arbol no esta vacio, procede a llamar la funcion que hace el algoritmo, si esta vacio, no lo hace
    //y suelta mensaje de que el arbol esta vacio
    if(raiz != NULL){

        //Primero se hace una verificacion si el dato que quieres eliminar se encuentra en el arbol
        //Si está, se procede a entrar a la funcion para ejecutar los algoritmos de busqueda y eliminacion del nodo
        //Si no, suelta mensaje de que no se encontro en el arbol un nodo con el valos que quieres quitar
        bool hayDato = false;
        bool hayDatoQueQuieres = verificadorHayDatoEnElArbol(raiz, dato, hayDato);
        if(hayDatoQueQuieres){
            NodoArbol *auxiliar = raiz; //El punterazo clave, este es el que se va a eliminar
            NodoArbol *auxiliar2 = NULL; //Este va a ser el enlace de arriba del que tiene seleccionado auxiliar
            NodoArbol **eliminadorDeLaRaiz;
            eliminadorDeLaRaiz = &raiz;
            eliminadorDeNodos(auxiliar, auxiliar2, dato, eliminadorDeLaRaiz);
        }else{
            cout << "El arbol no tiene el dato que quieres eliminar" << endl;
            return;
        }
        
    }else{
        cout << "Arbol Vacio" << endl;
    }
}

void eliminadorDeNodos(NodoArbol *auxiliar, NodoArbol *auxiliar2, Dato dato, NodoArbol **eliminadorDeLaRaiz){
    //HORA DEL QUEBRANTADERO DE CABEZAS XDDDD
    //Primero preguntar si el valor señalado es nulo, se pone esta condicion por que si no pasan cosas raras
    if(auxiliar != NULL){

        //Si el dato nodo auxiliar es igual al dato que mandas, entonces se procede a seguir las siguientes condiciones para
        //la eliminación, si nó, hace recursividad seleccionando los nodos de sus enlaces
        if(auxiliar -> getDato() == dato){

            //Caso: Si es un nodo hoja
            if( (auxiliar -> getIzquierdo() == NULL) && (auxiliar -> getDerecho() == NULL) ){

                //Si el nodo hoja es la raiz
                if(auxiliar2 == NULL){
                    *eliminadorDeLaRaiz = NULL;
                    return;
                }

                //Si el nodo que se va a eliminar es enlace izquierdo del nodo que tiene arriba
                //Se pone null para evitar cosas raras
                if(auxiliar2 -> getIzquierdo() == auxiliar){
                    auxiliar2 -> setIzquierdo(NULL); 
                }
                
                //Si el nodo que se va a eliminar es enlace derecho del nodo que tiene arriba
                //Se pone null para evitar cosas raras
                if(auxiliar2 -> getDerecho() == auxiliar){
                    auxiliar2 -> setDerecho(NULL);
                }
                delete auxiliar;
                return;
            }

            //Caso: Nodo con hijo solo en la izquierda
            if( (auxiliar -> getIzquierdo() != NULL) && (auxiliar -> getDerecho() == NULL) ){

                //Si el nodo que se va a eliminar es enlace izquierdo del nodo que tiene arriba
                //el enlace izquierdo de arriba pasa a ser el enlace izquierdo del auxiliar
                if(auxiliar2 -> getIzquierdo() == auxiliar){
                    auxiliar2 -> setIzquierdo(auxiliar -> getIzquierdo()); 
                }

                //Si el nodo que se va a eliminar es enlace derecho del nodo que tiene arriba
                //el enlace derecho de arriba pasa a ser el enlace derecho del auxiliar
                if(auxiliar2 -> getDerecho() == auxiliar){
                    auxiliar2 -> setDerecho(auxiliar -> getIzquierdo());
                }
                delete auxiliar;
                return;
            }

            //Caso: Nodo con hijo solo en la derecha
            if( (auxiliar -> getIzquierdo() == NULL) && (auxiliar -> getDerecho() != NULL) ){
                //Si el nodo que se va a eliminar es enlace izquierdo del nodo que tiene arriba
                if(auxiliar2 -> getIzquierdo() == auxiliar){
                    auxiliar2 -> setIzquierdo(auxiliar -> getDerecho()); 
                }

                //Si el nodo que se va a eliminar es enlace derecho del nodo que tiene arriba
                if(auxiliar2 -> getDerecho() == auxiliar){
                    auxiliar2 -> setDerecho(auxiliar -> getDerecho());
                }
                delete auxiliar;
                return;
            }

            //Caso: Si es un nodo con 2 hijos
            if( (auxiliar -> getIzquierdo() != NULL) && (auxiliar -> getDerecho() != NULL) ){
                NodoArbol *auxiliar3 = auxiliar -> getIzquierdo();
                NodoArbol *auxiliar4 = auxiliar -> getDerecho();
                bool activadorCasoFinal = true;

                //Caso: Buscar el mayor del subarbol izquierdo
                if(auxiliar3 -> getDerecho() != NULL){
                    NodoArbol *auxiliar5 = auxiliar;
                    bool aDondeIr = true; //true = izquierda, false = derecha
                    eliminadorParaNodoCon2Hijos(auxiliar, auxiliar3, auxiliar5, aDondeIr);
                    return;
                }

                //Caso: Buscar el menor del subarbol derecho
                if(auxiliar4 -> getIzquierdo() != NULL){
                    NodoArbol *auxiliar5 = auxiliar;
                    bool aDondeIr = false; //true = izquierda, false = derecha
                    eliminadorParaNodoCon2Hijos(auxiliar, auxiliar4, auxiliar5, aDondeIr);
                    return;
                }

                //Caso: NO se puede buscar el mayor del subarbol izquierdo ni del subarbol derecho

                //Se va a buscar en el subarbol izquierdo nadamas
                //Si el enlace izquierdo del auxiliar3 no es nulo, se hace cambio de dato con el
                //nodo que se elimina y el enlace izquierdo de el nodo que se elimina pasa a ser
                //el enlace izquierdo del nodo seleccionado
                //Si no, entonces el enlace izquierdo del auxiliar3 se pone nulo, para evitar bugs

                auxiliar -> setDato(auxiliar3 -> getDato());
                if(auxiliar3 -> getIzquierdo() != NULL){ 
                    auxiliar -> setIzquierdo(auxiliar3 -> getIzquierdo());
                }else{
                    auxiliar -> setIzquierdo(NULL);
                }
                delete auxiliar3;
                return;
                
                
            }

        }else{
            //Ajuste de auxiliar2 para que siga siendo el enlace de arriba de auxiliar
            auxiliar2 = auxiliar;
            eliminadorDeNodos(auxiliar -> getIzquierdo(), auxiliar2, dato, eliminadorDeLaRaiz);
            eliminadorDeNodos(auxiliar -> getDerecho(), auxiliar2, dato, eliminadorDeLaRaiz);
        }
        
    }
}

void eliminadorParaNodoCon2Hijos(NodoArbol *auxiliar, NodoArbol *auxiliarX, NodoArbol *auxiliar5, bool aDondeIr){
    /*
    Recuerda:
    auxiliar: Nodo que se va a eliminar, el que se toma como referencia
    auxiliarX: El nodo raiz del subarbol izquierdo o derecho
    auxiliar5: El enlace izquierdo o derecho del nodo raiz del subarbol izquierdo o derecho
    */

    //Ir al subarbol izquierdo
    if(aDondeIr){

        //Si el enlace derecho de auxiliarX es nulo, se procede a la siguiente condicion para modificar el nodo
        //que se va a eliminar, si no es nulo, hace recursion hasta encontrar un nodo que tenga nulo en el enlace derecho
        if( (auxiliarX -> getDerecho() == NULL) ){
            auxiliar -> setDato(auxiliarX -> getDato());

            //Si el nodo que tenia nulo el enlace derecho, en su enlace izquierdo tiene 2 o mas enlaces consecutivos, agarra el segundo,
            //y lo enlaza en el enlace izquierdo del nodo que tenia nulo en el enlace derecho, si tiene solo 1, entonces el enlace izquierdo del nodo que
            //tenia nulo en el enlace derecho pasa a ser nulo, para que no haya bugs.
            if(auxiliarX -> getIzquierdo() != NULL){
                auxiliar5 -> setDerecho(auxiliarX -> getIzquierdo());
            }else{
                auxiliar5 -> setDerecho(NULL);
            }

            delete auxiliarX;
            return;
        }else{
            auxiliar5 = auxiliarX;
            eliminadorParaNodoCon2Hijos(auxiliar, auxiliarX -> getDerecho(), auxiliar5, aDondeIr);
        }
    }
    
    //Ir a subarbol derecho
    if(!aDondeIr){

        //Si el enlace izquierdo de auxiliarX es nulo, se procede a la siguiente condicion para modificar el nodo
        //que se va a eliminar, si no es nulo, hace recursion hasta encontrar un nodo que tenga nulo en el enlace izquierdo
        if( (auxiliarX -> getIzquierdo() == NULL) ){
            auxiliar -> setDato(auxiliarX -> getDato());

            //Si el nodo que tenia nulo el enlace izquierdo, en su enlace derecho tiene 2 o mas enlaces consecutivos, agarra el segundo,
            //y lo enlaza en el enlace derecho del nodo que tenia nulo en el enlace izquierdo, si tiene solo 1, entonces el enlace derecho del nodo que
            //tenia nulo en el enlace izquierdo pasa a ser nulo, para que no haya bugs.
            if(auxiliarX -> getDerecho() != NULL){
                auxiliar5 -> setIzquierdo(auxiliarX -> getDerecho());
            }else{
                auxiliar5 -> setIzquierdo(NULL);
            }

            delete auxiliarX;
        }else{
            auxiliar5 = auxiliarX;
            eliminadorParaNodoCon2Hijos(auxiliar, auxiliarX -> getIzquierdo(), auxiliar5, aDondeIr);
        }
    }

}

bool verificadorHayDatoEnElArbol(NodoArbol *auxiliar, Dato dato, bool hayDato){

    if(!hayDato){
        if(auxiliar != NULL){
            
            //Si el dato que quieres eliminar está en el arbol, ahora el hayDato siempre será true, por la recursion
            if(auxiliar -> getDato() != dato){
                hayDato = verificadorHayDatoEnElArbol(auxiliar -> getIzquierdo(), dato, hayDato);
                hayDato = verificadorHayDatoEnElArbol(auxiliar -> getDerecho(), dato, hayDato);
            }else{
                hayDato = true;
            }

        }
    }
    
    return hayDato;
}

#endif
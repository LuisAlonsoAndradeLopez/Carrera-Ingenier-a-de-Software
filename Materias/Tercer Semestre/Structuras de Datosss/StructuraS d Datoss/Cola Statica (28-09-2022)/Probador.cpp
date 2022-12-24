#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "ColaLineal.h"
using namespace std;
int main(){
    const int TAM = 5;
    ColaLineal cola;
    int x;
    int seleccion = 0;
    bool seguir = true;

    while(seguir == true){
        system("clear");
        cout << " \n La Cola Statica" << endl;
        cout << "Pica 1 para añadir dato a la cola" << endl;
        cout << "Pica 2 para eliminar dato de la cola" << endl;
        cout << "Pica 3 para mostrar los datos de la cola" << endl;
        cout << "Pica 4 para salir" << endl;
        cin >> seleccion;

        while(seleccion < 1 || seleccion > 4){
            system("clear");
            cout << "Tienes que poner un valor entre 1 y 4";
            cin >> seleccion;
        }

        switch(seleccion){
            case 1:
                system("clear");
                cout << "Dime el valor (en entero) que quieres que ponga a la cola" << endl;
                cin >> x;
                cola.insertar(x);
                break;

            case 2:
                system("clear");
                cout << "Quitando elemento de la cola..." << endl;
                cola.quitar();
                cout << "Pulsa un boton para continuar" << endl;
                system("pause");
                break;

            case 3:
                system("clear");
                cout << "Mostrando elementos de la cola..." << endl;
                cola.mostrar();
                cout << "Pulsa un boton para continuar" << endl;
                system("pause");
                break;

            case 4:
                system("clear");
                cout << "Adios" << endl;
                seguir = false;
                break;
        }
    }

    
    return 0;
}


/*
    for(int i = 0; i < TAM; i++){
        cin >> x;
        cola.insertar(x);
    }
    cola.mostrar();
    cout << endl;
    cout << cola.quitar() << endl;
    cout << endl;
    cola.mostrar();

    */
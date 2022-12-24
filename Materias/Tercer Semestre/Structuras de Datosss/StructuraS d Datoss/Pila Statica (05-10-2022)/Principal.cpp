#include <iostream>
#include "PilaStatica.h"
using namespace std;
typedef int Dato;
int main(){
    PilaStatica ps;
    Dato x;
    cout << "Introduce los numeros hasta -1" << endl;

    //AHHHHHHHH el try-catch
    try{
        do{
            cin >> x;
            if(x != -1)
                ps.insertar(x);
        }while(x != -1);
    
        cout << "Elementos de la pila" << endl;
        while(!ps.pilaVacia()){
            x = ps.quitar();
            cout << x << " ";
        }
    }catch(const char* error){
        cout << "Error al insertar" << error << endl;
    }
    return 0;
    
}

//POR LO QUE MAS QUIERAS, NO BORRES ESTE CODIGOOOOOOOOOOOOOOOOOOOOOOOOOOO

/*
int main(){
    PilaStatica ps;
    ps.insertar(1);
    ps.insertar(2);
    ps.insertar(3);
    ps.insertar(4);
    ps.mostrarPila();
    cout << endl;

    ps.quitar();
    ps.mostrarPila();
    return 0;
}
*/
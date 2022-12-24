/*
Elaborar un programa que llene una matriz de 5x5 con números aleatorios
entre 1 y 20, la muestre y nos permita realizar operaciones aritméticas con
esos números indicándole la fila y columna de dos de ellos y la operación
que deseamos realizar (suma, resta, multiplicación, división). Después de
realizar una operación el programa nos deberá preguntar si deseamos
hacer otra operación.
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int Matriz[5][5], ContadorFilas, ContadorColumnas, QueOperacionHacer, PosicionFila, PosicionColumna, Resultado, Digito1ParaOperacion, Digito2ParaOperacion;
    int NumerosAleatorios=rand()%20+1;
    int HacerOtraOperacionONo=1;

    //Asignacion de numeros aleatorios a la matriz

    for(ContadorColumnas=0;ContadorColumnas<5;ContadorColumnas++){
        for(ContadorFilas=0;ContadorFilas<5;ContadorFilas++){
        Matriz[ContadorFilas][ContadorColumnas]=rand()%20+1;
        cout<<Matriz[ContadorFilas][ContadorColumnas]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    //Decir que operacion hacer

    while(HacerOtraOperacionONo==1){
        cout<<"Dime que operacion quieres que haga: "<<endl;
        cout<<"Escribe 1 si quieres que haga suma"<<endl;
        cout<<"Escribe 2 si quieres que haga resta"<<endl;
        cout<<"Escribe 3 si quieres que haga multiplicacion"<<endl;
        cout<<"Escribe 4 si quieres que haga division"<<endl;
        cin>>QueOperacionHacer;
        while( QueOperacionHacer!=1 && QueOperacionHacer!=2 && QueOperacionHacer!=3 && QueOperacionHacer!=4 ){
            cout<<"Tienes que escribir 1 o 2 o 3 o 4"<<endl;
            cin>>QueOperacionHacer;
        }

        //Seleccion de posicion de matriz para ya hacer la operacion seleccionada

        switch(QueOperacionHacer){
            case 1:
                cout<<"Dime la posicion de la matriz con las que haga la suma"<<endl;
                cout<<"Fila: "; cin>>PosicionFila;
                cout<<"Columna: "; cin>>PosicionColumna;
                Digito1ParaOperacion=Matriz[PosicionFila][PosicionColumna];
                cout<<"Ahora dime la posicion del segundo digito"<<endl;
                cout<<"Fila: "; cin>>PosicionFila;
                cout<<"Columna: "; cin>>PosicionColumna;
                Digito2ParaOperacion=Matriz[PosicionFila][PosicionColumna];
                Resultado=Digito1ParaOperacion+Digito2ParaOperacion;
                cout<<"El resultado es: "<<Resultado<<endl;
            break;
            case 2:
                cout<<"Dime la posicion de la matriz con las que haga la resta"<<endl;
                cout<<"Fila: "; cin>>PosicionFila;
                cout<<"Columna: "; cin>>PosicionColumna;
                Digito1ParaOperacion=Matriz[PosicionFila][PosicionColumna];
                cout<<"Ahora dime la posicion del segundo digito"<<endl;
                cout<<"Fila: "; cin>>PosicionFila;
                cout<<"Columna: "; cin>>PosicionColumna;
                Digito2ParaOperacion=Matriz[PosicionFila][PosicionColumna];
                Resultado=Digito1ParaOperacion-Digito2ParaOperacion;
                cout<<"El resultado es: "<<Resultado<<endl;
            break;
            case 3:
                cout<<"Dime la posicion de la matriz con las que haga la multiplicacion"<<endl;
                cout<<"Fila: "; cin>>PosicionFila;
                cout<<"Columna: "; cin>>PosicionColumna;
                Digito1ParaOperacion=Matriz[PosicionFila][PosicionColumna];
                cout<<"Ahora dime la posicion del segundo digito"<<endl;
                cout<<"Fila: "; cin>>PosicionFila;
                cout<<"Columna: "; cin>>PosicionColumna;
                Digito2ParaOperacion=Matriz[PosicionFila][PosicionColumna];
                Resultado=Digito1ParaOperacion*Digito2ParaOperacion;
                cout<<"El resultado es: "<<Resultado<<endl;
            break;
            case 4:
                cout<<"Dime la posicion de la matriz con las que haga la division"<<endl;
                cout<<"Fila: "; cin>>PosicionFila;
                cout<<"Columna: "; cin>>PosicionColumna;
                Digito1ParaOperacion=Matriz[PosicionFila][PosicionColumna];
                cout<<"Ahora dime la posicion del segundo digito"<<endl;
                cout<<"Fila: "; cin>>PosicionFila;
                cout<<"Columna: "; cin>>PosicionColumna;
                Digito2ParaOperacion=Matriz[PosicionFila][PosicionColumna];
                Resultado=Digito1ParaOperacion/Digito2ParaOperacion;
                cout<<"El resultado es: "<<Resultado<<endl;
            break;
        }

        //Desicion de hacer otra operacion

        cout<<"¿Quieres hacer otra operacion?  Si: Escribe 1.   No: Escribe 0"<<endl;
        cin>>HacerOtraOperacionONo;
        while( (HacerOtraOperacionONo!=0) && (HacerOtraOperacionONo!=1) ){
            cout<<"Tiene que ser 1 o 0"<<endl;
            cin>>HacerOtraOperacionONo;
        }
    }
    return 0;
}
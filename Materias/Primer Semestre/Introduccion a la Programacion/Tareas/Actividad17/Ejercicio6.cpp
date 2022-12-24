/*
Elaborar un programa que muestre una matriz de NxN con la diagonal en 1
y los demás en 0. El usuario debe especificar el tamaño para la matriz.
*/
#include <iostream>
using namespace std;
int main(){
    int ContadorFilas, ContadorColumnas, TamañoFilas, TamañoColumnas;
    cout<<"Dime el tamaño de la matriz, TIENE QUE SER NnN"<<endl;
    cout<<"Filas: ";
    cin>>TamañoFilas;
    cout<<"Columnas: ";
    cin>>TamañoColumnas;
    int DolorEnLaMatriz [TamañoFilas][TamañoColumnas];
    if(TamañoFilas==TamañoColumnas){
    //Aqui es donde empieza a poner 0s y 1s en diagonal

        //Esto convierte todos los datos de la matriz en 0s
        for(ContadorColumnas=0;ContadorColumnas<TamañoColumnas;ContadorColumnas++){
            for(ContadorFilas=0;ContadorFilas<TamañoFilas;ContadorFilas++){
                DolorEnLaMatriz[ContadorFilas][ContadorColumnas]=0;
            }
        }

        //aqui ya convierte la diagonal en 1s
        ContadorFilas=0;
        for(ContadorColumnas=0;ContadorColumnas<TamañoColumnas;ContadorColumnas++){
            DolorEnLaMatriz[ContadorFilas][ContadorColumnas]=1;
            ContadorFilas++;
        }

        //Esto muestra la matriz
        ContadorFilas=0;
        for(ContadorColumnas=0;ContadorColumnas<TamañoColumnas;ContadorColumnas++){
            for(ContadorFilas=0;ContadorFilas<TamañoFilas;ContadorFilas++){
                cout<<DolorEnLaMatriz[ContadorFilas][ContadorColumnas];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Dije que tiene que ser NxN"<<endl;
    }
    return 0;
}
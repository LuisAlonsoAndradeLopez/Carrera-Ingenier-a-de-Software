/*
Generar 100 números aleatorios entre 1 y 1000 y determinar las frecuencias de:
Números entre 0-250
Números entre 251-500
Números entre 501-750
Números entre 751-1000
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int NumeroAleatorio=0;
    int Contador;
    int Frecuencia1=0;
    int Frecuencia2=0;
    int Frecuencia3=0;
    int Frecuencia4=0;
    cout<<"¡AHI VAN LOS NUMEROS!"<<endl;
    for(Contador=1;Contador<=100;Contador++){
        NumeroAleatorio=rand()%1000+1;
        cout<<NumeroAleatorio<<endl;
        if(NumeroAleatorio>=0&&NumeroAleatorio<=250){
            Frecuencia1=Frecuencia1+1;
        }
        if(NumeroAleatorio>=251&&NumeroAleatorio<=500){
            Frecuencia2=Frecuencia2+1;
        }
        if(NumeroAleatorio>=501&&NumeroAleatorio<=750){
            Frecuencia3=Frecuencia3+1;
        }
        if(NumeroAleatorio>=751&&NumeroAleatorio<=1000){
            Frecuencia4=Frecuencia4+1;
        }
    }
    cout<<"De los numeros aleatorios que salieron:"<<endl;
    cout<<"De numeros de 0 a 250 son: "; cout<<Frecuencia1<<endl;
    cout<<"De numeros de 251 a 500 son: "; cout<<Frecuencia2<<endl;
    cout<<"De numeros de 501 a 750 son: "; cout<<Frecuencia3<<endl;
    cout<<"De numeros de 751 a 1000 son: "; cout<<Frecuencia4<<endl;
    return 0;
}
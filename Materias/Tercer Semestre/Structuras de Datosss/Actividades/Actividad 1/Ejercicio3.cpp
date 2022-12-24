#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char cadena[100];
    char auxiliar[100];
    char caracterAuxiliar;
    int almacenador = 0;
    int j = 0;
    cin.getline(cadena, 100);

    //Va a recorrer toda la cadena "cadena"
    for(int i = 0; i < 100; i++){

        //Si algun elemento de la cadena "cadena" es un número, 
        if((cadena[i] >= 48) && (cadena[i] <= 57)){
            caracterAuxiliar = cadena[i];
            auxiliar[j] = caracterAuxiliar;
            j++;
        }
        if((cadena[i] < 48) || (cadena[i] > 57)){
            almacenador = almacenador + atoi(auxiliar);
            j = 0;
            for(int k = 0; k < 100; k++){
                auxiliar[k] = '\0';
            }
        }
    }
    cout<<almacenador<<endl;
    return 0;
}
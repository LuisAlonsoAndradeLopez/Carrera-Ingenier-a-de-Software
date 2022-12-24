#include <iostream>
using namespace std;
void invertirArreglo(int*, int);
int main(){
    int numeros[5];
    for(int i = 0; i < 5; i++){
        cin >> numeros[i];
    }
    //La division es para que de bien el tamaño de posiciones que tiene el arreglo numeros
    int tamanoNumeros = (sizeof(numeros) / sizeof(numeros[0])) - 1;
    invertirArreglo(numeros, tamanoNumeros);

    //Mostrar el arreglo numeros ya modificado
    for(int i = 0; i <= tamanoNumeros; i++){
        cout << numeros[i] << endl;
    }

    return 0;
}

void invertirArreglo(int *numeros, int tamanoNumeros){
    int *arregloAuxiliar = new int;
    arregloAuxiliar += tamanoNumeros;

    //Va a asignar el arreglo numeros a arregloAuxiliar pero con los datos invertidos
    while(*numeros >= 0 && *numeros <= 9){
        *arregloAuxiliar = *numeros;
        numeros++;    
        arregloAuxiliar--;
    }

    //Estas 2 lineas ajustan la posicion de memoria a la que apuntan numeros y arreglo auxiliar para que no apunten a datos vacios
    numeros-= tamanoNumeros + 1;
    arregloAuxiliar++;

    //Dar los valores de arregloAuxiliar a numeros
    while(*numeros >= 0 && *numeros <= 9){
        *numeros = *arregloAuxiliar;
        numeros++;
        arregloAuxiliar++;
    }

}
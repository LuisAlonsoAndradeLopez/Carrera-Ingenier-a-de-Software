#include <iostream>
using namespace std;
int sumaArreglo(int*);
int main(){
    int numeros[10];
    for(int i = 0; i < 10; i++){
        cin >> numeros[i];
    }
    cout << sumaArreglo(numeros) << endl;
    return 0;
}

int sumaArreglo(int *numeros){
    int sumaDeNumeros = 0;
    //La condicion es para que nadamas tome en cuenta los numeros y no la basura
    while(*numeros >= 0 && *numeros <= 9){
        sumaDeNumeros = sumaDeNumeros + *numeros;
        numeros++;
    }
    return sumaDeNumeros;
}
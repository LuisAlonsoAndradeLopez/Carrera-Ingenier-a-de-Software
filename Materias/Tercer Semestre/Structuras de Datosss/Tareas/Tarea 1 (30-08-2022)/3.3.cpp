#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    int Primero[21];
    int Segundo[21];
    int Tercero[7][8];

    for(i = 0; i < 10; i++){
        Primero[i] = i + 3;
    }
    cin >> j >> k;
    for(i = j; i <= k;){
        cout << Primero[i++];
    }

    return 0;
}

/*
Salida: 
7-2: Nada
3-9: 6,7,8,9,10,11,12
*/
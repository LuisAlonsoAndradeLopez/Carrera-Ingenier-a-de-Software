#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    int Primero[21];
    int Segundo[21];
    int Tercero[7][8];

    for(j = 0; j < 7;){
        cin >> Primero[j++];
    }
    i = 0;
    j = 1;
    while( (j < 6) && (Primero[j - 1] < Primero[j]) ){
        i++,j++;
    }

    for(k = -1; k < j + 2;){
        cout << Primero[++k];
    }

    return 0;
}

/*
Salida: 20,60,70,10,0,40
*/
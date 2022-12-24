#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    int Primero[21];
    int Segundo[21];
    int Tercero[7][8];

    cin >> k;
    for(i = 3; i <= k;){
        cin >> Segundo[i++];
    }
    j = 4;
    cout << Segundo[k] << " " << Segundo[j + 1];

    return 0;
}

/*
Salida: 9 1
*/
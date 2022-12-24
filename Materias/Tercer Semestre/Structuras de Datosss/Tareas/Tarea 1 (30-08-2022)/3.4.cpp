#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    int Primero[21];
    int Segundo[21];
    int Tercero[7][8];

    for(i = 0; i < 12; i++)
        cin >> Primero[i];
    for(j = 0; j < 6; j++)
        Segundo[j] = Primero[2 * j] + j;
    for(k = 3; k <=7; k++)
    cout << Primero[k + 1] << " " << Segundo[k - 1];

    return 0;
}

/*
Segundo: 2,4,11,9,4,-3
Salida: 9 11, -4 9, 6 4, -5 -3, 0 )%=""
*/
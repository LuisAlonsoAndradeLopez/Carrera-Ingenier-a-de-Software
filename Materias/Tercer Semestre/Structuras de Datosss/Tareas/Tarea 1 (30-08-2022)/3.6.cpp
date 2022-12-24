#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    int Primero[21];
    int Segundo[21];
    int Tercero[7][8];

    for(i = 0; i < 3; i++){
        for(j = 0; j < 12; j++){
            Tercero[i][j] = i + j + 1;
        }
    }
    for(i = 0; i < 3; i++){
        j = 2;
        while(j < 12){
            cout << i << " " << j << " " << Tercero[i][j] << endl;
            j += 3;
        }
    }
    return 0;
}

/*
Salida: 
0 2 3
0 5 6
0 8 basura
0 11 basura
1 2 4
1 5 7
1 8 basura
1 11 basura
2 2 5
2 5 8
2 8 basura
2 11 basura
*/

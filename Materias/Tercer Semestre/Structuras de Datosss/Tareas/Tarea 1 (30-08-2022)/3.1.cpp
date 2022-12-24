#include <iostream>
using namespace std;

int main(){
    int i,j,k;
    int Primero[21];
    int Segundo[21];
    int Tercero[7][8];

    for(i = 1;i <= 6; i++){
        cin>>Primero[i];
    }
    for(i = 3; i > 0; i--){
        cout<<Primero[2*i]<<" ";
    }

    return 0;
}

/*
Salidas: 6, -1, 7
*/
#include <iostream>
using namespace std;
int suma(int);
int main(){
    int numero;
    cin >> numero;
    cout << suma(numero) << endl;
    return 0;
}

int suma(int numero){
    if(numero <= 9){
        return numero;
    }

    if(numero > 9){
        return suma(numero/10) + numero % 10;
    }
}
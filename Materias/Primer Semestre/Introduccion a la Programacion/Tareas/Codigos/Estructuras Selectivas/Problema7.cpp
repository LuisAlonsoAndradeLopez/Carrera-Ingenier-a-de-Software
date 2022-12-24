/*
Escribe un algoritmo para saber si un número dado por el usuario es par o impar.
*/
#include <iostream>
using namespace std;
int main(){
    int Numeral;
    cout<<"Dime un numero y te digo si es par o impar: "<<endl;
    cin>>Numeral;
    if(Numeral%2==0){
        cout<<"El numero  que me diste es par"<<endl;
    }
    else{
        cout<<"El numero que me diste es impar"<<endl;
    }
    return 0;
}
/*
Elabora un algoritmo que pida una cadena que contendrá solo números
enteros y se la envíe a una función la cual imprimirá cada número, la
cantidad de veces que es. P.ej. “314” (no devolverá nada).
333
1
4444
*/
#include <iostream>
using namespace std;
void Imprimidor(string);
int main(){
    string Numerales;
    cout<<"Dime una cantidad en numeros"<<endl;
    cin>>Numerales;
    Imprimidor(Numerales);
    return 0;
}
void Imprimidor(string Numerales){
    int Contador;
    for(Contador=0;Contador<Numerales.size();Contador++){
        switch(Numerales[Contador]){
            case '1':
            cout<<"1"<<endl;
            break;
            case '2':
            cout<<"22"<<endl;
            break;
            case '3':
            cout<<"333"<<endl;
            break;
            case '4':
            cout<<"4444"<<endl;
            break;
            case '5':
            cout<<"55555"<<endl;
            break;
            case '6':
            cout<<"666666"<<endl;
            break;
            case '7':
            cout<<"7777777"<<endl;
            break;
            case '8':
            cout<<"88888888"<<endl;
            break;
            case '9':
            cout<<"999999999"<<endl;
            break;
            default:
            cout<<"No puedo hacer nada por ti, lo siento"<<endl;
        }
    }
}
/*
Elabora un algoritmo que lea tres números enteros y devuelva el mayor.
*/
#include <iostream>
using namespace std;
int main(){
    int Numero1, Numero2, Numero3;
    cout<<"Dime un numero ENTERO"<<endl;
    cin>>Numero1;
    cout<<"Dime otro numero ENTERO"<<endl;
    cin>>Numero2;
    cout<<"Dime otro numero ENTERO"<<endl;
    cin>>Numero3;
    if(Numero1>=Numero2 && Numero1>=Numero3){
        cout<<"El numero mayor es: "<<endl;
        cout<<Numero1<<endl;
    }
    if(Numero2>Numero1 && Numero2>=Numero3){
        cout<<"El numero mayor es: "<<endl;
        cout<<Numero2<<endl;
    }
    if(Numero3>Numero2 && Numero3>Numero1){
        cout<<"El numero mayor es: "<<endl;
        cout<<Numero3<<endl;
    }
    return 0;
}
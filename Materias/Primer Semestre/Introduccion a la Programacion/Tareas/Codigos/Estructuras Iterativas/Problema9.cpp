/*
Preguntar cuántos números se van a introducir, pida esos números, y muestre cuantos son pares y cuantos impares.
*/
#include <iostream>
using namespace std;
int main(){
    int CuantosNumeros;
    int Numeral;
    int Contador=1;
    int ElAcumuladorDePares=0;
    int ElAcumuladorDeImpares=0;
    cout<<"Dime cuantos numeros quieres introducir: "<<endl;
    cin>>CuantosNumeros;
    if(CuantosNumeros>0){
        while(Contador<=CuantosNumeros){
        cout<<"Dime un numero ENTERO"<<endl;
        cin>>Numeral;
        if(Numeral%2==0){
            ElAcumuladorDePares=ElAcumuladorDePares+1;
        }
        else{
            ElAcumuladorDeImpares=ElAcumuladorDeImpares+1;
        }
        Contador=Contador+1;
        }
        cout<<"El numero de pares son: "<<endl;
        cout<<ElAcumuladorDePares<<endl;
        cout<<"El numero de impares son: "<<endl;
        cout<<ElAcumuladorDeImpares<<endl;
    }
    else{
        cout<<"No puedo hacer nada por ti, lo siento"<<endl;
    }
    return 0;
}
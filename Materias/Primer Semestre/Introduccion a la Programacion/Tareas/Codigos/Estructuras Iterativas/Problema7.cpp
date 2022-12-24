/*
Leer una cantidad indefinida de números hasta que se escriba un número negativo 
y como resultado mostrar cuántos números positivos fueron en total y cuántos negativos.
*/
#include <iostream>
using namespace std;
int main(){
    int Numeral;
    int ElAcumulanteDePositivos;
    int ElAcumulanteDeNegativos;
    ElAcumulanteDePositivos=0;
    ElAcumulanteDeNegativos=0;
    cout<<"Dime un numero ENTERO, pero si me das un numero negativo, de los que me has dado te digo cuantos fueron positivos y cuantos fueron negativos"<<endl;
    cin>>Numeral;
    if(Numeral>0){
        ElAcumulanteDePositivos=ElAcumulanteDePositivos+1;
    }
    if(Numeral<0){
        ElAcumulanteDeNegativos=ElAcumulanteDeNegativos+1;
    }
    while(Numeral!=0){
        cout<<"Dime otro numero ENTERO"<<endl;
        cin>>Numeral;
        if(Numeral>0){
        ElAcumulanteDePositivos=ElAcumulanteDePositivos+1;
        }
        if(Numeral<0){
        ElAcumulanteDeNegativos=ElAcumulanteDeNegativos+1;
        }
    }
    cout<<"El total de numeros positivos que me diste es: "<<endl;
    cout<<ElAcumulanteDePositivos<<endl;
    cout<<"El total de numeros negativos que me diste es: "<<endl;
    cout<<ElAcumulanteDeNegativos<<endl;
    return 0;
}
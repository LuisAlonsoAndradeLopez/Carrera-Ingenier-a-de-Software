/*
Escribe un algoritmo que te pida el total de tu compra haga un descuento del 10% si se encuentra entre 
500 y 1000 (inclusivos) y un 20% si fue mayor a $1000.
*/
#include <iostream>
using namespace std;
int main(){
    double TotalCompra, Descuento, CuentaFinal;
    cout<<"Dime el total de tu compra"<<endl;
    cin>>TotalCompra;
    if(TotalCompra>=0){
        if(TotalCompra>=500 && TotalCompra<=1000){
            Descuento=TotalCompra*0.10;
            CuentaFinal=TotalCompra-Descuento;
            cout<<"El precio final es: "<<endl;
            cout<<CuentaFinal<<endl;
        }
        else{
            if(TotalCompra<500){
                cout<<"El precio final es: "<<endl;
                cout<<TotalCompra<<endl;
            }
            if(TotalCompra>1000){
                Descuento=TotalCompra*0.20;
                CuentaFinal=TotalCompra-Descuento;
                cout<<"El precio final es: "<<endl;
                cout<<CuentaFinal<<endl;
            }
        }
    }
    else{
        cout<<"No puedo hacer nada por ti, lo siento"<<endl;
    } 
    return  0;
}
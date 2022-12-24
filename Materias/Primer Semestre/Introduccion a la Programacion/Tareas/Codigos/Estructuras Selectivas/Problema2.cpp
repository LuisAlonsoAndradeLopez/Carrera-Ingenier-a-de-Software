/*
Escribe un algoritmo que te pida el total de tu compra 
y haga un descuento del 10% si fue mayor o igual a $500 pesos.
*/
#include <iostream>
using namespace std;
int main(){
    double TotalCompra;
    double Descuento;
    double CompraConDescuento;
    cout<<"Dime el total de tu compra, si es mayor o igual a 500 te doy descuento del 10%"<<endl;
    cin>>TotalCompra;
    if(TotalCompra>=0){
        if(TotalCompra>=500){
            Descuento=TotalCompra*0.10;
            CompraConDescuento=TotalCompra-Descuento;
            cout<<"El precio final es: "<<endl;
            cout<<CompraConDescuento<<endl;
        }
        else{
            cout<<"El precio final es: "<<endl;
            cout<<TotalCompra<<endl;
        }
    }
    else{
        cout<<"No puedo hacer cosas con cantidades negativas, no me sirven"<<endl;
    }
    return 0;
}
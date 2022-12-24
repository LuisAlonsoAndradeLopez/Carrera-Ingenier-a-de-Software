/*
En una librería se venden artículos con las siguientes condiciones:
Sí el cliente es de tipo 1 se le descuenta 30%
Sí el cliente es de tipo 2 se le descuenta 20%
Sí el cliente es de tipo 3 se le descuenta 10%
Escribe un algoritmo que lea el nombre del cliente, tipo de cliente, precio y calcule el pago final.
*/
#include <iostream>
//Esta directiva string sirve para usar el getline y el string, vale???
#include <string>
using namespace std;
int main(){
    int TipoCliente;
    string NombreCliente;
    double Descuento, PagoFinal, PrecioArticulo;
    cout<<"Dime el nombre del cliente"<<endl;
    //PON Este getline para poder guardar la linea entera
    getline(cin, NombreCliente);
    cout<<"Dime el tipo de cliente"<<endl;
    cin>>TipoCliente;
    cout<<"Dime el precio del articulo"<<endl;
    cin>>PrecioArticulo;
    if(PrecioArticulo>=0){
        switch(TipoCliente){
            case 1:
            Descuento=PrecioArticulo*0.3;
            PagoFinal=PrecioArticulo-Descuento;
            cout<<"Nombre del cliente: "<<endl;
            cout<<NombreCliente<<endl;
            cout<<"Pago final: "<<endl;
            cout<<PagoFinal<<endl;
            break;
            case 2:
            Descuento=PrecioArticulo*0.2;
            PagoFinal=PrecioArticulo-Descuento;
            cout<<"Nombre del cliente: "<<endl;
            cout<<NombreCliente<<endl;
            cout<<"Pago final: "<<endl;
            cout<<PagoFinal<<endl;
            break;
            case 3:
            Descuento=PrecioArticulo*0.1;
            PagoFinal=PrecioArticulo-Descuento;
            cout<<"Nombre del cliente: "<<endl;
            cout<<NombreCliente<<endl;
            cout<<"Pago final: "<<endl;
            cout<<PagoFinal<<endl;
            break;
            default:
            cout<<"No existe este tipo de cliente, lo siento"<<endl;
        }
    }
    else{
        cout<<"No puedo hacer nada, lo siento"<<endl;
    }
    return 0;
}
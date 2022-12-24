/*
Escribe un algoritmo que reciba un número entre 1 y 7, y muestre el nombre del día correspondiente suponiendo que el numero 1 es lunes.
*/
#include <iostream>
using namespace std;
int main(){
    int Numeral;
    cout<<"Dime un numero ENTERO y te digo que dia de la semana es: "<<endl;
    cin>>Numeral;
    switch(Numeral){
        case 1:
        cout<<"El dia es lunes"<<endl;
        break;
        case 2:
        cout<<"El dia es martes"<<endl;
        break;
        case 3:
        cout<<"El dia es miercoles"<<endl;
        break;
        case 4:
        cout<<"El dia es jueves"<<endl;
        break;
        case 5:
        cout<<"El dia es viernes"<<endl;
        break;
        case 6:
        cout<<"El dia es sabado"<<endl;
        break;
        case 7:
        cout<<"El dia es domingo"<<endl;
        break;
        default:
        cout<<"Dia no valido"<<endl;
    }
    return 0;
}
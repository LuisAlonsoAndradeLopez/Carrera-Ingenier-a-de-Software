/*
Escribe un algoritmo que te pregunte cuántos años tienes y te diga si eres mayor de edad o no.
*/
#include <iostream>
using namespace std;
int main(){
    int Edad;
    cout<<"Dime tu edad y te digo si eres mayor de edad o menor de edad"<<endl;
    cin>>Edad;
    if(Edad>=0){
        if(Edad>17){
            cout<<"Eres mayor de edad"<<endl;
        }
        else{
            cout<<"Eres menor de edad"<<endl;
        }
    }
    else{
        cout<<"No hay edades negativas, lo siento"<<endl;
    }
    return 0;
}
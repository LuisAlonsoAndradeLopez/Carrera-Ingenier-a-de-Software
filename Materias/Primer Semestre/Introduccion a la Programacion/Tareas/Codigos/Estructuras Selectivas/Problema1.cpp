/*
Escribe un algoritmo que calcule el valor absoluto de un número entero.
*/
#include <iostream>
using namespace std;
int main(){
    int Numeral;
    cout<<"Dime un numero ENTERO y te doy su valor absoluto"<<endl;
    cin>>Numeral;
    if(Numeral<0){
        Numeral=Numeral*-1;
    }
    cout<<"El valor absoluto del numero que me diste es; "<<endl;
    cout<<Numeral<<endl;
    return 0;
}
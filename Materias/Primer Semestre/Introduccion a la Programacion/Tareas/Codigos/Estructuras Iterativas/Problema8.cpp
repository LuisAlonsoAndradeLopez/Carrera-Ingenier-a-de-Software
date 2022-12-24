/*
Pedir un número entero mayor a cero y menor a 100 y que escriba sus divisores (si no cumple esas características no hace nada).
*/
#include <iostream>
using namespace std;
int main(){
    int Numeral;
    int LosDivisores=1;
    cout<<"Dime un numero ENTERO mayor a 0 y menor a 100"<<endl;
    cin>>Numeral;
    if (Numeral>0 && Numeral<100){
        cout<<"Los divisores de los numeros que me pusiste son: "<<endl;
        while(LosDivisores<=Numeral){
            if(Numeral%LosDivisores==0){
                cout<<LosDivisores<<endl;
            }
        LosDivisores=LosDivisores+1;
        }
    }
    return 0;
}
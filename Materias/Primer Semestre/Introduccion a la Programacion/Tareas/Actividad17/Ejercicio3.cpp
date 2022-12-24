/*
Elabora un algoritmo que pida un número y diga cuál es la suma de todos
sus dígitos, si la suma es mayor a 9, los debe volver a sumar.
*/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
    int Numeral, Resultado=0, Contador, VariableQueSeLeAsignaNumerosDelStringAuxiliar2, AcumuladorDeNumeros;
    string StringAuxiliar1, StringAuxiliar2;
    cout<<"Dime una cantidad en numeros enteros"<<endl;
    cin>>Numeral;
    if(Numeral>=10){
        StringAuxiliar1=to_string(Numeral);
        for(Contador=0;Contador<StringAuxiliar1.size();Contador++){
            StringAuxiliar2=StringAuxiliar1[Contador];
            VariableQueSeLeAsignaNumerosDelStringAuxiliar2=stoi(StringAuxiliar2);
            AcumuladorDeNumeros+=VariableQueSeLeAsignaNumerosDelStringAuxiliar2;
        }
        cout<<AcumuladorDeNumeros<<endl;
        while(AcumuladorDeNumeros>=10){
            StringAuxiliar1=to_string(AcumuladorDeNumeros);
            AcumuladorDeNumeros=0;
            for(Contador=0;Contador<StringAuxiliar1.size();Contador++){
                StringAuxiliar2=StringAuxiliar1[Contador];
                VariableQueSeLeAsignaNumerosDelStringAuxiliar2=stoi(StringAuxiliar2);
                AcumuladorDeNumeros+=VariableQueSeLeAsignaNumerosDelStringAuxiliar2;
            }
        cout<<AcumuladorDeNumeros<<endl;
        }
    }
    else{
        cout<<Numeral<<endl;
    }
    return 0;
}
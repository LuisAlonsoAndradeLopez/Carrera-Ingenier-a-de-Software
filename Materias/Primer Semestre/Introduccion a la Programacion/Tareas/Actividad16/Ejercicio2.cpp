/*
Modificar el programa del palíndromo anterior para que ahora acepte frases completas como por ejemplo: “Anita lava la tina”.
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string Frase, FraseSinEspacios, FraseFinal;
    int ContadorDeReversa, ContadorParaAdelante, VariableIntAuxiliar;
    char VariableAuxiliar;
    cout<<"Dime una frase y te digo si es palindromo o no"<<endl;
    getline(cin,Frase);
    FraseSinEspacios=Frase;
    for(ContadorParaAdelante=0;ContadorParaAdelante<Frase.size()-1;ContadorParaAdelante++){
        if(FraseSinEspacios[ContadorParaAdelante]==' '){
            FraseSinEspacios.erase(ContadorParaAdelante,1);
            ContadorParaAdelante--;
        }
    }
    FraseFinal=FraseSinEspacios;
    ContadorParaAdelante=0;
    for(ContadorDeReversa=FraseSinEspacios.size()-1;ContadorDeReversa>0;ContadorDeReversa--){
        VariableAuxiliar=FraseSinEspacios[ContadorDeReversa];
        FraseFinal[ContadorParaAdelante]=VariableAuxiliar; 
        ContadorParaAdelante++;
    }
    if(FraseFinal==FraseSinEspacios){
        cout<<"La frase es palindroma"<<endl;
    }
    else{
        cout<<"La frase no es palindroma"<<endl;
    }
    return 0;
}
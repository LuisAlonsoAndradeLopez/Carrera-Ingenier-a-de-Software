/*
Elaborar un programa que envíe una frase a una función, la regrese
sustituyendo las letras a por 4, e por 3, i por 1 y o por 0 y se muestren las
dos frases.
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
    string Frase, FraseModificada;
    int Contador;
    cout<<"Dime una frase"<<endl;
    getline(cin, Frase);
    FraseModificada=Frase;
    for(Contador=0;Contador<Frase.size();Contador++){
        if(FraseModificada[Contador]=='a'){
            FraseModificada[Contador]='4';
        }
        if(FraseModificada[Contador]=='e'){
            FraseModificada[Contador]='3';
        }
        if(FraseModificada[Contador]=='i'){
            FraseModificada[Contador]='1';
        }
        if(FraseModificada[Contador]=='o'){
            FraseModificada[Contador]='0';
        }
    }
    cout<<"Las frases quedaron asi"<<endl;
    cout<<"Frase original: "<<Frase<<endl;
    cout<<"Frase modificada: "<<FraseModificada<<endl;
    return 0;
}
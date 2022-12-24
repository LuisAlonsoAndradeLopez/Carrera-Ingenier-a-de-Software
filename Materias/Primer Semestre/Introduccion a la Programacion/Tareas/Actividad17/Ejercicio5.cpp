/*
Elaborar un programa que le envíe a una función una cadena con una
operación aritmética básica (suma, resta, multiplicación, división), devuelva
el resultado de la operación y se muestre. Ejemplo: el usuario teclea 1+4.
Resultado: 5.
*/
#include <iostream>
#include <string>
using namespace std;
int FuncionQueResuelveLaOperacionAritmetica (string);
int main(){
    int Resultado;
    string CadenaConOperacion;
    cout<<"Dime una operacion aritmetica basica con 2 digitos"<<endl,
    cin>>CadenaConOperacion;
    Resultado=FuncionQueResuelveLaOperacionAritmetica(CadenaConOperacion);
    cout<<"El resultado es: "<<Resultado<<endl;
    return 0;
}
int FuncionQueResuelveLaOperacionAritmetica (string CadenaConOperacion){
    int ContadorDeStrings, Numero1, Numero2, Resultado=0;
    string StringAuxiliar;
    for(ContadorDeStrings=0;ContadorDeStrings<CadenaConOperacion.size();ContadorDeStrings++){
        switch(CadenaConOperacion[ContadorDeStrings]){
            case '+':
            Numero1=stoi(CadenaConOperacion.substr(0,ContadorDeStrings));
            Numero2=stoi(CadenaConOperacion.substr(ContadorDeStrings+1));
            Resultado=Numero1+Numero2;
            break;
            case '-':
            Numero1=stoi(CadenaConOperacion.substr(0,ContadorDeStrings));
            Numero2=stoi(CadenaConOperacion.substr(ContadorDeStrings+1));
            Resultado=Numero1-Numero2;
            break;
            case '*':
            Numero1=stoi(CadenaConOperacion.substr(0,ContadorDeStrings));
            Numero2=stoi(CadenaConOperacion.substr(ContadorDeStrings+1));
            Resultado=Numero1*Numero2;
            break;
            case '/':
            Numero1=stoi(CadenaConOperacion.substr(0,ContadorDeStrings));
            Numero2=stoi(CadenaConOperacion.substr(ContadorDeStrings+1));
            Resultado=Numero1/Numero2;
            break;
        }
    }
    return Resultado;
}
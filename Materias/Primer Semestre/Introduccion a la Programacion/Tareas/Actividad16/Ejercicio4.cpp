/*
Escribir un algoritmo que pida una frase (o palabra) y un carácter, se los mande como 
parámetro a una función y ésta regrese la misma frase sin el carácter seleccionado y la imprima. 
Ejemplo: Frase: “me llamo Omar”, caracter 'm'. Resultado: “e llao Oar”.
*/
#include <iostream>
using namespace std;
string RegresarFraseSinElCaracter (string, char);
int main(){
    string Frase, FraseCorregida;
    char Caracter;
    cout<<"Dime una frase o palabra"<<endl;
    getline(cin, Frase);
    cout<<"Dime un caracter"<<endl;
    cin>>Caracter;
    FraseCorregida=RegresarFraseSinElCaracter (Frase, Caracter);
    cout<<"La frase corregida es: "<<FraseCorregida<<endl;
    return 0;
}
string RegresarFraseSinElCaracter (string Frase, char Caracter){
    string FraseFinal;
    int Contador;
    FraseFinal=Frase;
    for(Contador=0;Contador<Frase.size();Contador++){
        if(FraseFinal[Contador]==Caracter){
            FraseFinal[Contador]='\0';
        }
    }
    return FraseFinal;
}
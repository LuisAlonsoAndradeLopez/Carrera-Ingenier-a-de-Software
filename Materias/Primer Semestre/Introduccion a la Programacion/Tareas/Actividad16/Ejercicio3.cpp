/*
Escribir un algoritmo que pida al usuario una frase, se lo mande como parámetro a una función 
y ésta regrese el número de palabras que estés escritas en esa frase y después lo imprima. 
Ejemplo: “Mi nombre es Christian”, resultado: “la frase tiene 4 palabras”.
*/
#include <iostream>
#include <cstring>
using namespace std;
int CuantasPalabrasHayEnLaFrase(string);
int main(){
    string Frase;
    int ContadorDePalabras;
    cout<<"Dime una frase o una palabra"<<endl;
    getline(cin, Frase);
    ContadorDePalabras=CuantasPalabrasHayEnLaFrase(Frase);
    if(ContadorDePalabras>0){
        cout<<"Lo que dijiste tiene: "<<ContadorDePalabras<<" palabras"<<endl;
    }
    else{
        cout<<"Error: el primer digito debe ser una letra"<<endl;
    }
    return 0;
}
int CuantasPalabrasHayEnLaFrase(string Frase){
    int ContadorDePalabras=1, Contador=0;
    if(Frase[0]!=' '){
        while (Contador<Frase.size()){
            if(Frase[Contador]==' '){ 
                ContadorDePalabras++;
                if(Frase[Contador+1]==' '){
                    ContadorDePalabras--;
                }
            }
            Contador++;
        }
        if(Frase[Frase.size()-1]==' '){
            ContadorDePalabras--;
        }
    }
    else{
        ContadorDePalabras=0;
    }
    return ContadorDePalabras;
}
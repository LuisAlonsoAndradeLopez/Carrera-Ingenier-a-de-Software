/*
Escribir un programa que pida al usuario un nombre completo, se lo pase como parámetro a una función y 
ésta lo regrese corrigiendo con las mayúsculas y minúsculas correctas (aparecerán en mayúsculas las primeras 
letras de cada nombre y apellidos, las demás aparecerán en minúsculas. Por ejemplo, si introduce "chrIsTian péReZ", 
se escribirá "Christian Pérez").
*/

#include <iostream>
using namespace std;
string ElCorregidorDeLetras(string, string);
int main(){
    string Nombre, NombreCorregido;
    cout<<"Dime tu nombre completo"<<endl;
    getline(cin, Nombre);
    NombreCorregido = ElCorregidorDeLetras (Nombre, NombreCorregido);
    cout<<NombreCorregido<<endl;
    return 0;
}
string ElCorregidorDeLetras (string Nombre, string NombreCorregido){
    string NombreFinal=Nombre;
    int Contador;

    //Esto convierte todas lasletras mayusculas a minusculas
    for(int Contador = 0; Contador < NombreFinal.size() ; Contador++){
        if(NombreFinal[Contador]  >= 'A' && NombreFinal[Contador]<='Z' ){
            char MinusculaAMayuscula = NombreFinal[Contador] + 32 ;
            NombreFinal[Contador]=MinusculaAMayuscula;
        }
    }
    Contador=0;

    //Esto convierte las letras minusculas que esten al lado de un espacio a mayusculas
    for(int Contador = 0; Contador < NombreFinal.size() ; Contador++){
        if(NombreFinal[Contador]==' '){
            Contador++;
            if(NombreFinal[Contador]!=' '){
                if(NombreFinal[Contador]  >= 'a' && NombreFinal[Contador]<='z' ){
                    char MinusculaAMayuscula = NombreFinal[Contador] - 32 ;
                    NombreFinal[Contador]=MinusculaAMayuscula;
                }
            }  
            Contador--;
        }
    }

    //Esta vaina pone la primerisima primera letra en mayuscula
    if(NombreFinal[0]  >= 'a' && NombreFinal[0]<='z' ){
        char MinusculaAMayuscula = NombreFinal[0] - 32 ;
        NombreFinal[0]=MinusculaAMayuscula;
    }
    return NombreFinal;
}
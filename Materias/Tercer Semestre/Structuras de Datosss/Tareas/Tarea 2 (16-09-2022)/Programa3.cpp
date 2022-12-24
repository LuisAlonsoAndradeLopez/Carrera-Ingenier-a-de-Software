#include <iostream>
#include <string>
using namespace std;
int sumarNumeros(string*);
int main(){
    string frase;
    getline(cin, frase);
    string *punteroAuxiliar = &frase;
    cout << sumarNumeros(punteroAuxiliar) << endl;
    return 0;
}

int sumarNumeros(string* frase){
    int sumaNumeros = 0;
    for(int i = 0; i < frase -> size(); i++){
        if( (frase -> at(i) >= '0') && (frase -> at(i) <= '9') ){
            sumaNumeros = sumaNumeros + ((int)frase -> at(i)) - 48;
        }
    } 
    return sumaNumeros;
}
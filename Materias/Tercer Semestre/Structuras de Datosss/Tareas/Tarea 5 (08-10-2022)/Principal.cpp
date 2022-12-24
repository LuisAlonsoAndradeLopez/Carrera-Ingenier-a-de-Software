#include "PilaStatica.h"
#include <iostream>
#include <string>
using namespace std;
int main(){
    PilaStatica ps;
    string frase;
    cout << "Dime una frase (Menor de 51 Caracteres): " << endl;
    getline(cin, frase);
    //cout << frase << endl;
    for(int i = 0; i < frase.size(); i++){
        ps.agregarElemento(frase[i]);
    }
    cout << endl;

    cout << "La pila tiene: " << endl;
    ps.mostrarPila();
    cout << endl;

    if(ps.esPalindromo()){
        cout << "Lo que pusiste es palindromo" << endl;
    }else{
        cout << "Lo que pusiste no es palindromo" << endl;
    }

    //cout << ps.esPalindromo() << endl;
    return 0;
}
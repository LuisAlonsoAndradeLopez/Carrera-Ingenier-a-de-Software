#include <iostream>
using namespace std;
int cuentaVocales (char*);
int main(){
    char fraseOPalabra[50];
    cin.getline(fraseOPalabra, 50, '\n');
    cout << cuentaVocales(fraseOPalabra) << endl;
}


int cuentaVocales(char *fraseOPalabra){
    int contadorVocales = 0;
    while(*fraseOPalabra){
        switch(*fraseOPalabra){
            case 'A':
                contadorVocales++;
                break;

            case 'E':
                contadorVocales++;
                break;

            case 'I':
                contadorVocales++;
                break;

            case 'O':
                contadorVocales++;
                break;

            case 'U':
                contadorVocales++;
                break;
        }
        fraseOPalabra++;
    }
    cout << *fraseOPalabra << endl;
    return contadorVocales;
}

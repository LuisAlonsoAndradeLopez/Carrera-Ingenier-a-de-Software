//Resover Juego hanoi con el alllllllllllllllllgggggggggoritmo divide y vencerás

#include <iostream>
using namespace std;
void hanoi(int, string, string, string, string);
int main(){
    int numeroPlatos = 3;
    string varillaA = "Varilla A";
    string varillaB = "Varilla B";
    string varillaC = "Varilla C";
    string posicionMontanaPlatos = varillaA;
    
    hanoi(numeroPlatos, varillaA, varillaB, varillaC, posicionMontanaPlatos);
    return 0;
}

void hanoi(int numeroPlatos, string varillaA, string varillaB, string varillaC, string posicionMontanaPlatos){
    if(numeroPlatos > 1){
        if(posicionMontanaPlatos == varillaA){
            cout << "Poner platos de " << varillaA << " en " << varillaB << endl;
            cout << "Poner plato de " << varillaA << " en " << varillaC << endl;
            posicionMontanaPlatos = varillaB;
        }else{
            cout << "Poner platos de " << varillaB << " en " << varillaA << endl;
            cout << "Poner plato de " << varillaB << " en " << varillaC << endl;
            posicionMontanaPlatos = varillaA;
        }
        hanoi(numeroPlatos - 1, varillaA, varillaB, varillaC, posicionMontanaPlatos);
    }else{
        if(posicionMontanaPlatos == varillaA){
            cout << "Poner plato de "<< varillaA <<" en " << varillaC << endl;
        }else{
            cout << "Poner plato de "<< varillaB <<" en " << varillaC << endl;
        }
    }
}
#include <iostream>
using namespace std;
int busquedaBinaria(int[], int, int);

int main(){
    int arraeh[] = {1,3,5,7,9}; 
    int numero = 9;
    int tamanoArraeh = sizeof(arraeh) / sizeof(arraeh[0]);
    cout << busquedaBinaria(arraeh, numero, tamanoArraeh);
    return 0;
}

int busquedaBinaria(int arraeh[], int numero, int tamanoArraeh){
    int numeroMedio = tamanoArraeh / 2;
    int posicionNumeroMedio = tamanoArraeh / 2;

    int arraehAuxiliar1[ tamanoArraeh / 2 ]; 
    int arraehAuxiliar2[ tamanoArraeh / 2 ];

    if(numeroMedio > numero){
            for(int i = 0; i < tamanoArraehAuxiliar1; i++){
                arraehAuxiliar1[i] = arraeh[i];
            }

            if(tamanoArraehAuxiliar1 % 2 == 0){
                posicionNumeroMedio = posicionNumeroMedio - ((tamanoArraehAuxiliar1 / 2));
            }else{
                posicionNumeroMedio = posicionNUmeroMedio - ((tamanoArraehAuxiliar1 / 2) + 1);
            }

            //Recursión, mandando el arraehAuxiliar1 y el tamanoArraehAuxiliar1 para seguir dividiendo para vencer
            return busquedaBinaria(arraehAuxiliar1, numero, tamanoArraehAuxiliar1, posicionNUmeroMedio);
        }
        
        //Si es
        if(numeroMedio < numero){
            //Llenar
            if(tamanoArraeh > 1){
                for(int i = 0; i < tamanoArraehAuxiliar2; i++){
                    arraehAuxiliar2[i] = arraeh[i + (tamanoArraeh / 2) + 1];
                }
            }else{
                arraehAuxiliar2[0] = arraeh[0];
            }
            

            if(tamanoArraehAuxiliar2 % 2 == 0){
                posicionNumeroMedio = posicionNumeroMedio + ((tamanoArraehAuxiliar2 / 2) + 1); 
            }else{
                posicionNumeroMedio = posicionNumeroMedio + ((tamanoArraehAuxiliar2 / 2) + 1);
            }

            //Recursión, mandando el arraehAuxiliar2 y el tamanoArraehAuxiliar2 para seguir dividiendo para vencer
            return busquedaBinaria(arraehAuxiliar2, numero, tamanoArraehAuxiliar2, posicionNumeroMedio);

        }
    }
}
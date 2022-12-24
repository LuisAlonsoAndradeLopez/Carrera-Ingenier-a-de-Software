//Dificultad: Insane Demon

#include <iostream>
#include <string>
using namespace std;
int busquedaBinaria(int[], int, int, int);

int main(){

    //Este es el arreglo en donde estarán los numeros
    int arraeh[] = {1,3,5,7,9,11,13,15}; 

    //Este es el numero que quieres buscar
    int numero = 15; 

    //Este es el tamaño del arreglo arraeh, para poder meterlo en la función busquedaBinaria para que el algoritmo funcione
    int tamanoArraeh = sizeof(arraeh) / sizeof(arraeh[0]); 

    /*Esta vaina va a seleccionar el valor que esté A LA MITAD del arreglo arraeh
    si el arreglo arraeh tiene un numero de valores impar, apunta el valor que está JUSTO a la mitad
    si es par apunta al valor que está a la mitad una posicion a la derecha
    ej: si es {1,2,3,4} va a agarrar el 3.*/
    int posicionDelNumeroSeleccionado = tamanoArraeh / 2;

    //Va a mostrar el valor que devuelve la función busquedaBinaria
    cout << busquedaBinaria(arraeh, numero, tamanoArraeh, posicionDelNumeroSeleccionado) << endl;
    return 0;
}

/*Aqui se manda el arreglo con 
*/
int busquedaBinaria(int arraeh[], int numero, int tamanoArraeh, int posicionDelNumeroSeleccionado){

    //Estos 2 arreglos parten el arreglo arraeh(el que mandaste a esta función) en 2
    int arraehAuxiliar1[ tamanoArraeh / 2 ];
    int arraehAuxiliar2[ tamanoArraeh / 2 ];

    //Estas variables son los tamaños de los arreglos auxiliares
    int tamanoArraehAuxiliar1 = sizeof(arraehAuxiliar1) / sizeof(arraehAuxiliar1[0]);
    int tamanoArraehAuxiliar2 = sizeof(arraehAuxiliar2) / sizeof(arraehAuxiliar2[0]);

    int posicionSeleccionadaDeArraehAuxiliar2 = tamanoArraehAuxiliar2/2;
    
    //No mija, esta variable selecciona el DATO de la mitad del arreglo arraeh(el arreglo que le mandas a esta función)
    int numeroSeleccionado = arraeh[ tamanoArraeh / 2 ];

    if(posicionDelNumeroSeleccionado > tamanoArraeh/2){
        if((tamanoArraeh % 2) == 0){
            
            if(tamanoArraeh / 2 == 1){
                numeroSeleccionado = arraeh[0];
            }

            if(tamanoArraeh == 1){
                numeroSeleccionado = arraeh[0];
            }
        }else{
            numeroSeleccionado = arraeh[ tamanoArraeh / 2 ];
        }
    }

    /*Si el numero seleccionado(el que siempre apunta a la mitad) es diferente al numero que diste a la función, 
    se ejecuta el algoritmo divide y vencerás con la recursión, si no, te devuelve el indice en donde se encuentra el numero
    que le mandaste a la función*/
    if(numeroSeleccionado != numero){

        //Si es
        if(numeroSeleccionado > numero){
            for(int i = 0; i < tamanoArraehAuxiliar1; i++){
                arraehAuxiliar1[i] = arraeh[i];
            }

            if(tamanoArraehAuxiliar1 % 2 == 0){
                posicionDelNumeroSeleccionado = posicionDelNumeroSeleccionado - ((tamanoArraehAuxiliar1 / 2));
            }else{
                posicionDelNumeroSeleccionado = posicionDelNumeroSeleccionado - ((tamanoArraehAuxiliar1 / 2) + 1);
            }

            //Recursión, mandando el arraehAuxiliar1 y el tamanoArraehAuxiliar1 para seguir dividiendo para vencer
            return busquedaBinaria(arraehAuxiliar1, numero, tamanoArraehAuxiliar1, posicionDelNumeroSeleccionado);
        }
        
        //Si es
        if(numeroSeleccionado < numero){
            //Llenar

            if(tamanoArraeh % 2 == 0){
                for(int i = 0; i < tamanoArraehAuxiliar2; i++){
                    arraehAuxiliar2[i] = arraeh[i + (tamanoArraeh / 2)];
                }
            }else{
                for(int i = 0; i < tamanoArraehAuxiliar2; i++){
                    arraehAuxiliar2[i] = arraeh[i + (tamanoArraeh / 2) + 1];
                }
            }
            
            //Si el arraehAuxiliar que agarró tiene un numero de indices par o no
            if(tamanoArraehAuxiliar2 % 2 == 0){

                if(arraehAuxiliar2[0] != numeroSeleccionado){
                    posicionDelNumeroSeleccionado = posicionDelNumeroSeleccionado + ((tamanoArraehAuxiliar2 / 2));
                }//else{
                   // posicionDelNumeroSeleccionado = posicionDelNumeroSeleccionado + ((tamanoArraehAuxiliar2 / 2)); //problema
                //}

            }else{

                if(arraehAuxiliar2[0] == numeroSeleccionado){
                    posicionDelNumeroSeleccionado = posicionDelNumeroSeleccionado + ((tamanoArraehAuxiliar2 / 2));//bien
                }else{
                    posicionDelNumeroSeleccionado = posicionDelNumeroSeleccionado + ((tamanoArraehAuxiliar2 / 2) + 1);//bien
                }
                
            }

            //Recursión, mandando el arraehAuxiliar2 y el tamanoArraehAuxiliar2 para seguir dividiendo para vencer
            return busquedaBinaria(arraehAuxiliar2, numero, tamanoArraehAuxiliar2, posicionDelNumeroSeleccionado);

        }
        

    }else{

        //Este es el caso base, la parada de la recursion, aqui devuelve la posición final de donde encontró el numero que le mandaste
        return posicionDelNumeroSeleccionado;
    }
}
#ifndef METODOSDEORDENAMIENTO_H_
#define METODOSDEORDENAMIENTO_H_
#include <iostream>
using namespace std;

void intercambio(int array[], int tamArray){

    int auxiliarOrdenador[tamArray];

    for(int i = 0; i < tamArray; i++){
        auxiliarOrdenador[i] = array[i];
    }


    //Orrrrrrrrrrrrrrrdenar el arrrrrrrrrrrray
    for(int i = 0; i < tamArray; i++){
        for(int j = (i+1); j < tamArray; j++){
            if(auxiliarOrdenador[i] > auxiliarOrdenador[j]){
                int auxiliar = auxiliarOrdenador[i];
                auxiliarOrdenador[i] = auxiliarOrdenador[j];
                auxiliarOrdenador[j] = auxiliar;
            }
        }
    }

    //Mostrar el arrrrrrrrrray orrrrrrrrrrrdenado
    for(int i = 0; i < tamArray; i++){
        cout << auxiliarOrdenador[i] << " ";
    }
}

void seleccion(int array[], int tamArray){

    int auxiliarOrdenador[tamArray];

    for(int i = 0; i < tamArray; i++){
        auxiliarOrdenador[i] = array[i];
    }
    
    int menor;
    int posicionDelMenor;

    for(int i = 0; i < tamArray; i++){
        posicionDelMenor = i;
        for(int j = (i + 1); j < tamArray; j++){
            if(auxiliarOrdenador[posicionDelMenor] > auxiliarOrdenador[j]){
                menor = auxiliarOrdenador[j];
                posicionDelMenor = j;
            }
        }

        if(auxiliarOrdenador[i] > auxiliarOrdenador[posicionDelMenor]){
            auxiliarOrdenador[posicionDelMenor] = auxiliarOrdenador[i];
            auxiliarOrdenador[i] = menor;
        }

    }

    //Mostrar el arrrrrrrrrray orrrrrrrrrrrdenado
    for(int i = 0; i < tamArray; i++){
        cout << auxiliarOrdenador[i] << " ";
    }
}

void insercion(int array[], int tamArray){

    int auxiliarOrdenador[tamArray];

    for(int i = 0; i < tamArray; i++){
        auxiliarOrdenador[i] = array[i];
    }

    for(int i = 1; i < tamArray; i++){
        for(int j = i; j > 0; j--){
            if(auxiliarOrdenador[j - 1] > auxiliarOrdenador[j]){
                int auxiliar = auxiliarOrdenador[j];
                auxiliarOrdenador[j] = auxiliarOrdenador[j - 1];
                auxiliarOrdenador[j - 1] = auxiliar;
            }
        }
    }

    //Mostrar el arrrrrrrrrray orrrrrrrrrrrdenado
    for(int i = 0; i < tamArray; i++){
        cout << auxiliarOrdenador[i] << " ";
    }
}

void laBurbujaSucia(int array[], int tamArray){
    int auxiliarOrdenador[tamArray];

    for(int i = 0; i < tamArray; i++){
        auxiliarOrdenador[i] = array[i];
    }

    for(int i = 1; i <= tamArray; i++){
        for(int j = 0; j < tamArray - 1; j++){
            if(auxiliarOrdenador[j] > auxiliarOrdenador[j + 1]){
                int auxiliar = auxiliarOrdenador[j];
                auxiliarOrdenador[j] = auxiliarOrdenador[j + 1];
                auxiliarOrdenador[j + 1] = auxiliar;
            }
        }
    }

    //Mostrar el arrrrrrrrrray orrrrrrrrrrrdenado
    for(int i = 0; i < tamArray; i++){
        cout << auxiliarOrdenador[i] << " ";
    }
}

void shellSort(int array[], int tamArray){
    
}

void nesquikSort(int array[], int tamArray){
    
    if(tamArray > 0){

        //Trozo de codigo que dice cuantos numeros mayores y menores hay en el arreglo
        //Para poder crear los arreglos que dividen el arreglo en 2 con los indices exactos
        //para que no haya bugs
        int numerosMayores = 0;
        int numerosMenores = 0;
        for(int i = 1; i < tamArray; i++){
            if(array[0] < array[i]){
                numerosMenores++;
            }
            if(array[0] > array[i]){
                numerosMayores++;
            }
        }
        //Fin del trozo de codigo     

        int primeraMitad[numerosMenores];
        int segundaMitad[numerosMayores];
        
        int tamArrayPrimeraMitad = sizeof(primeraMitad) / sizeof(primeraMitad[0]);
        int tamArraySegundaMitad = sizeof(segundaMitad) / sizeof(segundaMitad[0]);
        int contadorArrayPrimeraMitad = tamArrayPrimeraMitad - 1;
        int contadorArraySegundaMitad = 0;

        

        for(int i = 1; i < tamArray; i++){
            if(array[0] < array[i]){
                primeraMitad[contadorArrayPrimeraMitad] = array[i];
                contadorArrayPrimeraMitad--;
            }

            if(array[0] > array[i]){
                segundaMitad[contadorArraySegundaMitad] = array[i];
                contadorArraySegundaMitad++;
            }
        }

        nesquikSort(segundaMitad, tamArraySegundaMitad);
        cout << array[0] << " ";
        nesquikSort(primeraMitad, tamArrayPrimeraMitad);
        
    }

}

void hepSort(int array[], int tamArray){
    
}

void mergeSort(int array[], int tamArray){
    
}

#endif
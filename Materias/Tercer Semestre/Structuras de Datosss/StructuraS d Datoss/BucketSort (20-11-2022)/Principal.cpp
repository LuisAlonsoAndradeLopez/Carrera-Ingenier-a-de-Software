#include "BinSort.h"
int main(){
    //Primero creamos la tabla de hash que va a ordenar el arreglo que quieras
    //ADVERTENCIAAAA: NO PUEDES AGREGAR EN EL BINSORT NUMEROS MAYORES DE 99 POR QUE BOTA EXCEPCION, POR COMO ESTA HECHO EL BINSORT
    BinSort bs;

    //Arreglo que se quiere ordenar
    int arreglo[] = {35, 64, 62, 63, 62, 61, 60, 25, 6, 52, 52, 52, 51, 50, 45, 32};
    
    //Número de índices que tiene el arreglo que quieres ordenar
    int tamArreglo = sizeof(arreglo) / sizeof(arreglo[0]);

    //Vamo a llenar el binsort con todos los elementos del arreglo
    for(int i = 0; i < tamArreglo; i++){
        bs.insertar(arreglo[i]);
    }

    //Se crea un auxiliar que apunta al primer elemento de la lista ordenada del binsort
    //para poder llenar el arreglo ordenado
    Nodo1Enlace *auxiliar = bs.getPrimerDatoDeLaListaOrdenada();

    //El arreglo ordenado
    int arregloOrdenado[tamArreglo];

    //contador para poder llenar el arreglo ordenado
    int posicionArreglo = 0;

    //Llenar el arreglo ordenado
    while(auxiliar != NULL){
        arregloOrdenado[posicionArreglo] = auxiliar -> getDato();
        auxiliar = auxiliar -> getSiguiente();
        posicionArreglo++;
    }

    //Vamo a mostrar el arreglo ordenado
    cout << "Mostrar el arreglo ordenado" << endl;
    for(int i = 0; i < tamArreglo; i++){
        cout << arregloOrdenado[i] << endl;
    }

    return 0;
}
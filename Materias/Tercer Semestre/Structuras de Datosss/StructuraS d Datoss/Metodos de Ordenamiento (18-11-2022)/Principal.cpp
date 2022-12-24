#include "MetodosDeOrdenamiento.h"
#include <string>

int main(){
    //int arraeh[7] = {542, 653, 45, 12, 654, 256, 643};
    string arraeh[] = {"250", "010", "283", "957", "341", "169", "789", "025", "213", "428"};
    int tamArray = sizeof(arraeh) / sizeof(arraeh[0]);
    int arraehSin0sAlInicio[tamArray];
    for(int i = 0; i < tamArray; i++){
        arraeh[i].erase(0, arraeh[i].find_first_not_of('0'));
        arraehSin0sAlInicio[i] = stoi(arraeh[i]);
    }
    
    cout << "Intercambio: " << endl;
    intercambio(arraehSin0sAlInicio, tamArray);
    cout << endl;
    cout << endl;

    cout << "Seleccion: " << endl;
    seleccion(arraehSin0sAlInicio, tamArray);
    cout << endl;
    cout << endl;

    cout << "Insercion: " << endl;
    insercion(arraehSin0sAlInicio, tamArray);
    cout << endl;
    cout << endl;

    cout << "BubbleSort: " << endl;
    laBurbujaSucia(arraehSin0sAlInicio, tamArray);
    cout << endl;
    cout << endl;

    cout << "ShellSort: " << endl;
    shellSort(arraehSin0sAlInicio, tamArray);
    cout << endl;
    cout << endl;

    cout << "QuickSort: " << endl;
    nesquikSort(arraehSin0sAlInicio, tamArray);
    cout << endl;
    cout << endl;

    cout << "HepSort: " << endl;
    hepSort(arraehSin0sAlInicio, tamArray);
    cout << endl;
    cout << endl;

    cout << "MergeSort: " << endl;
    mergeSort(arraehSin0sAlInicio, tamArray);
    cout << endl;
    cout << endl;


    return 0;
}




    /*
    for(int i = 0; i < tamArray; i++){
        int numDigitos = 0;
        int auxiliar = arr
        while(arraeh[i]){
            numDigitos++;
            arraeh[i] /= 10;
        }

        char buffer[numDigitos];
        while(arraeh[i]){

        }
    }*/
    

    /*
    string eliminadorDe0sAlInicio;
    for(int i = 0; i < tamArray; i++){

        eliminadorDe0sAlInicio = to_string(arraeh[i]);
        cout << "Mostrar" << eliminadorDe0sAlInicio << endl;
        while(eliminadorDe0sAlInicio[0] == '0'){
            eliminadorDe0sAlInicio.erase(eliminadorDe0sAlInicio.begin());
        }

        cout << stoi(eliminadorDe0sAlInicio) << endl;
        arraeh[i] = stoi(eliminadorDe0sAlInicio);
    }*/
#include <iostream>
using namespace std;
void seleccion(int, int, int);
void escribirSeleccion();

class Conjunto{
    private:
        int candidatos[12]; //12 por que es el maximo de objetos
        int indiceCandidatos = 0;

    public:
        void insertar(int candidato){
            this -> candidatos[indiceCandidatos] = candidato;
            indiceCandidatos++;
        }

        void retirar(int candidato){
            for(int i = 0; i < 12; i++){
                if(this -> candidatos[i] = candidato){
                    this -> candidatos [i] = -1;
                }
            }
        }

        bool pertenece(int candidato){
            bool devolvedor = false;
            for(int i = 0; i < 12; i++){
                if(this -> candidatos[i] = candidato){
                    devolvedor = true;
                    break;
                }
            }

            return devolvedor;
        }
};



const int M = 12; //Maximo numero de objetos
int n = 7;  //numero de objetos
int objs[] = {5,10,15,20,25,30,35}; //objetos, en este arraeh se puede meter la M entre los corchetes
Conjunto bolsa;


int main(){
    seleccion(45, 0, 0);
    return 0;
}


void seleccion(int obj, int candidato, int suma){
    /* obj : peso objetivo
        candidato : índice del peso a añadir
        suma: suma parcial de pesos
    */
    while (candidato < n){
        candidato++;
        if ((suma + objs[candidato - 1]) <= obj){
            bolsa.insertar(candidato);  // objeto anotado
            suma += objs[candidato - 1];
            if (suma < obj){    // ensaya con siguiente objeto
                seleccion(obj, candidato, suma);
            }else
                escribirSeleccion();    // vuelta atrás, se extrae el objeto
            bolsa.retirar(candidato);
            suma -= objs[candidato - 1];
        }
    }
}

void escribirSeleccion(){
    cout << "\nSelección de objetos: ";
    for (int candidato = 1; candidato <= n; candidato++){
        if (bolsa.pertenece(candidato)){
            cout << " Objeto " << candidato
            << " peso: " << objs[candidato - 1] << endl;
            bolsa.retirar(candidato);
        }
    }
}
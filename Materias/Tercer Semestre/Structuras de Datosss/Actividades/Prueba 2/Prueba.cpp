#include <iostream>
using namespace std;

void ponerReina(int , bool&, int[], const int);
bool valido(int, int[]);

int main(){

    const int N = 8;
    const int n = (N+1);
    int reinas[n];
    bool solucion;
    ponerReina(1,solucion, reinas, N);

    //Mostrar la posición de fila de las reinas
    for(int i = 1; i < n; i++){
        cout << reinas[i] << endl;
    }
    
    return 0;
    
}

void ponerReina(int i, bool& solucion, int reinas[], const int N){
    int k;
    solucion = false;
    k = 0; // inicializa contador de movimientos
    do {
        k++;
        reinas[i] = k; // coloca y anota reina i en fila k
        if (valido(i, reinas)){
            if (i < N){
                ponerReina(i + 1, solucion, reinas, N);
                // vuelta atrás
                if (!solucion)
                    reinas[i] = 0;  
            }else{ // todas las reinas colocadas
                solucion = true;
            }
        }
    }while(!solucion && (k < 8));
}

bool valido(int i, int reinas[]){   
    int r;
    bool v = true;
    for(r = 1; r <= i - 1; r++){
        v = v && (reinas[r]!= reinas[i]); // no esté en la misma fila
        v = v && ((reinas[i] - i) != (reinas[r] - r)); // diagonal 1
        v = v && ((reinas[i] + i) != (reinas[r] + r)); // diagonal 2
    }
    return v;
}
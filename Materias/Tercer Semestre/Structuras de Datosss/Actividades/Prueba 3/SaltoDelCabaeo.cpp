#include <iostream>
using namespace std;

void escribeTablero();
const int N = 8;
const int n = (N + 1);
int tablero[n][n];
int d[8][2] = {{2,1},{1,2},
                {-1,2},{-2,1},
                {-2,-1},{-1,-2},
                {1,-2},{2,-1}};

void saltoCaballo(int i, int x, int y, bool& exito){
    int nx, ny;
    int k;
    exito = false;
    k = 0; //inicializa los posibles 8 movimientos
    do{
        k++;
        nx = x + d[k - 1][0];
        ny = y + d[k - 1][1];
        //determina si las coordenadas son aceptables
        if((nx >= 1) && (nx  <= N) &&
            (ny >= 1) && (ny <= N) &&
            (tablero[nx][ny] == 0)){

            tablero[nx][ny] = i; //anota movimiento
            if(i < N * N){
                cout << endl;
                escribeTablero();
                saltoCaballo(i + 1, nx, ny, exito);
                if(!exito){
                    tablero[nx][ny]
                }
            }
        }
    }

}
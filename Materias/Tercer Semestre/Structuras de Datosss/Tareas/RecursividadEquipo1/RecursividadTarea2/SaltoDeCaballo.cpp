#include<iostream>
using namespace std;

const int N = 8;
const int n = (N+1); //EL indice 0 no lo va a contar
int tablero[n][n];
int d[8][2] = {{2,1}, {1,2}, {-1,2}, {-2,1},{-2,-1},{-1,-2},
{1,-2}, {2,-1}}; // desplazamientos relativos del caballo

void llenarTableroCon0s(){
	for(int i = 1; i <= N; i++){
		for (int j = 1; j <= N; j++)
			tablero[i][j] = 0;
	}
}

void saltoCaballo(int i, int x, int y, bool& exito){
	int nx, ny;
	int k;
	exito = false;
	k = 0;	// inicializa contador de posibles (8) movimientos
	do {
		k++;
		nx = x + d[k - 1][0];
		ny = y + d[k - 1][1];
			// determina si nuevas coordenadas son aceptables
		if ((nx >= 1) && (nx <= N) &&
			(ny >= 1) && (ny <= N) &&
			(tablero[nx][ny] == 0)){
			tablero[nx][ny]= i;	// anota movimiento

			if (i < N * N){
				saltoCaballo(i + 1, nx, ny, exito);
					// analiza si se ha completado la solución
				if (!exito){
					// no se alcanzó la solución
					tablero[nx][ny] = 0;	// se borra anotación
				}
			}else
				exito = true;	// caballo ha cubierto el tablero
		}
	} while ((k < 8) && !exito);
}


void escribeTablero(){
	int i,j;
	for(i = 1; i <= N; i++){
		for (j = 1; j <= N; j++)
			cout << tablero[i][j] << " ";
		cout << endl;
	}
}


int main(){
	bool aux = false; //Para que se puedameter en el saltoCaballo
	llenarTableroCon0s();
	saltoCaballo(1, 0, 0, aux);
	escribeTablero();
	return 0;
}
#include <iostream>
using namespace std;
int busquedaBinaria(double[], double, int, int);
int main(){
    double arraeh[] = {1,2,3,4,5,6,7,8,9};
    cout << busquedaBinaria(arraeh, 8, 1, 9) << endl;
    return 0;
}


int busquedaBinaria(double a[], double clave, int inferior, int superior){
    int central;
    //Condicion para verificar si el arraeh esta oooooordenado
    if (inferior > superior)
    // no encontrado
        return -1;
    //Si está ordenado el arraeh
    else{
        central = (inferior + superior) / 2;
        //Si el valor que agarra de enmedio es igual al valor que das
        if (a[central] == clave)
            return central;
        //Si no verifica si es mayor o menor y hace recursividad
        else if (a[central] < clave)
                return busquedaBinaria(a, clave, central + 1, superior);
            else
                return busquedaBinaria(a, clave, inferior, central - 1);
    }  
}
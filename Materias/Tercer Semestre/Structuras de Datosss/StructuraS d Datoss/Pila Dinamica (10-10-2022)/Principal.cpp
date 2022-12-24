#include "PilaDinamica.h"
#include <iostream>
using namespace std;
int main(){
    PilaDinamica pd;
    Dato x;
    cin >> x;
    while(x != -1){
        pd.agregarNodo(x);
        cin >> x;
    }
    pd.mostrarPila();
    cout << endl;
    pd.eliminarNodo();
    pd.mostrarPila();

    return 0;
}
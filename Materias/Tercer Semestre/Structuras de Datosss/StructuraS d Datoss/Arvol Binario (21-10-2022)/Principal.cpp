#include "ArbolBinario.h"
#include <iostream>
using namespace std;
int main(){
    ArbolBinario ab;
    ab.insertar(4);
    ab.insertar(549);
    ab.insertar(2);
    ab.insertar(1);
    ab.insertar(3);
    ab.insertar(53);
    ab.preorden();
    return 0;
}
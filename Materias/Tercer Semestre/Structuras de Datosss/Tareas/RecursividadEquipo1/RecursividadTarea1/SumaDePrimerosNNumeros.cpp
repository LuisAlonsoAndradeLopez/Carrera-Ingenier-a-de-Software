#include <iostream>
using namespace std;
int suma(int);
int main(){
    cout << suma(2) << endl;;
    return 0;
}

int suma(int numero){
    if(numero == 1){
        return 1;
    }else{
        return suma(numero - 1) + numero;
    }
}
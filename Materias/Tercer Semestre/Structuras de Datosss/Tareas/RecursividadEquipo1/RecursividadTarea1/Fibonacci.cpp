#include <iostream>
using namespace std;
int fibonacci(int);
int main(){
    int numero;
    cin >> numero;
    cout << fibonacci(numero) << endl;
    return 0;
}

int fibonacci(int numero){
    if(numero >= 1){
        switch(numero){
            case 1:
                return 1;

            case 2:
                return 1;

            default:
                return fibonacci(numero - 1) + fibonacci (numero - 2);
        }
    }else{
        return 0;
    }
}
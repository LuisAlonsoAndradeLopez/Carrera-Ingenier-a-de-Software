#include <iostream>
using namespace std;
int factorial(int);
int main(){
    int numero;
    cin >> numero;
    cout << factorial(numero) << endl;
}

int factorial(int numero){
    switch(numero){
        case 0:
            return 1;
            break;

        case 1:
            return 1;
            break;

        default:
            return factorial(numero - 1) * numero;
    }
}
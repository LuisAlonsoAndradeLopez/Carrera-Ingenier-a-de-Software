#include <iostream>
using namespace std;

void funcion(int, int);

int main(){
    int a = 5;
    int b = 2;
    int c;

    funcion(a, b);
    return 0;
}

void funcion(int a, int b){
    int *x;
    x = &a;
    int *y;
    y = &b;
    int *z = new int;
    *z = a;
    *x = b;
    *y = *z;
    cout << z << endl;

    cout << a << endl;
    cout << b << endl;

}
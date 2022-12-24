//Leer números enteros hasta que teclees un 0 y como resultado mostrar la suma de esos números.
#include <iostream>
using namespace std;
int main(){
    int Numeral;
    int ElSumador;
    ElSumador=0;
    while(Numeral!=0){
        cout<<"Dime un numero pero si me das un 0 te dejo de pedir y te sumo todos los que me has dado"<<endl;
        cin>>Numeral;
        ElSumador=ElSumador+Numeral;
    }
    cout<<"La suma de todos los numeros que me has dado es: "<<ElSumador<<endl;
    return 0;
}
//Desplegar los números impares del 50 al 80.
#include <iostream>
using namespace std;
int main(){
    int numeral;
    numeral=50;
    while (numeral<81){
        if(numeral%2!=0){
            cout<<numeral<<endl;
        }
    numeral=numeral+1;
    }
    return 0;
}
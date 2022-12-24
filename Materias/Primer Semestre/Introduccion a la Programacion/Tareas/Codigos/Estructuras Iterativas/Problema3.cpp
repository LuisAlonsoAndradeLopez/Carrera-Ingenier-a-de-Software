//Desplegar los pares de 20 al 50.
#include <iostream>
using namespace std;
int main(){
    int numeral;
    for(numeral=20;numeral<51;numeral++){
        if(numeral%2==0){
            cout<<numeral<<endl;
        }
    }
    return 0;
}
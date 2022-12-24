//Desplegar los 10 primeros números al revés.
#include <iostream>
using namespace std;
int main(){
    int numeral;
    numeral=10;
    do{
        cout<<numeral<<endl;
        numeral=numeral-1;
    }
    while(numeral>0);
    return 0;
}
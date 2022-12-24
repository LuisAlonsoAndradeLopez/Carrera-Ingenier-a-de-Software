//Desplegar los 10 primeros números.
#include <iostream>
using namespace std;
int main(){
    int numeral;
    numeral=1;
    do{
        cout<<numeral<<endl;
        numeral=numeral+1;
    }
    while (numeral<11);
    return 0;
}
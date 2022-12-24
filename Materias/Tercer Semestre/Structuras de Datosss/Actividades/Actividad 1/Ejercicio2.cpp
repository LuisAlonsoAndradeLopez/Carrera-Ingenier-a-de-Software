#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char cadena1[100], cadena2[100];
    cin.getline(cadena1, 100);
    cin.getline(cadena2, 100);
    cout<<(atoi(cadena1)) + (atoi(cadena2));
    return 0;
}
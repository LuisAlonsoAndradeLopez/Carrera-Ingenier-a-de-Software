#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char clave[100];
    strcpy(clave, "ESTRUCTURA");
    char texto[50][100];
    for(int i = 0; i < 50; i++){
        cin.getline(texto[i], 100);
    }

    cout<<"-----------------------------------"<<endl;

    for(int i = 0; i < 50; i++){
        if(strcmp(clave, texto[i]) != 0){
            cout<<texto[i]<<endl;
        }
    }

    return 0;
}
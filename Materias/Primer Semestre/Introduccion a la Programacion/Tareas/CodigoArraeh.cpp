/*
Elabora un programa que solicite un número entero entre 0 y 99 (inclusivos). El programa debe validar 
que el número se encuentre en esos rangos, en caso contrarío deberá enviar un mensaje de error.

Con el número correcto se debe hacer lo siguiente:

1. Sumar los dígitos

2. Tomar el último dígito (unidad) del número ingresado y de la suma, y combinarlos (juntarlos) en uno nuevo.

Nota: En este proceso después de repetirlo varias veces se obtiene el número original

El programa deberá mostrar en pantalla la lista de los números generados hasta obtener el original nuevamente como se muestra en los ejemplos.
*/
#include <iostream>
using namespace std;
bool SolicitarNumeroYValidarlo (int); //Esta función valida el numero que pones, si está en el rango lo acepta y si no te manda error.
void ElSeparadorDeDigitos (int [], int); //Separa los digitos del numero que le pongas, ejemplo: 99 : 9 9.
void ElSumadorDeDigitos (int [], int); //Función que devuelve el numero que le has dado conel algoritmo de ejemplo del problema.
void ElQuePoneEspaciosParaAjustar(int); //Esta función ajusta los espacios para que quede alineado todo bien.
int main(){
    int Numeral;
    cout<<"Dime un numero ENTERO que esté entre 0 y 99"<<endl;
    cin>>Numeral;
    if(Numeral<10 && Numeral>=0){
        cout<<" ";
    }
    if(SolicitarNumeroYValidarlo(Numeral)==true){
        int NumeralConDigitosSeparados[2];
        ElSeparadorDeDigitos(NumeralConDigitosSeparados, Numeral);
        ElSumadorDeDigitos(NumeralConDigitosSeparados, Numeral);
    }
    return 0;
} 
bool SolicitarNumeroYValidarlo (int Numeral){
    if(Numeral<0 || Numeral>99){
        cout<<"Error, numero no valido"<<endl;
        return false;
    }
    else{
        return true;
    }
}
void ElSeparadorDeDigitos (int NumeralConDigitosSeparados[2], int Numeral){
    int PosicionDelArraeh;
    cout<<Numeral<<"  ";
    for(PosicionDelArraeh=1;PosicionDelArraeh>-1;PosicionDelArraeh--){
        if(PosicionDelArraeh==1){
            NumeralConDigitosSeparados[PosicionDelArraeh]=Numeral%10;
        }
        if(PosicionDelArraeh==0){
            NumeralConDigitosSeparados[PosicionDelArraeh]=Numeral/10%10;
        }
    }
    cout<<NumeralConDigitosSeparados[0]<<"+"<<NumeralConDigitosSeparados[1]<<"="<<NumeralConDigitosSeparados[0]+NumeralConDigitosSeparados[1]<<"  ";
    if( ( (NumeralConDigitosSeparados[0]+NumeralConDigitosSeparados[1]) <10) && ( (NumeralConDigitosSeparados[0]+NumeralConDigitosSeparados[1]) >=0) ){
        cout<<" ";
    }
}
void ElSumadorDeDigitos (int NumeralConDigitosSeparados[2], int Numeral){
    int ArraehAuxiliar[2], AuxiliarParaElWhile[2];
    int DigitosSumados, CondicionParaElWhile, NuevoValorParaArraehAuxiliarPosicion0;
    DigitosSumados=NumeralConDigitosSeparados[0]+NumeralConDigitosSeparados[1];
    NuevoValorParaArraehAuxiliarPosicion0=NumeralConDigitosSeparados[1];
    while((AuxiliarParaElWhile[0]!=NumeralConDigitosSeparados[0]) || (AuxiliarParaElWhile[1]!=NumeralConDigitosSeparados[1])){
        if(DigitosSumados>=10){
            ArraehAuxiliar[1]=DigitosSumados%10;
            ArraehAuxiliar[0]=NuevoValorParaArraehAuxiliarPosicion0;
            DigitosSumados=ArraehAuxiliar[0]+ArraehAuxiliar[1];
        }
        else{
            ArraehAuxiliar[1]=DigitosSumados;
            ArraehAuxiliar[0]=NuevoValorParaArraehAuxiliarPosicion0;
            DigitosSumados=ArraehAuxiliar[0]+ArraehAuxiliar[1];
        }
        cout<<ArraehAuxiliar[0]<<"y"<<ArraehAuxiliar[1]<<"="<<ArraehAuxiliar[0]<<ArraehAuxiliar[1]<<endl;
        cout<<ArraehAuxiliar[0]<<ArraehAuxiliar[1]<<"  ";
        cout<<ArraehAuxiliar[0]<<"+";
        cout<<ArraehAuxiliar[1]<<"=";
        cout<<DigitosSumados<<"  ";
        ElQuePoneEspaciosParaAjustar(DigitosSumados);
        NuevoValorParaArraehAuxiliarPosicion0=ArraehAuxiliar[1];
        AuxiliarParaElWhile[0]=ArraehAuxiliar[1];
        AuxiliarParaElWhile[1]=DigitosSumados%10;
    }
    cout<<NumeralConDigitosSeparados[0]<<"y"<<NumeralConDigitosSeparados[1]<<"="<<NumeralConDigitosSeparados[0]<<NumeralConDigitosSeparados[1]<<endl;
}
void ElQuePoneEspaciosParaAjustar(int DigitosSumados){
    if(DigitosSumados<10){
        cout<<" ";
    } 
}
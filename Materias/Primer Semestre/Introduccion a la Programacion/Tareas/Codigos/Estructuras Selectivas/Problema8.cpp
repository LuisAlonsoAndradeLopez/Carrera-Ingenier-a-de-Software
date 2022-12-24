/*
Escribe un algoritmo que pida los 3 lados de un triángulo e indique si es equilátero 
(3 lados iguales), isósceles (2 lados iguales) o escaleno (3 lados desiguales).
*/
#include <iostream>
using namespace std;
int main(){
    double Lado1, Lado2, Lado3;
    cout<<"Dime un lado"<<endl;
    cin>>Lado1;
    cout<<"Dime otro lado"<<endl;
    cin>>Lado2;
    cout<<"Dime otro lado"<<endl;
    cin>>Lado3;
    if(Lado1>=0 && Lado2>=0 && Lado3>=0){
        //Esto es para decirte el triangulo equilatero

        if(Lado1==Lado2 && Lado1==Lado3 && Lado2==Lado3){
            cout<<"Es un triangulo equilatero"<<endl;
        }
        else{

           //Esto es para decirte el triangulo isóceles

            if(Lado1==Lado2 && Lado1!=3){
                cout<<"El triangulo es isoceles"<<endl;
            }
            else{
                if(Lado1==Lado3 && Lado1!=2){
                cout<<"El triangulo es isoceles"<<endl;
                }
                else{
                   if(Lado2==Lado1){
                   cout<<"El triangulo es isoceles"<<endl;
                   }
                   else{
                        if(Lado3==Lado1 && Lado3!=Lado2){
                        cout<<"El triangulo es isoceles"<<endl;
                        }
                        else{
                            if(Lado3==Lado2 && Lado3!=Lado1){
                            cout<<"El triangulo es isoceles"<<endl;
                            }
                        }
                    }
                }
            }
        }

        //Esto es para decirte el triangulo escaleno

        if(Lado1!=Lado2 && Lado1!=Lado3 && Lado2!=Lado3){
            cout<<"El triangulo es escaleno"<<endl;
        }
    }
    else{
        cout<<"No podemos hacer nada por ti, por que pusiste lados negativos"<<endl;
    }
    
    return 0;
}
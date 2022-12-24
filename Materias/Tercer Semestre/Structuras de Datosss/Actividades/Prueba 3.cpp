//Algoritmo de la mochela

#include <iostream>
using namespace std;

void probarObjeto(int, int, int, int&);

class Conjunto{
    private:
        int obj[12];

    public:
        Conjunto(){}
        ~Conjunto(){}
        bool pertenece(int obj){
            if(this->obj[obj] == 1){
                return true;
            }else{
                return false;
            }
        }

        bool insertar(int obj){
            this->obj[obj] = 1;
        }

        void retirar(int obj){
            this->obj[obj] = 0;
        }
};


int main(){
    int n = 12;
    int pesoObjs[] = {3,4,5,6,7,8,9,10,11,12};
    int valorObjs[] = {5,10,15,20,25,30,35,40,45,50};

    Conjunto actual, optimo;
    int pesoMax = 25;
}

void probarObjeto(int i, int pt, int va, int& mejorValor){
    int valExclusion;
    if(pt + pesoObjs[i-1] <= pesoMaximo){
        if(i < n){
            probarObjeto(i + 1, pt, pesoObjs[i - 1], mejorValor);
        }else{
            optimo = actual;
            mejorValor = va;
        }
    }
}
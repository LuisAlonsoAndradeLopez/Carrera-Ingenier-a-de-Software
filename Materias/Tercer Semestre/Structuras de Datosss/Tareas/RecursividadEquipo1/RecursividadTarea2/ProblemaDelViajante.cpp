/*
totalValor=el valor maximo que pueden alcanzar los objetos, suma de todos los valores
mejorValor=valor optimo alcanzado durante el proceso, ACTUAL VALOR MAXIMO 
i=numero del objeto a probar su inclusion
pt=peso de la seleccion actual
va=valor maximo alcanzable por la seleccion actual


*/
#include "Conjunto.h"
#include <iostream>
using namespace std;
const int M= 12;			//Maximo numero de objetos
int n=12;						//numero de objetos
int pesoObjs[12]={3,4,5,6,7,8,9,10,11,12,13,14};
int valorObjs[12]={5,10,15,20,22,24,26,28,30,32,34,36};
Conjunto actual, optimo;   
int pesoMaximo=25;

Conjunto::Conjunto(){}
Conjunto::~Conjunto(){
}
bool Conjunto::pertenece(int obj){
	if(this->obj[obj]==1){
		return true;
	}else{
		return false;
	}
}
void Conjunto::insertar(int obj){
	this->obj[obj]=1;
}
void Conjunto::retirar(int obj){
	this->obj[obj]=0;
}

void probarObjeto(int i,int pt,int va,int& mejorValor){
	int valExclusion;		
	//cout<<pt+pesoObjs[i-1]<<endl;			
	if(pt+pesoObjs[i-1]<=pesoMaximo){    //Objeto i se inlcuye 
		actual.insertar(i);
		if(i<n){
			probarObjeto(i+1,pt+pesoObjs[i-1],va,mejorValor);
		}
		else							//Todos los objetos probados
			if(va>mejorValor){			//Es una mejor solucion
				optimo=actual;
				mejorValor=va;
			}

		actual.retirar(i);			//vuelta atras, ensaya la
										//exclusion de obj i	
										//sigue la busqueda sistematica con i+1
		valExclusion=va-valorObjs[i-1];//decrementa valor del objeto
		if(valExclusion>mejorValor)/*se puede alcanzar una mejor 
									seleccion, sino poda la busqueda*/
			if(i<n)
				probarObjeto(i+1,pt-pesoObjs[i-1],valExclusion,mejorValor);
			else{
				optimo=actual;
				mejorValor=valExclusion;
			}
	}
}

void escribirOptimo(int mejor){
	cout<<"\tObjetos que forman la seleccion optima"<<endl<<n<<endl;
	for(int j=1;j<=n;j++){
		if(optimo.pertenece(j-1)){
			cout<<"Objeto "<<j<<" peso: "<<pesoObjs[j-1]<<" , valor: "<<valorObjs[j-1]<<endl;
		}
	}
	cout<<"\t Valor optimo "<<mejor<<" para un peso maximo = "<<pesoMaximo<<endl;
}
//llamada dende main()
//suma de los valores de cada objeto
int main(){

	int maxValor,i,mejorValor;
	for(maxValor=i=0;i<n;i++)
		maxValor+=valorObjs[i];
	mejorValor=0;
	probarObjeto(1,0,maxValor,mejorValor);
	escribirOptimo(mejorValor);
}

//ATRIBUTOS DE CLASE CONJUNTO
//actual.insertar(i)---inserta el elemento al conjunto
//actual.retirar(i)-----retira el elemento del conjunto
//optimo.pertenece(i) --- comprueba si el elemento pertenece al conjunto


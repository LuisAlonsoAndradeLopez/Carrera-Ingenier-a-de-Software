#include <iostream>
using namespace std;

#include "Libro.cpp"

void MenuPrincipal();
int CorreccionEleccionMenuPrincipal(int);
void Switch(int, int);

int main(){
	//Libro l1("Libro 1","autor 1", 5, 0);
	bool Desicion=false;
	int EleccionMenuPrincipal, ContadorAuxiliar2=1;
	while(Desicion==false){
		MenuPrincipal();
		cin>>EleccionMenuPrincipal;
		EleccionMenuPrincipal=CorreccionEleccionMenuPrincipal(EleccionMenuPrincipal);
		Switch(EleccionMenuPrincipal, ContadorAuxiliar2);
		if(EleccionMenuPrincipal==5){
			Desicion=true;
		}
	}
	/*
	if(l1.prestamo()){
		cout<<"Se presto."<<endl;
	}else{
		cout<<"no se pudo prestar porque ya no hay."<<endl;
	}

	if(l1.prestamo()){
		cout<<"Se presto."<<endl;
	}else{
		cout<<"no se pudo prestar porque ya no hay."<<endl;
	}

	if(l1.prestamo()){
		cout<<"Se presto."<<endl;
	}else{
		cout<<"no se pudo prestar porque ya no hay."<<endl;
	}

	if(l1.prestamo()){
		cout<<"Se presto."<<endl;
	}else{
		cout<<"no se pudo prestar porque ya no hay."<<endl;
	}

	if(l1.prestamo()){
		cout<<"Se presto."<<endl;
	}else{
		cout<<"no se pudo prestar porque ya no hay."<<endl;
	}

	if(l1.prestamo()){
		cout<<"Se presto."<<endl;
	}else{
		cout<<"no se pudo prestar porque ya no hay."<<endl;
	}
	
	
	
	if(l1.devolucion()){
		cout<<"Libro devuelto."<<endl;
	}else{
		cout<<"El libro no se ha prestado."<<endl;
	}
	*/
	return 0;
}

void MenuPrincipal(){
	cout<<"Presiona 1 para Registrar libro"<<endl;
	cout<<"Presiona 2 para Prestar libro"<<endl;
	cout<<"Presiona 3 para Devolver libro"<<endl;
	cout<<"Presiona 4 para Mostrar libro"<<endl;
	cout<<"Presiona 5 para Salir"<<endl;
}

int CorreccionEleccionMenuPrincipal(int MenuPrincipal){
	while(MenuPrincipal<=0 || MenuPrincipal>=6){
		cout<<"Tiene que ser entre 1 y 5"<<endl;
		cin>>MenuPrincipal;
	}
	return MenuPrincipal;
}

void Switch(int Decision, int ContadorAuxiliar2){
	Libro Libro;
	string Autor, Titulo, DatosLibro;
	int TotalEjemplares, EjemplaresPrestados;
	switch(Decision){


		case 1:
		if(ContadorAuxiliar2<=5){
			cout<<"Dime el titulo del libro"<<endl;
			cin>>Titulo;
			Libro.setTitulo(Titulo);
			cout<<"Dime el autor del libro"<<endl;
			cin>>Autor;
			Libro.setAutor(Autor);
			cout<<"Dime el total de ejemplares del libro"<<endl;
			cin>>TotalEjemplares;
			Libro.setTotalEjemplares(TotalEjemplares);
			cout<<"Dime los ejemplares prestador"<<endl;
			cin>>EjemplaresPrestados;
			Libro.setEjemplaresPrestados(EjemplaresPrestados);

			//DatosLibro=Libro.toString();
			//DatosLibro=Libro.toString();
			ContadorAuxiliar2++;
		}
		else{
			cout<<"Limite de libros alcanzado"<<endl;
		}
		break;


		case 2:
		break;
		case 3:
		break;
		case 4:
			cout<<Libro.toString(Titulo, Autor, TotalEjemplares, EjemplaresPrestados)<<endl;
		break;
	}
}
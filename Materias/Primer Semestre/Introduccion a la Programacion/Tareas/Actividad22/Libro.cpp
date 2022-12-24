#include "Libro.h"

Libro::Libro() {
	titulo = "";
	autor = "";
	totalEjemplares = 0;
	ejemplaresPrestados = 0;
}

Libro::Libro(string tit, string au, int tE, int eP) {
	titulo = tit;
	autor = au;
	totalEjemplares = tE;
	ejemplaresPrestados = eP;
}

void Libro::setTitulo(string tit) {
	titulo = tit;
}

void Libro::setAutor(string au) {
	autor = au;
}

void Libro::setTotalEjemplares(int tE) {
	totalEjemplares = tE;
}

void Libro::setEjemplaresPrestados(int eP) {
	ejemplaresPrestados = eP;
}

string Libro::getTitulo() {
	return titulo;
}

string Libro::getAutor() {
	return autor;
}

int Libro::getTotalEjemplares() {
	return totalEjemplares;
}

int Libro::getEjemplaresPrestados() {
	return ejemplaresPrestados;
}

bool Libro::prestamo() {
	if(totalEjemplares>ejemplaresPrestados){
		ejemplaresPrestados++;
		return true;
	}else{
		return false;
	}
}

bool Libro::devolucion() {
	if(ejemplaresPrestados>0){
		ejemplaresPrestados--;
		return true;
	}else{
		return false;
	}
}

string Libro::toString(string titulo, string autor, int totalEjemplares, int ejemplaresPrestados) {
	string datosLibro="";
	datosLibro = "Titulo: "+ titulo + "\n" +
				"Autor: " + autor + "\n" +
				"Total: " + to_string(totalEjemplares) + "\n" +
				"Prestados: " + to_string(ejemplaresPrestados);
	return datosLibro;
}



/*
string Libro::toString(string titulo, string autor, int totalEjemplares, int ejemplaresPrestados) {
	int ContadorArrayDatosLibro=0;
	string datosLibro[ContadorArrayDatosLibro];
	datosLibro[ContadorArrayDatosLibro] = "Titulo: ";
	ContadorArrayDatosLibro++;
	datosLibro[ContadorArrayDatosLibro] = titulo;
	ContadorArrayDatosLibro++;
	datosLibro[ContadorArrayDatosLibro] = "Autor: ";
	ContadorArrayDatosLibro++;
	datosLibro[ContadorArrayDatosLibro] = autor;
	ContadorArrayDatosLibro++;
	datosLibro[ContadorArrayDatosLibro] = "Total: ";
	ContadorArrayDatosLibro++;
	datosLibro[ContadorArrayDatosLibro] = to_string(totalEjemplares);
	ContadorArrayDatosLibro++;
	datosLibro[ContadorArrayDatosLibro] = "Prestados: ";
	ContadorArrayDatosLibro++;
	datosLibro[ContadorArrayDatosLibro] =  to_string(ejemplaresPrestados);
	ContadorArrayDatosLibro++;
				
	return datosLibro;
}
*/


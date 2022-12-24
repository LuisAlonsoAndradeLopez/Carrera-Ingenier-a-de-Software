Algoritmo sin_titulo
	//Escribe un algoritmo que te pregunte cuántos años tienes y te diga si eres mayor de edad o no.
	Definir TuEdad Como Entero;
	Definir EresMayorOMenor Como Caracter;
	TuEdad = 0;
	EresMayorOMenor = "0";
	Imprimir "Dime tu edad: ";
	Leer TuEdad;
	Si TuEdad < 18 Entonces
		EresMayorOMenor = "Eres menor de edad";
	FinSi
	Si TuEdad >= 18 Entonces
		EresMayorOMenor = "Eres mayor de edad";
	FinSi
	Imprimir EresMayorOMenor;
FinAlgoritmo

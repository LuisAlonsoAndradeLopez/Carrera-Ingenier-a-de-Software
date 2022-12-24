Algoritmo sin_titulo
	//Escribe un algoritmo para saber si un número dado por el usuario es par o impar.
	Definir Numeral Como Entero;
	Numeral = 0;
	Imprimir "Dime un numero";
	Leer Numeral;
	Si Numeral <> 0 Entonces
		Si Numeral % 2 <> 0 Entonces
			Imprimir "El numero que me diste es impar";
		SiNo
			Imprimir "El numero que me diste es par";
		FinSi
	SiNo
		Imprimir "El numero que me diste es neutro";
	FinSi
FinAlgoritmo

Algoritmo sin_titulo
	//Pedir un n�mero entero mayor a cero y menor a 100 y que escriba sus divisores
	//(si no cumple esas caracter�sticas no hace nada, s�lo muestra el mensaje de error correspondiente).
	Definir Numeral, LosDivisores, Contador Como Entero;
	Numeral = 0;
	LosDivisores = 1;
	Contador = 0;
	Imprimir "Dime un numero ENTERO y te digo sus divisores";
	Leer Numeral;
	Si Numeral > 0 y Numeral < 100 Entonces
		Imprimir "Los divisores del numero que me pusiste son: ";
		Mientras Contador < Numeral Hacer
			Si Numeral % LosDivisores = 0 Entonces
				Imprimir LosDivisores;
			FinSi
			LosDivisores = LosDivisores + 1;
			Contador = Contador + 1;
		FinMientras
	FinSi
FinAlgoritmo
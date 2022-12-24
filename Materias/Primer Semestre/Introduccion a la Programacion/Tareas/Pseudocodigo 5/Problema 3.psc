Algoritmo sin_titulo
	//Leer una cantidad indefinida de números hasta que se escriba un el 0
	//y como resultado mostrar cuántos números positivos fueron en total y cuántos negativos.
	Definir ContadorNumerosPositivos, ContadorNumerosNegativos Como Entero;
	Definir Numeral Como Real;
	Numeral = 1;
	ContadorNumerosNegativos = 0;
	ContadorNumerosPositivos = 0;
	Mientras Numeral <> 0 Hacer
		Imprimir "Dime un numero positivo o negativo, pero si me pones 0 te digo cuantos numeros potitivos me pusiste y cuantos numeros negativos me pusiste: ";
		Leer Numeral;
		Si Numeral < 0 Entonces
			ContadorNumerosNegativos = ContadorNumerosNegativos + 1;
		FinSi
		Si Numeral > 0 Entonces
			ContadorNumerosPositivos = ContadorNumerosPositivos + 1;
		FinSi
	FinMientras
	Imprimir "El total de numeros positivos que me pusiste es de: ";
	Imprimir ContadorNumerosPositivos;
	Imprimir "El total de numeros negativos que me pusiste es de: ";
	Imprimir ContadorNumerosNegativos;
FinAlgoritmo

Algoritmo sin_titulo
	//Escribir un algoritmo que solicite dos n�meros enteros positivos y si son iguales que muestre el resultado de multiplicarlos.
	Definir Numero1, Numero2, Multiplicaci�n Como Entero;
	Numero1 = 0;
	Numero2 = 0;
	Multiplicaci�n = 0;
	Imprimir "Dame un n�mero entero positivo: ";
	Leer Numero1;
	Imprimir "Dame otro n�mero entero positivo : ";
	Leer Numero2;
	Si (Numero1 < 0) y (Numero2 < 0) Entonces
		Imprimir "Te dije que me dieras numeros enteros positivos";
	FinSi
	Si (Numero1 < 0) y (Numero2 >= 0) Entonces
		Imprimir "Te dije numeros iguales, enteros y positivos";
	FinSi
	Si (Numero1 >= 0) y (Numero2 < 0) Entonces
		Imprimir "Te dije numeros iguales, enteros y positivos";
	FinSi
	Si (Numero1 = 0) y (Numero2 = 0) Entonces
		Imprimir "No me pongas ceros por que son neutros";
	FinSi
	Si (Numero1 > 0) y (Numero2 > 0) Entonces
		Si Numero1 = Numero2 Entonces
			Multiplicaci�n = Numero1 * Numero2;
			Imprimir Multiplicaci�n;
		FinSi
		Si Numero1 <> Numero2 Entonces
			Imprimir "Que sean iguales los numeros por favor";
		FinSi
	FinSi
FinAlgoritmo

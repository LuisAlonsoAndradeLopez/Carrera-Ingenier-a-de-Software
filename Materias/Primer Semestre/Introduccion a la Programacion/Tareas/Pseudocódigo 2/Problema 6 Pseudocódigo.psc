Algoritmo sin_titulo
	//Elabora un algoritmo que lea tres números enteros y devuelva el mayor.
	Definir Numero1, Numero2, Numero3, NumeroParaDar Como Real;
	Numero1 = 0;
	Numero2 = 0;
	Numero3 = 0;
	NumeroParaDar = 0;
	Imprimir "Dime tu primer numero";
	Leer Numero1;
	Imprimir "Dime tu segundo numero";
	Leer Numero2;
	Imprimir "Dime tu tercer numero";
	Leer Numero3;
	Si (Numero1 >= Numero2) y (Numero1 >= Numero3) Entonces
		NumeroParaDar = Numero1;
	FinSi
	Si (Numero2 >= Numero1) y (Numero2 >= Numero3) Entonces
		NumeroParaDar = Numero2;
	FinSi
	Si (Numero3 >= Numero1) y (Numero3 >= Numero2) Entonces
		NumeroParaDar = Numero3;
	FinSi
	Imprimir "El numero mayor de los que me diste es: ", NumeroParaDar;
FinAlgoritmo

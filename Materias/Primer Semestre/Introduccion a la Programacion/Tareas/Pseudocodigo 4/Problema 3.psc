Algoritmo sin_titulo
	//Escribe un algoritmo que pida los 3 lados de un triángulo
	//e indique si es equilátero (3 lados iguales), isósceles
	//(2 lados iguales) o escaleno (3 lados desiguales).
	Definir Lado1, Lado2, Lado3 Como Real;
	Imprimir "Dime el lado 1";
	Leer Lado1;
	Imprimir "Dime el lado 2";
	Leer Lado2;
	Imprimir "Dime el lado 3";
	Leer Lado3;
	Si (Lado1 <> Lado2) y (Lado1 <> Lado3) Entonces
		Si (Lado2 <> Lado1) y (Lado2 <> Lado3) Entonces
			Si (Lado3 <> Lado1) y (Lado3 <> Lado2) Entonces
				Imprimir "El triangulo es escaleno";
			FinSi
		SiNo
			Imprimir "El triangulo es isóceles";
		FinSi
	SiNo
		Si Lado1 = Lado2 y Lado1 = Lado3 Entonces
			Si Lado2 = Lado1 y Lado2 = Lado3 Entonces
				Si Lado3 = Lado1 y Lado3 = Lado2 Entonces
					Imprimir "El triangulo es equilatero";	
				FinSi
			FinSi
		SiNo
			Imprimir "El triangulo es isóceles";
		FinSi
	FinSi
FinAlgoritmo

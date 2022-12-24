Algoritmo sin_titulo
	//Preguntar cuántos números se van a introducir, pedir esos números, 
	//y mostrar cuantos son pares y cuantos impares.
	Definir Numeral, NumerosParaIntroducir, CuantosNumerosVan, ContadorDePares, ContadorDeImpares Como Entero;
	NumerosParaIntroducir = 0;
	Numeral = 0;
	CuantosNumerosVan = 0;
	ContadorDePares = 0;
	ContadorDeImpares = 0;
	Imprimir "Dime cuantos numeros quieres introducir";
	Leer NumerosParaIntroducir;
	Mientras CuantosNumerosVan < NumerosParaIntroducir Hacer
		Si CuantosNumerosVan > 0	Entonces
			Imprimir "Dime otro numero";
		SiNo
			Imprimir "Dime un numero";
		FinSi
		Leer Numeral;
		Si Numeral % 2 = 0 Entonces
			Si Numeral <> 0 Entonces
				ContadorDePares = ContadorDePares + 1;
			FinSi
		FinSi
		Si Numeral % 2 <> 0 Entonces
			ContadorDeImpares = ContadorDeImpares + 1;
		FinSi
		CuantosNumerosVan = CuantosNumerosVan + 1;
	FinMientras
	Imprimir "Los Numeros Impares que me pusiste son: ";
	Imprimir ContadorDeImpares;
	Imprimir "Los Numeros Pares que me pusiste son: ";
	Imprimir ContadorDePares;
FinAlgoritmo

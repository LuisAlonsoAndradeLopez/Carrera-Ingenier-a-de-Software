Algoritmo sin_titulo
	//Leer números enteros hasta que teclees un 0 y como resultado mostrar la suma de esos números.
	Definir Numeral, Contador, CuantosNumerosVan Como Entero;
	Numeral = 1;
	Contador = 0;
	CuantosNumerosVan = 0;
	Mientras Numeral <> 0 Hacer
		Si CuantosNumerosVan > 0 Entonces
			Imprimir "Dime otro numero, pero si me pones 0 te sumo y te doy el resultado de los numeros que me has puesto";
		SiNo
			Imprimir "Dime un numero, pero si me pones 0 te sumo y te doy el resultado de los numeros que me has puesto";
		FinSi
		Leer Numeral;
		Contador = Contador + Numeral;
		CuantosNumerosVan = CuantosNumerosVan + 1;
	FinMientras
	Imprimir "La suma total de todos los numeros que me pusiste es: ";
	Imprimir Contador;
FinAlgoritmo

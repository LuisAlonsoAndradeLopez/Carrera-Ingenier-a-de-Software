Algoritmo sin_titulo
	//Escribe un algoritmo que calcule el valor absoluto de un n�mero entero.
	Definir NumeroSinValorAbsoluto, ValorAbsoluto, NumeroConValorAbsoluto Como Real;
	NumeroSinValorAbsoluto = 0;
	Imprimir "Dime tu n�mero ";
	Leer NumeroSinValorAbsoluto;
	ValorAbsoluto = 0;
	NumeroConValorAbsoluto = NumeroSinValorAbsoluto;
	Si NumeroSinValorAbsoluto < 0 Entonces
		NumeroConValorAbsoluto = NumeroSinValorAbsoluto * (-1);
	FinSi
	Imprimir "Su numero ahora es: ", NumeroConValorAbsoluto;
FinAlgoritmo

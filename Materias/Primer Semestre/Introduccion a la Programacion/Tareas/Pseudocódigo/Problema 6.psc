Algoritmo sin_titulo
	//Escribir un algoritmo que muestre el total a pagar en una tienda que tiene de oferta un 15% de descuento por cada compra
	Definir TuCuentaSinDescuento, TuCuentaFinal, Porcentaje Como Real;
	TuCuentaSinDescuento = 0;
	Imprimir "Dime el total de tu compra";
	Leer TuCuentaSinDescuento;
	Porcentaje = TuCuentaSinDescuento * 0.15;
	TuCuentaFinal = TuCuentaSinDescuento + Porcentaje;
	Imprimir "Tu Cuenta Final es: ", TuCuentaFinal;
FinAlgoritmo

Algoritmo sin_titulo	
	//Escribe un algoritmo que te pida el total de tu compra y haga un descuento del 10% si fue mayor o igual a $500 pesos.
	Definir TotalCompraSinDescuento, Descuento, TotalCompraConDescuento Como Real;
	TotalCompraSinDescuento = 0;
	Imprimir "Dime el total de tu compra ";
	Leer TotalCompraSinDescuento;
	TotalCompraConDescuento = TotalCompraSinDescuento;
	Si TotalCompraSinDescuento >= 500 Entonces
		Descuento = TotalCompraSinDescuento * 0.10;
		TotalCompraConDescuento = TotalCompraSinDescuento - Descuento;
	FinSi
	Imprimir "Tu compra ahora es: ", TotalCompraConDescuento;
FinAlgoritmo

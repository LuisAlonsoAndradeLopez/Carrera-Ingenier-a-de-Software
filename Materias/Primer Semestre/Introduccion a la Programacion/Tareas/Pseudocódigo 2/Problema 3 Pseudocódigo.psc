Algoritmo sin_titulo
	//Escribe un algoritmo que te pida el total de tu compra haga un descuento del 10% si se encuentra entre 500 y 1000 (inclusivos) y un 20% si fue mayor a 1000.
	Definir TotalCompraSinDescuento, TotalCompraConDescuento, Descuento Como Real;
	TotalCompraSinDescuento = 0;
	Imprimir "Dime el total de tu compra ";
	Leer TotalCompraSinDescuento;
	Descuento = 0;
	TotalCompraConDescuento = TotalCompraSinDescuento;
	Si (TotalCompraSinDescuento < 500) Entonces
		TotalCompraConDescuento = TotalCompraSinDescuento;
		
	FinSi
	Si (TotalCompraSinDescuento >= 500)  y  (TotalCompraSinDescuento <= 1000) Entonces
		Descuento = TotalCompraSinDescuento * 0.10;
		TotalCompraConDescuento = TotalCompraSinDescuento - Descuento;
	FinSi
	
	Si (TotalCompraSinDescuento > 1000) Entonces
		Descuento = TotalCompraSinDescuento * 0.20;
		TotalCompraConDescuento = TotalCompraSinDescuento - Descuento;
	FinSi
	Imprimir "To compra final es: ", TotalCompraConDescuento;
FinAlgoritmo

//Es mejor usar el SiNo para que haya mejor rendimiento
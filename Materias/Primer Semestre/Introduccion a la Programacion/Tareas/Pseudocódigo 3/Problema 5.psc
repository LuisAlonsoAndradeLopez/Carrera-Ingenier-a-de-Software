Algoritmo sin_titulo
	//En una empresa el sueldo mensual de los empleados se calcula sumando el sueldo base ($900 por semana).
	//Adem�s, si el empleado realiz� ventas de al menos 3 mil pesos se le otorga un 10% m�s de comisiones.
	//Elabore un algoritmo que solicite el total de ventas de un empleado en un mes y diga cu�nto debe ser su pago en dicho mes.
	Definir SueldoBase, TotalDeVenta, PagoFinal, Comisiones, TotalSueldoBase Como Real;
	SueldoBase = 900;
	TotalDeVenta = 0;
	PagoFinal = 0;
	Comisiones = 0;
	TotalSueldoBase = SueldoBase * 4;
	Imprimir "Dime el total de ventas del empleado";
	Leer TotalDeVenta;
	Si (TotalDeVenta < 0) Entonces
		Imprimir "�Qu�? �C�mo que ventas negativas?";
	FinSi
	Si (TotalDeVenta >= 0) y (TotalDeVenta < 3000) Entonces
		PagoFinal = TotalSueldoBase;
		Imprimir "El pago del empleado es: ", PagoFinal;
	FinSi
	Si TotalDeVenta >= 3000 Entonces
		Comisiones = TotalSueldoBase * 0.10;
		PagoFinal = TotalSueldoBase + Comisiones;
		Imprimir "El pago del empleado es: ", PagoFinal;
	FinSi
FinAlgoritmo
	
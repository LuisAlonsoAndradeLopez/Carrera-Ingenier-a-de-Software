Algoritmo sin_titulo
	//Escribe un algoritmo que reciba un número entre 1 y 7, y muestre el nombre del día correspondiente suponiendo
	//que el numero 1 es lunes.
	Definir DiaEnNumero Como Entero;
	Definir TeDigoElDia Como Caracter;
	DiaEnNumero = 0;
	TeDigoElDia = "Nombre lo escribiste mal, dime el numero correcto";
	Imprimir "A ver, dime el dia en número";
	Leer DiaEnNumero;
	Si DiaEnNumero = 1 Entonces
		TeDigoElDia = "El dia es lunes";
	FinSi
	Si DiaEnNumero = 2 Entonces
		TeDigoElDia = "El dia es martes";
	FinSi
	Si DiaEnNumero = 3 Entonces
		TeDigoElDia = "El dia es miércoles";
	FinSi
	Si DiaEnNumero = 4 Entonces
		TeDigoElDia = "El dia es jueves";
	FinSi
	Si DiaEnNumero = 5 Entonces
		TeDigoElDia = "El dia es viernes";
	FinSi
	Si DiaEnNumero = 6 Entonces
		TeDigoElDia = "El dia es sábado";
	FinSi
	Si DiaEnNumero = 7 Entonces
		TeDigoElDia = "El dia es domingo";
	FinSi
	Imprimir TeDigoElDia;
FinAlgoritmo

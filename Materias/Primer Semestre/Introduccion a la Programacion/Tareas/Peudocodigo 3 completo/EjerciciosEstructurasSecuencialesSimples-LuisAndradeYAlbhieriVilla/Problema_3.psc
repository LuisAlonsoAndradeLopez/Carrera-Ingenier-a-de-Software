Algoritmo NotificarLaQuincena
//Escribir un algoritmo que pregunte el día del mes (1-30) y si es 14 o 29 muestre un mensaje diciendo que es día de pago (Quincena).
  Definir dia Como Entero;
  Definir mensaje Como Cadena;
  Escribir "Por favor ingrese el día del mes:";
  Leer dia;
  //En caso de que dia no sea quincena
  mensaje <- "No es día de pago";
  //En caso de que dia si sea quina
  Si dia == 14 O dia == 29 Entonces
    mensaje <- "Es día de pago";
  FinSi
  //En caso de ingresar datos no validos o no sujdtos a la norma
  Si dia > 30 O dia < 1 Entonces
    mensaje <- "No es un día del mes";
  FinSi
  Escribir dia, " ", mensaje;
FinAlgoritmo
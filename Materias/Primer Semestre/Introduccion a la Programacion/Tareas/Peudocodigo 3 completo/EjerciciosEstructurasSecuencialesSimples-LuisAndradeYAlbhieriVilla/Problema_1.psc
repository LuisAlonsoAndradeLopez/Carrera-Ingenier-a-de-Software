Algoritmo SolicitarBeca
//Escribir un algoritmo que pregunte la calificación final de un alumno. Si la calificación es mayor o igual a 9 que muestre un mensaje indicando que puede solicitar una beca.
  Definir califFinal Como Real;
  Definir mensaje Como Cadena;
  Escribir "Digita tu calificación final: ";
  Leer califFinal;
  mensaje <- "No eres apto para solicitar una beca";
  Si califFinal >= 9 Entonces
    mensaje <- "Eres apto para solicitar una beca";
  FinSi
  Escribir mensaje;
FinAlgoritmo
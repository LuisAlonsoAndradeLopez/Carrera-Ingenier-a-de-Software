Algoritmo MayoriaDeEdad
//Para poder entrar a una discoteca las personas deben tener 18 años o más. Elabore un algoritmo que pregunte la edad y diga si puede ingresar o no.
  Definir edad Como Entero;
  Definir confirmacion Como Cadena;
  Escribir "Por favor ingrese su edad:";
  Leer edad;
  //En caso de edad ser menor a dieciocho
  confirmacion <- "No tienes la mayoría de edad para poder pasar";
  //En caso de edad ser mayor o igual a dieciocho
  Si edad >= 18 Entonces
    confirmacion <- "Eres mayor de edad puedes pasar";
  FinSi
  Escribir confirmacion;
FinAlgoritmo
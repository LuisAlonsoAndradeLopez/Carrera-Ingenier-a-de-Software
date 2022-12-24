/*
Ejercicio 1: 
Obtener el nombre y monto máximo de la persona que ha hecho una compra
(Nombre con el promedio de compra mas alto)
*/
SELECT A.FirstName, A.MiddleName, A.LastName, B.TotalDue
FROM Persons A
JOIN Orders B
ON A.BusinessEntityID = B.BusinessEntityID
ORDER BY B.TotalDue DESC, B.BusinessEntityID DESC
LIMIT 1
;

/*
Ejercicio 2:
Obtener el nombre completo y monto mínimo de la persona que ha hecho una compra.
(Nombre con el promedio de compra mas bajo)
*/
SELECT A.FirstName, A.MiddleName, A.LastName, B.TotalDue
FROM Persons A
JOIN Orders B
ON A.BusinessEntityID = B.BusinessEntityID
ORDER BY B.TotalDue ASC, B.BusinessEntityID ASC
LIMIT 1
;

/*
Ejercicio 3:
Devuelve el promedio de todas las compras del BusinessEntityID = 10
*/
SELECT AVG(A.TotalDue)
AS Promedio
FROM Orders A
WHERE A.BusinessEntityID = 10;

/*
Ejercicio 4:
Devuelve la suma de todas las compras de los usuarios que viven en Nevada.
*/
SELECT SUM(B.TotalDue)
AS SumaDeCompras
FROM Persons A
INNER JOIN Orders B
ON A.BusinessEntityID = B.BusinessEntityID
INNER JOIN PersonsAdress C
ON A.BusinessEntityID = C.BusinessEntityID
INNER JOIN StatesProvice D
ON C.StateProviceID = D.StateProviceID
WHERE D.Name = 'Nevada';

/*
Ejercicio 5:
Agrupa por nombre completo la suma del subtotal de compras de las personas que viven en Puerto Rico.
*/
SELECT A.FirstName, A.MiddleName, A.LastName,
SUM(B.SubTotal) AS TotalCompras, D.Name
FROM Persons A
INNER JOIN Orders B
ON A.BusinessEntityID = B.BusinessEntityID
INNER JOIN PersonsAdress C
ON A.BusinessEntityID = C.BusinessEntityID
INNER JOIN StatesProvice D
ON C.StateProviceID = D.StateProviceID
GROUP BY A.FirstName, A.MiddleName, A.LastName, D.Name
HAVING D.Name = "Puerto Rico";

/*
Ejercicio 6:
¿Cuál es el promedio del subtotal de todas las compras?
*/
SELECT AVG(A.SubTotal)
AS Promedio
FROM Orders A;

/*
Ejercicio 7:
¿Cuál es el monto total de la taza de amortización de todas las compras?
*/
SELECT SUM(A.TaxAmt)
AS MontoTotal
FROM Orders A;
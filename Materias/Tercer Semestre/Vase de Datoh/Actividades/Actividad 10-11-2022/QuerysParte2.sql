/*
Ejercicio 9:
Obtén el nombre completo de los usuarios junto a su promedio de compras realizadas, donde sus compras sean mayores a 1500.
*/
SELECT CONCAT (A.FirstName, " ", A.MiddleName, " ", A.LastName) AS FULL_NAME, AVG(B.TotalDue) AS AVG_SALES
FROM Persons A
JOIN Orders B
ON A.BusinessEntityID = B.BusinessEntityID
GROUP BY A.FirstName, A.MiddleName, A.LastName
HAVING AVG(B.TotalDue) > 1500;


/*
Ejercicio 10: PENDIENTE
Desplegar el nombre de las provincias junto al total de compras realizadas por sus habitantes. 
*/
SELECT D.Name AS PROVINCE, SUM(B.TotalDue) AS SUM_SALE
FROM Orders B
LEFT JOIN PersonsAdress C
ON B.BusinessEntityID = C.BusinessEntityID
LEFT JOIN StatesProvice D
ON C.StateProviceID = D.StateProviceID
GROUP BY D.Name;

/*
Ejercicio 11:
Desplegar las provincias junto a su código de provincia, el número de usuarios que hicieron una compra y el promedio total de compras realizadas. 
*/
SELECT 
    C.Name AS PROVINCE,
    C.StateProviceCode AS PROVINCE_CODE,
    COUNT(A.BusinessEntityID) AS TOTAL_PERSON,
    AVG(A.TotalDue) AS AVG_SALES
FROM Orders A
JOIN PersonsAdress B
ON A.BusinessEntityID = B.BusinessEntityID
JOIN StatesProvice C
ON B.StateProviceID = C.StateProviceID
GROUP BY C.Name, C.StateProviceCode;

/*
Ejercicio 12:
Desplegar las provincias junto al número de personas que viven en ella. 
*/
SELECT 
    C.Name AS PROVINCE,
    COUNT(A.BusinessEntityID) AS TOTAL_PERSONS
FROM Persons A
JOIN PersonsAdress B
ON A.BusinessEntityID = B.BusinessEntityID
JOIN StatesProvice C
ON B.StateProviceID = C.StateProviceID
GROUP BY C.Name;


/*
Ejercicio 13:
Mostrar los tipos de teléfono junto al número de personas que tienen registrados.
*/
SELECT 
    C.Name AS PHONE_TYPE,
    COUNT(A.BusinessEntityID) AS TOTAL_PERSONS
FROM Persons A
JOIN PersonsPhone B
ON A.BusinessEntityID = B.BusinessEntityID
JOIN PhoneNumberTypes C
ON B.PhoneNumberTypeID = C.PhoneNumberTypeID
GROUP BY C.Name;


/*
Ejercicio 14:
Mostrar el nombre completo de las personas junto al número de direcciones registradas y correos. 
*/
SELECT CONCAT(A.FirstName, " ",
              A.MiddleName, " ",
              A.LastName
        )AS FULL_NAME,
    COUNT(B.AdressLine1) AS TOTAL_EMAIL,
    COUNT(C.EmailAdress) AS TOTAL_ADRESS
FROM Persons A
JOIN PersonsAdress B
ON A.BusinessEntityID = B.BusinessEntityID
JOIN PersonsEmailAdress C
ON A.BusinessEntityID = C.BusinessEntityID
GROUP BY A.FirstName, A.MiddleName, A.LastName;


/*
Ejercicio 15:
Mostrar el nombre completo de las personas, correo, provincia, dirección, número de compras realizadas, promedio de compras, compra mínima y compra máxima realizada.
*/
SELECT CONCAT(
    A.FirstName, " ", 
    A.MiddleName, " ", 
    A.LastName, " "
    ) AS FULL_NAME,
    B.EmailAdress AS EMAIL_ADRESS,
    D.Name AS PROVINCE,
    C.AdressLine1 AS ADRESS,
    COUNT(E.TotalDue) AS TOTAL_SALES,
    AVG(E.TotalDue) AS AVG_SALES,
    MIN(E.TotalDue) AS MAX_SALE,
    MAX(E.TotalDue) AS MIN_SALE
FROM Persons A
LEFT JOIN PersonsEmailAdress B
ON A.BusinessEntityID = B.BusinessEntityID
LEFT JOIN PersonsAdress C
ON A.BusinessEntityID = C.BusinessEntityID
LEFT JOIN StatesProvice D
ON C.StateProviceID = D.StateProviceID
LEFT JOIN Orders E
ON A.BusinessEntityID = E.BusinessEntityID
GROUP BY A.FirstName, A.MiddleName, A.LastName, B.EmailAdress, D.Name, C.AdressLine1;

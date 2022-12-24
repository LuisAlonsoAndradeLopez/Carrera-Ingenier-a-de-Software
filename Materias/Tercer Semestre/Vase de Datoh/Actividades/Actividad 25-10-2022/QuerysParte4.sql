/*UNION*/
    SELECT * FROM Persons A
    LEFT JOIN PersonsEmailAdress B
    ON A.BusinessEntityID = B.BusinessEntityID
    LEFT JOIN PersonsPhone C
    ON B.BusinessEntityID = C.BusinessEntityID
    LEFT JOIN PersonsAdress D
    ON C.BusinessEntityID = D.BusinessEntityID
    WHERE A.LastName LIKE 'A%' &&
    B.EmailAdress LIKE '%0%' &&
    C.PhoneNumber LIKE '1%' &&
    D.AdressLine1 LIKE '%1%'
UNION
    SELECT * FROM Persons A
    RIGHT JOIN PersonsEmailAdress B
    ON A.BusinessEntityID = B.BusinessEntityID
    RIGHT JOIN PersonsPhone C
    ON B.BusinessEntityID = C.BusinessEntityID
    RIGHT JOIN PersonsAdress D
    ON C.BusinessEntityID = D.BusinessEntityID
    WHERE A.LastName LIKE 'A%' &&
    B.EmailAdress LIKE '%0%' &&
    C.PhoneNumber LIKE '1%' &&
    D.AdressLine1 LIKE '%1%'
;

/*INTERSECCION*/
SELECT * FROM Persons A
INNER JOIN PersonsEmailAdress B
ON A.BusinessEntityID = B.BusinessEntityID
INNER JOIN PersonsPhone C
ON B.BusinessEntityID = C.BusinessEntityID
INNER JOIN PersonsAdress D
ON C.BusinessEntityID = D.BusinessEntityID
WHERE A.LastName LIKE 'A%' &&
B.EmailAdress LIKE '%0%' &&
C.PhoneNumber LIKE '1%' &&
D.AdressLine1 LIKE '%1%'
;

/*A-B*/
SELECT * FROM Persons A
LEFT JOIN PersonsEmailAdress B
ON A.BusinessEntityID = B.BusinessEntityID
LEFT JOIN PersonsPhone C
ON B.BusinessEntityID = C.BusinessEntityID
LEFT JOIN PersonsAdress D
ON C.BusinessEntityID = D.BusinessEntityID
WHERE A.LastName LIKE 'A%' &&
B.EmailAdress LIKE '%0%' &&
C.PhoneNumber LIKE '1%' &&
D.AdressLine1 LIKE '%1%'
;

/*B-A*/
SELECT * FROM Persons A
RIGHT JOIN PersonsEmailAdress B
ON A.BusinessEntityID = B.BusinessEntityID
RIGHT JOIN PersonsPhone C
ON B.BusinessEntityID = C.BusinessEntityID
RIGHT JOIN PersonsAdress D
ON C.BusinessEntityID = D.BusinessEntityID
WHERE A.LastName LIKE 'A%' &&
B.EmailAdress LIKE '%0%' &&
C.PhoneNumber LIKE '1%' &&
D.AdressLine1 LIKE '%1%'
;

/*A + INTERSECCION CON B*/
SELECT * FROM Persons A
LEFT JOIN PersonsEmailAdress B
ON A.BusinessEntityID = B.BusinessEntityID
LEFT JOIN PersonsPhone C
ON B.BusinessEntityID = C.BusinessEntityID
LEFT JOIN PersonsAdress D
ON C.BusinessEntityID = D.BusinessEntityID
WHERE A.LastName LIKE 'A%' &&
B.EmailAdress LIKE '%0%' &&
C.PhoneNumber LIKE '1%' &&
D.AdressLine1 LIKE '%1%'
;

/*B + INTERSECCION CON A*/
SELECT * FROM Persons A
RIGHT JOIN PersonsEmailAdress B
ON A.BusinessEntityID = B.BusinessEntityID
RIGHT JOIN PersonsPhone C
ON B.BusinessEntityID = C.BusinessEntityID
RIGHT JOIN PersonsAdress D
ON C.BusinessEntityID = D.BusinessEntityID
WHERE A.LastName LIKE 'A%' &&
B.EmailAdress LIKE '%0%' &&
C.PhoneNumber LIKE '1%' &&
D.AdressLine1 LIKE '%1%'
;
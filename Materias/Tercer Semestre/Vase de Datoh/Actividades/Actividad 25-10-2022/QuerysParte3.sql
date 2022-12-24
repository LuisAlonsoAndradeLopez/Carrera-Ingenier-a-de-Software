/*UNION*/
    SELECT * FROM Persons A
    LEFT JOIN PersonsPhone C
    ON A.BusinessEntityID = C.BusinessEntityID
    LEFT JOIN PhoneNumberTypes B
    ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
    WHERE (C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
    && (B.PhoneNumberTypeID = 1)
UNION
    SELECT * FROM Persons A
    RIGHT JOIN PersonsPhone C
    ON A.BusinessEntityID = C.BusinessEntityID
    RIGHT JOIN PhoneNumberTypes B
    ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
    WHERE (C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
    && (B.PhoneNumberTypeID = 1)
;

/*INTERSECCION*/
SELECT * FROM Persons A
INNER JOIN PersonsPhone C
ON A.BusinessEntityID = C.BusinessEntityID
INNER JOIN PhoneNumberTypes B
ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
WHERE (B.PhoneNumberTypeID = 1) && 
(C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
;

/*A-B*/
SELECT * FROM Persons A
LEFT JOIN PersonsPhone C
ON A.BusinessEntityID = C.BusinessEntityID
LEFT JOIN PhoneNumberTypes B
ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
WHERE (B.PhoneNumberTypeID = 1) && 
(C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
;

/*B-A*/
SELECT * FROM Persons A
RIGHT JOIN PersonsPhone C
ON A.BusinessEntityID = C.BusinessEntityID
RIGHT JOIN PhoneNumberTypes B
ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
WHERE (B.PhoneNumberTypeID = 1) && 
(C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
;

/*A + INTERSECCION CON B*/
    SELECT * FROM Persons A
    LEFT JOIN PersonsPhone C
    ON A.BusinessEntityID = C.BusinessEntityID
    LEFT JOIN PhoneNumberTypes B
    ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
    WHERE (B.PhoneNumberTypeID = 1) && 
    (C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
UNION
    SELECT * FROM Persons A
    INNER JOIN PersonsPhone C
    ON A.BusinessEntityID = C.BusinessEntityID
    INNER JOIN PhoneNumberTypes B
    ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
    WHERE (B.PhoneNumberTypeID = 1) && 
    (C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
;

/*B + INTERSECCION CON A*/
    SELECT * FROM PhoneNumberTypes B
    LEFT JOIN PersonsPhone C
    ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
    LEFT JOIN Persons A
    ON A.BusinessEntityID = C.BusinessEntityID
    WHERE (B.PhoneNumberTypeID = 1) && 
    (C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
UNION
    SELECT * FROM PhoneNumberTypes B
    INNER JOIN PersonsPhone C
    ON C.PhoneNumberTypeID = B.PhoneNumberTypeID
    INNER JOIN Persons A
    ON A.BusinessEntityID = C.BusinessEntityID
    WHERE (B.PhoneNumberTypeID = 1) && 
    (C.PhoneNumber LIKE '6%' || C.PhoneNumber LIKE '1%')
;
/*UNION*/ 
    SELECT * FROM StatesProvice A
    LEFT JOIN PersonsAdress B
    ON A.StateProviceID = B.StateProviceID
    WHERE (A.Name LIKE 'N%' || A.Name LIKE 'O%') &&
    (B.PostalCode LIKE '9%')
UNION
    SELECT * FROM StatesProvice A
    RIGHT JOIN PersonsAdress B
    ON A.StateProviceID = B.StateProviceID
    WHERE (A.Name LIKE 'N%' || A.Name LIKE 'O%') &&
    (B.PostalCode LIKE '9%')
;

/*INTERSECCION*/
SELECT * FROM StatesProvice A
INNER JOIN PersonsAdress B
ON A.StateProviceID = B.StateProviceID
WHERE (A.Name LIKE 'N%' || A.Name LIKE 'O%')
&& (B.PostalCode LIKE '9%')
;


/*A-B*/
SELECT * FROM StatesProvice A
LEFT JOIN PersonsAdress B
ON A.StateProviceID = B.StateProviceID
WHERE (A.Name LIKE 'N%' || A.Name LIKE 'O%')
&& (B.PostalCode LIKE '9%')
;


/*B-A*/
SELECT * FROM StatesProvice A
RIGHT JOIN PersonsAdress B
ON A.StateProviceID = B.StateProviceID
WHERE (A.Name LIKE 'N%' || A.Name LIKE 'O%')
&& (B.PostalCode LIKE '9%')
;


/*B + INTERSECCION CON A*/
SELECT * FROM PersonsAdress B
WHERE (B.PostalCode LIKE '9%')
;


/*A + INTERSECCION CON B*/
SELECT * FROM StatesProvice A
WHERE (A.Name LIKE 'N%' || A.Name LIKE 'O%')
;
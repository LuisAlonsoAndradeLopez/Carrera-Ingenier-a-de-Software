/*#1*/

SELECT 
    A.FirstName, 
    A.MiddleName, 
    A.LastName,
    A.PersonType,
    B.EmailAdress 
FROM Persons A 
INNER JOIN PersonsEmailAdress B 
ON A.BusinessEntityID = B.BusinessEntityID
WHERE A.PersonType = 'SC'
;

/*#2*/

INSERT INTO Persons(
    PersonType,
    FirstName,
    MiddleName,
    LastName
)VALUES
    ('EM', 'Lorena', 'A.', 'Ramirez'),
    ('SP', 'WIlliam', 'L.', 'Landa'),
    ('SC', 'Juan', 'P.', 'Perez'),
    ('EM', 'Erika', 'M.', 'Caballero')
;

/*#3*/

INSERT INTO StatesProvice(
    StateProviceCode,
    CountryRegionCode,
    `Name`
)VALUES
    ('ISL', 'IL', 'Islandia'),
    ('MEX', 'MX', 'México'),
    ('CDS', 'CS', 'Corea del Sur')
;

/*#4*/

ALTER TABLE PersonsAdress
ADD COLUMN AdressTypeID INT;

ALTER TABLE PersonsAdress 
ADD CONSTRAINT FK_PersonsAdress_AdressTypeID 
FOREIGN KEY (AdressTypeID) 
REFERENCES AdressType(AdressTypeID)
ON DELETE CASCADE;

UPDATE PersonsAdress
SET AdressTypeID =('2')
WHERE AdressID >= 1 && AdressID <= 5
;

UPDATE PersonsAdress
SET AdressTypeID = ('3')
WHERE AdressID >= 6 && AdressID <= 23
;

/*#5*/

    SELECT 
        A.*, B.AdressLine1, C.StateProviceCode
    FROM Persons A
    LEFT JOIN PersonsAdress B
    ON A.BusinessEntityID = B.BusinessEntityID
    LEFT JOIN StatesProvice C
    ON B.StateProviceID = C.StateProviceID
UNION
    SELECT 
        A.*, B.AdressLine1, C.StateProviceCode
    FROM Persons A
    RIGHT JOIN PersonsAdress B
    ON A.BusinessEntityID = B.BusinessEntityID
    RIGHT JOIN StatesProvice C
    ON B.StateProviceID = C.StateProviceID
;

/*#6*/
SELECT A.Name, B.AdressLine1
FROM AdressType A
RIGHT JOIN PersonsAdress B
ON A.AdressTypeID = B.AdressTypeID
;

/*#7*/
SELECT
    A.*, B.FirstName, B.MiddleName, B.LastName
FROM PersonsPhone A
INNER JOIN Persons B
ON A.BusinessEntityID = B.BusinessEntityID
;

/*#8*/
SELECT COUNT(A.Name)
FROM StatesProvice A
INNER JOIN PersonsAdress B
ON A.StateProviceID = B.StateProviceID
;

/*#9*/
SELECT 
    A.AdressLine1, A.City, A.PostalCode, B.AdressTypeID
FROM PersonsAdress A
INNER JOIN AdressType B
ON A.AdressTypeID = B.AdressTypeID
WHERE B.Name = 'Home'
;

/*#10*/
SELECT
    A.FirstName, A.MiddleName, A.LastName, C.Name, D.EmailAdress
FROM Persons A
INNER JOIN PersonsAdress B
ON A.BusinessEntityID = B.BusinessEntityID
INNER JOIN StatesProvice C
ON B.StateProviceID = C.StateProviceID
INNER JOIN PersonsEmailAdress D
ON A.BusinessEntityID = D.BusinessEntityID
;
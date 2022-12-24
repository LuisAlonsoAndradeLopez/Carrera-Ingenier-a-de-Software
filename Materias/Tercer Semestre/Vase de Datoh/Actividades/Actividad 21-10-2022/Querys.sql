/*Departamento de ventas*/

/*#1*/
SELECT * FROM StatesProvice WHERE CountryRegionCode IN ('US', 'CA', 'DE');

/*#2*/
SELECT `Name` FROM StatesProvice ORDER BY `Name` ASC;

/*#3*/
SELECT (StateProviceCode), (CountryRegionCode) FROM StatesProvice WHERE (`Name` LIKE 'N%') || (`Name` LIKE 'S%');


/*Departamento de recursos humanos*/

/*#1*/
SELECT CONCAT(MiddleName, ' ', LastName, ' ', FirstName, ' ', PersonType) AS Persons FROM Persons ORDER BY FirstName DESC;

/*#2*/
SELECT LastName FROM Persons WHERE LENGTH(LastName) > 5;

/*#3*/
SELECT PhoneNumber FROM PersonsPhone WHERE (PhoneNumber LIKE '9%') || (PhoneNumber LIKE '8%');

/*#4*/
SELECT EmailAdress FROM PersonsEmailAdress ORDER BY EmailAdress ASC;

/*#5*/
SELECT COUNT(EmailAdress) FROM PersonsEmailAdress WHERE EmailAdress LIKE 'd%';


/*Area de Comprass*/
/*#1*/
SELECT CONCAT(City, ' ', AdressLine1, ' ', PostalCode) AS Adress FROM PersonsAdress ORDER BY City ASC;

/*#2*/
SELECT AdressLine1 FROM PersonsAdress WHERE (AdressLine1 LIKE '#%') || (AdressLine1 LIKE '%d');

/*#3*/
SELECT PostalCode FROM PersonsAdress WHERE LENGTH(City) < 6;

/*#4*/
SELECT COUNT(AdressLine1) FROM PersonsAdress WHERE AdressLine1 LIKE '%boulevard du Montparnasse';


/*Departamento de personal*/
/*#1*/
UPDATE PersonsAdress SET PostalCode = REPLACE(PostalCode, ' ', '');

/*#2*/
UPDATE PersonsAdress SET AdressLine1 = CONCAT('#', AdressLine1) WHERE AdressLine1 NOT LIKE '#%'; 

/*#3*/
INSERT INTO Persons(
    PersonType,
    FirstName,
    MiddleName,
    LastName
)VALUES
    ('EM', 'Skylar', 'L.', 'Galvin'),
    ('EM', 'Melissa', 'C.', 'Cool'),
    ('EM', 'Calvin', 'M.', 'O´Connor');

INSERT INTO PersonsEmailAdress(
    EmailAdress,
    BusinessEntityID
)VALUES
    ('skylar@adventure-works.com', '21'),
    ('melissa@adventure-works.com', '22'),
    ('calvin90@adventure-works.com', '23');

INSERT INTO PersonsPhone(
    PhoneNumber,
    BusinessEntityID,
    PhoneNumberTypeID
)VALUES
    ('920-343-1929', '21', '3'),
    ('923-234-9283', '21', '1'),
    ('934-999-1239', '22', '2'),
    ('930-939-1923', '22', '3'),
    ('283-990-1239', '23', '2');

INSERT INTO PersonsAdress(
    AdressLine1,
    City,
    PostalCode,
    StateProviceID,
    BusinessEntityID
)VALUES
    ('#943 Lincon Street', 'Ottawa', '92303', '51', '21'),
    ('#2983-923 Saint-Square', 'Roma', 'RM9384-12', '71', '22'),
    ('#2930-23 avenue des Fontenoy Princess', 'Paris', '92392', '63', '23');

SELECT * FROM Persons;
SELECT * FROM PersonsEmailAdress;
SELECT * FROM PersonsPhone;
SELECT * FROM PersonsAdress;

/*NOTA: SOLAMENTE PON LOS PARENTESIS CUANDO SEA NECESARIO*/

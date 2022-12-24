CREATE TABLE PersonsAdress(
    IdPersonAdress INT IDENTITY(1,1),
    IdPerson INT,
    IdAdress INT,
    PRIMARY KEY (IdPersonsAdress)
);

ALTER TABLE PersonsAdress ADD CONSTRAINT Fk_PersonsAdress_IdPerson FOREIGN KEY (IdPerson) REFERENCES Persons(IdPerson)
ALTER TABLE PersonsAdress ADD CONSTRAINT Fk_PersonsAdress_IdAdress FOREIGN KEY (IdAdress) REFERENCES Adress(IdAdress)

ALTER TABLE Products ALTER COLUMN [Name] VARCHAR (150)
ALTER TABLE Adress ALTER COLUMN City NVARCHAR (50) NOT NULL


/*DML*/
INSERT INTO Adress VALUES(
    '1902 Santa Cruz', 'Bothell', 79, 98011,
    '793 Crawdford Street', 'Kenmore', 79, 98028,
    '4852 Chaparral Court', 'Snohomish', 79, 98296,
    '7726 Driftwood Drive', 'Carnation', 79, 98014
)

INSERT INTO Products(
    [Name], 
    ProductNumber, 
    MakeFlag, 
    Color,
    SafetyStockLevel,
    ReorderPoint,
    StandardCost,
    ListPrice
)
VALUE(
    'Flat Washer 1', 'FW-10002', 1, 'Blue', 1000, 750, 0, 12.96,
    'Flat Washer 6', 'FW-1200', 1, 'Black', 250, 300, 0, 150,
    'Flat Washer 2', 'FW-1400', 0, 'Green', 139, 750, 0, 52,
    'Flat Washer 9', 'FW-3400', 1, 'Yellow', 834, 600, 0, 3658.9,
    'Flat Washer 4', 'FW-3800', 1, 'Green', 543, 350, 0, 52.69
)

INSERT INTO Persons(
    PersonType,
    Title,
    FirstName,
    MiddleName,
    LastName,
    EmailPromotion
)
VALUE(
    'EM', 'Mr.', 'Andrew', 'R', 'Hill', 1,
    'EM', 'Ms.', 'Ruth', 'Ann', 'Ellerbrock', 1,
    'EM', NULL, 'Barry', 'K', 'Johnson', 2,
    'EM', 'Ms.', 'Sidney', 'M', 'Higa', 0,
    'EM', 'Mr.', 'Jeffrey', 'L', 'Ford', 1
)


DELETE FROM Persons WHERE Title IN ('Mr.', 'Ms.')
DELETE FROM Adress WHERE StateProvinceID LIKE >50 AND <75
DELETE FROM Adress WHERE AdressLine1 LIKE '9%.' 
DELETE FROM Products WHERE (ListPrice = 150 AND ListPrice = 52) OR (ListPrice = 12.96 AND ListPrice = 20)
DELETE FROM Products WHERE MakeFlag != 1
DELETE FROM Products WHERE [Name] LIKE '% %'
DELETE FROM Products WHERE [Name] LIKE '%ing%'
DELETE FROM Products WHERE ProductNumber LIKE 'CN%8'
DELETE FROM Adress WHERE AdressLine1 LIKE '%Via%' OR AdressLine1 LIKE '%W__'
DELETE FROM Adress WHERE PostalCode IN (98011) OR PostalCode LIKE '%X' 
DELETE FROM Persons WHERE Lastname LIKE 'S%' AND LastName LIKE 'M%'

/* corregir comilla doble a simple
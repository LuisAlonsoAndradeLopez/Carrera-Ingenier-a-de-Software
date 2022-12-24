CREATE TABLE Orders(
    SalesOrderNumber NVARCHAR(30),
    OrderDate DATETIME,
    SubTotal FLOAT,
    TaxAmt FLOAT,
    TotalDue FLOAT,
    BusinessEntityID INT,
    PRIMARY KEY (SalesOrderNumber)
);

ALTER TABLE Orders
ADD CONSTRAINT FK_Orders_BusinessEntityID
FOREIGN KEY (BusinessEntityID)
REFERENCES Persons(BusinessEntityID)
ON DELETE CASCADE;


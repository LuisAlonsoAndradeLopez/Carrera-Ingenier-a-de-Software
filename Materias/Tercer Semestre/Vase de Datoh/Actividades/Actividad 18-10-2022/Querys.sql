/*Crear Base de Datos*/
CREATE DATABASE SalesCompany;/*IDENTITY(1,1) SOLO FUNCIONA EN SQL SERVER, NO EN MYSQL*/

/*Crear Tablas y sus Atributos*/
CREATE TABLE StatesProvice(
    StateProviceID INT NOT NULL AUTO_INCREMENT,
    StateProvinceCode NVARCHAR(3) NOT NULL,
    CountryRegionCode NVARCHAR(3) NOT NULL,
    `Name` NVARCHAR(50) NOT NULL,
    PRIMARY KEY(StateProviceID)
);

CREATE TABLE PersonsAdress(
    AdressID INT NOT NULL AUTO_INCREMENT,
    AdressLine1 NVARCHAR(150) NOT NULL,
    City NVARCHAR(100) NOT NULL,
    PostalCode INT NOT NULL,
    StateProvinceID INT NOT NULL,
    BusinessEntityID INT NOT NULL,
    PRIMARY KEY(AdressID)
);

CREATE TABLE PersonsEmailAdress(
    EmailAdressID INT NOT NULL AUTO_INCREMENT,
    EmailAdress NVARCHAR(100) NOT NULL,
    BusinessEntityID INT NOT NULL,
    PRIMARY KEY(EmailAdressID)
);

CREATE TABLE AdressType(
    AdressTypeID INT NOT NULL AUTO_INCREMENT,
    `Name` NVARCHAR(15) NOT NULL,
    PRIMARY KEY(AdressTypeID)
);

CREATE TABLE PersonsPhone(
    PhoneNumberTypeID INT NOT NULL AUTO_INCREMENT,
    PhoneNumber NVARCHAR(5) NOT NULL,
    BusinessEntityID INT NOT NULL,
    PRIMARY KEY(PhoneNumberTypeID)
);

CREATE TABLE PhoneNumberType(
    PhoneNumberTypeID INT NOT NULL AUTO_INCREMENT,
    `Name` NVARCHAR(5) NOT NULL,
    PRIMARY KEY (PhoneNumberTypeID)
);

CREATE TABLE Persons(
    BusinessEntityID INT NOT NULL AUTO_INCREMENT,
    PersonType NVARCHAR(2) NOT NULL,
    FirstName NVARCHAR(25) NOT NULL,
    MiddleName NVARCHAR(25) NOT NULL,
    LastName NVARCHAR(25) NOT NULL,
    PRIMARY KEY (BusinessEntityID)
);

/*Agregar Llaves Foraneas*/
ALTER TABLE PersonsAdress ADD CONSTRAINT FK_PersonsAdress_StateProviceID FOREIGN KEY (StateProviceID) REFERENCES StatesProvice(StateProviceID) ON DELETE CASCADE;
ALTER TABLE PersonsAdress ADD CONSTRAINT FK_PersonsAdress_BusinessEntityID FOREIGN KEY (BusinessEntityID) REFERENCES Persons (BusinessEntityID) ON DELETE CASCADE;
ALTER TABLE PersonsEmailAdress ADD CONSTRAINT FK_PersonsEmailAdress_BusinessEntityID FOREIGN KEY (BusinessEntityID) REFERENCES Persons(BusinessEntityID) ON DELETE CASCADE;
ALTER TABLE PersonsPhone ADD CONSTRAINT FK_PersonsPhone_BusinessEntityID FOREIGN KEY (BusinessEntityID) REFERENCES Persons(BusinessEntityID) ON DELETE CASCADE;
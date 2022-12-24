ALTER TABLE PersonsPhone ADD COLUMN PhoneNumberTypeID INT NOT NULL;
ALTER TABLE PersonsPhone ADD CONSTRAINT FK_PersonsPhone_PhoneNumberTypeID FOREIGN KEY (PhoneNumberTypeID) REFERENCES PhoneNumberTypes(PhoneNumberTypeID) ON DELETE CASCADE;

INSERT INTO PhoneNumberTypes(
    `Name`
)VALUES
    ('Cell'),
    ('Home'),
    ('Work');

INSERT INTO Persons(
    PersonType,
    FirstName,
    MiddleName,
    LastName
)VALUES
    ('EM', 'Gail', 'A.', 'Erickson'),
    ('EM', 'Jossef', 'H.', 'Goldberg'),
    ('EM', 'Janice', 'M.', 'Galvin'),
    ('EM', 'Jill', 'A.', 'Williams'),
    ('EM', 'Hung-Fu', 'T.', 'Ting'),
    ('EM', 'Brian', 'S.', 'Welcker'),
    ('SP', 'Tete', 'A.', 'Mensa-Annan'),
    ('SP', 'Syed', 'E.', 'Abbas'),
    ('SC', 'Gustavo', 'V.', 'Achong'),
    ('SC', 'Catherine', 'R.', 'Abel'),
    ('SC', 'Kim', 'D.', 'Abercrombie'),
    ('SC', 'Humberto', 'A.', 'Acevedo'),
    ('SC', 'Pilar', 'R.', 'Ackerman'),
    ('SC', 'Frances', 'B.', 'Adams'),
    ('SC', 'Margaret', 'J.', 'Smith'),
    ('SC', 'Carla', 'J.', 'Adams'),
    ('SC', 'Jay', 'T.', 'Adams'),
    ('SC', 'Ronald', 'L.', 'Adina'),
    ('SC', 'Samuel', 'N.', 'Agcaoili'),
    ('SC', 'James', 'T.', 'Aguilar');

INSERT INTO AdressType(
    `Name`
)VALUE
    ('Billing'),
    ('Home'),
    ('Main Office'),
    ('Primary'),
    ('Shipping'),
    ('Archive');

INSERT INTO StatesProvice(
    StateProviceCode,
    CountryRegionCode,
    `Name`
)VALUES
    ('NSW', 'AU', 'New South Wales'),
    ('NT', 'CA', 'Northwest Territories'),
    ('NV', 'US', 'Nevada'),
    ('NW', 'DE', 'Nordrhein-Westfalen'),
    ('NY', 'US', 'New York'),
    ('OH', 'US', 'Ohio'),
    ('OK', 'US', 'Oklahoma'),
    ('ON', 'CA', 'Ontario'),
    ('OR', 'US', 'Oregon'),
    ('PA', 'US', 'Pennsylvania'),
    ('PE', 'CA', 'Prince Edward Island'),
    ('PR', 'US', 'Puerto Rico'),
    ('PW', 'PW', 'Palau'),
    ('QC', 'CA', 'Quebec'),
    ('QLD', 'AU', 'Queensland'),
    ('RI', 'US', 'Rhode Island'),
    ('SA', 'AU', 'South Australia'),
    ('SC', 'US', 'South Carolina'),
    ('SD', 'US', 'South Dakota'),
    ('SK', 'CA', 'Saskatchewan'),
    ('SL', 'DE', 'Saarland');

/*Modificar este y statesprovice*/
INSERT INTO PersonsAdress(
    AdressLine1,
    City,
    PostalCode,
    StateProviceID,
    BusinessEntityID
)VALUES
    ('#500-75 O´Connor Street', 'Ottawa', 'K4B 1S2', '51', '1'),
    ('#9900 2700 Production Way', 'Burnaby', 'V5A 4X1', '52', '2'),
    ('00, rue Saint-Lazare', 'Dunkerque', '59140', '53', '3'),
    ('02, place de Fontenoy', 'Verrieres Le Buisson', '91370', '54', '4'),
    ('035, boulevard du Montparnasse', 'Verrieres Le Buisson', '91370', '55', '5'),
    ('081, boulevard du Montparnasse', 'Saint-Denis', '93400', '56', '6'),
    ('081, boulevard du Montparnasse', 'Seattle', '98104', '57', '7'),
    ('084, boulevard du Montparnasse', 'Les Ulis', '91940', '58', '8'),
    ('1 Corporate Center Drive', 'Miami', '33127', '59', '9'),
    ('1 Mt. Dell Drive', 'Portland', '97205', '60', '10'),
    ('1 Smiling Tree Court', 'Los Angeles', '90012', '61', '11'),
    ('1, allée des Princes', 'Courbevoie', '92400', '62', '12'),
    ('1, avenue des Champs-Elysées', 'Paris', '75017', '63', '13'),
    ('1, boulevard Beau Marchais', 'Sèvres', '92310', '64', '14'),
    ('1, cours Mirabeau', 'Roncq', '59223', '65', '15'),
    ('1, place Beaubernard', 'Paris', '75003', '66', '16'),
    ('1, place Beaubernard', 'Paris', '75009', '67', '17'),
    ('1, place Beaubernard', 'Saint-Denis', '93400', '68', '18'),
    ('1, place Beaubernard', 'Tremblay-en-France', '93290', '69', '19'),
    ('1, place de Brazaville', 'Colomiers', '31770', '70', '20');

INSERT INTO PersonsEmailAdress(
    EmailAdress,
    BusinessEntityID
)VALUES
    ('ken0@adventure-works.com', '1'),
    ('terri0@adventure-works.com', '2'),
    ('roberto0@adventure-works.com', '3'),
    ('rob0@adventure-works.com', '4'),
    ('gail0@adventure-works.com', '5'),
    ('jossef0@adventure-works.com', '6'),
    ('dylan0@adventure-works.com', '7'),
    ('diane1@adventure-works.com', '8'),
    ('gigi0@adventure-works.com', '9'),
    ('michael6@adventure-works.com', '10'),
    ('ovidiu0@adventure-works.com', '11'),
    ('thierry0@adventure-works.com', '12'),
    ('janice0@adventure-works.com', '13'),
    ('michael8@adventure-works.com', '14'),
    ('sharon0@adventure-works.com', '15'),
    ('david0@adventure-works.com', '16'),
    ('kevin0@adventure-works.com', '17'),
    ('john5@adventure-works.com', '18'),
    ('mary2@adventure-works.com', '19'),
    ('wanida0@adventure-works.com', '20');

INSERT INTO PersonsPhone(
    PhoneNumber,
    BusinessEntityID
)VALUES
    ('697-555-0142', '1'),
    ('819-555-0175', '2'),
    ('212-555-0187', '3'),
    ('612-555-0100', '4'),
    ('849-555-0139', '5'),
    ('122-555-0189', '6'),
    ('181-555-0156', '7'),
    ('815-555-0138', '8'),
    ('185-555-0186', '9'),
    ('330-555-2568', '10'),
    ('719-555-0181', '11'),
    ('168-555-0183', '12'),
    ('473-555-0117', '13'),
    ('465-555-0156', '14'),
    ('970-555-0138', '15'),
    ('913-555-0172', '16'),
    ('150-555-0189', '17'),
    ('486-555-0150', '18'),
    ('124-555-0114', '19'),
    ('708-555-0141', '20');

SELECT * FROM AdressType;
SELECT * FROM Persons;
SELECT * FROM PersonsAdress;
SELECT * FROM PersonsEmailAdress;
SELECT * FROM PersonsPhone;
SELECT * FROM PhoneNumberTypes;
SELECT * FROM StatesProvice;
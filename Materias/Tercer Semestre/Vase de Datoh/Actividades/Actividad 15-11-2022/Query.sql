/*#1*/
SELECT
    A.Title AS Tittle,
    CONCAT(
        A.MiddleName," ",
        A.LastName," ",
        A.FirstName
    ) AS FullName,
    C.CardNumber,
    C.CardType,
    CONCAT(
        MONTH(C.ExpMonth),"-",
        YEAR(C.ExpYear)
    ) AS Expiration,
    COUNT(D.SalesOrderID) AS Sales,
    COUNT(E.ProductID) AS Products,
    D.SubTotal AS TotalPriceProduct,
    MONTH(D.ShipDate) AS MonthSale,
    ( D.TaxAmt + D.Freight ) AS Increase,
    D.TotalDue
FROM persons A
INNER JOIN personscreditcard B
ON A.BusinessEntityID = B.BusinessEntityID
INNER JOIN creditcard C
ON B.CreditCardID = C.CreditCardID
INNER JOIN salesorderheader D
ON C.CreditCardID = D.CreditCardID
INNER JOIN salesorderdetails E
ON D.SalesOrderID = E.SalesOrderID
INNER JOIN products F
ON E.ProductID = F.ProductID
GROUP BY 
    A.Title,
    A.MiddleName,
    A.FirstName,
    A.LastName,
    C.CardNumber,
    C.CardType,
    C.ExpMonth,
    C.ExpYear,
    D.SubTotal,
    D.ShipDate,
    D.TaxAmt,
    D.Freight,
    D.TotalDue
ORDER BY FullName ASC
;





/*#2*/
SELECT
    F.Name AS StateProvince, 
    F.CountryRegionCode AS CountryRegionCode, 
    MAX(C.TotalDue) AS MaxSale, 
    MIN(C.TotalDue) AS MinSale, 
    AVG(C.TotalDue) AS AvgSale, 
    SUM(C.SubTotal) AS SubTotal, 
    SUM(C.TotalDue) AS TotalDue
FROM persons A
INNER JOIN personscreditcard B
ON A.BusinessEntityID = B.BusinessEntityID
INNER JOIN salesorderheader C
ON B.CreditCardID = C.CreditCardID
INNER JOIN personsaddress D
ON A.BusinessEntityID = D.BusinessEntityID
INNER JOIN address E
ON D.AddressID = E.AddressID
INNER JOIN stateprovince F
ON E.StateProvinceID = F.StateProvinceID
GROUP BY 
    F.Name, 
    F.CountryRegionCode
;
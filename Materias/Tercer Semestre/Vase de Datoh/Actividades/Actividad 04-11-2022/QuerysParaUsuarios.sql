/*SQL-SERVER*/

/*#1*/
USE Master
CREATE LOGIN usrLectura
WITH PASSWORD = 'wliuqh2q3hnf',
DEFAULT_DATABASE = SalesCompany,
CHECK_EXPIRATION = ON,
CHECK_POLICY = ON;

USE SalesCompany
CREATE USER usrLectura
FOR LOGIN usrLectura;

ALTER ROLE db_datareader
ADD MEMBER usrLectura;


/*#2*/
USE Master
CREATE LOGIN usrEscritura
WITH PASSWORD = 't387gñpifhyc31',
DEFAULT_DATABASE = SalesCompany,
CHECK_EXPIRATION = OFF,
CHECK_POLICY = ON;

USE SalesCompany
CREATE USER usrEscritura
FOR LOGIN usrEscritura;

USE SalesCompany
ALTER ROLE db_datawriter
ADD MEMBER usrEscritura;


/*#3*/
USE Master
CREATE LOGIN usrAdmin
WITH PASSWORD = '291yhc49iwpyhdi',
DEFAULT_DATABASE = SalesCompany,
CHECK_EXPIRATION = ON,
CHECK_POLICY = ON;

USE SalesCompany
CREATE USER usrAdmin
FOR LOGIN usrAdmin;

USE SalesCompany
ALTER ROLE db.admin
ADD MEMBER usrAdmin;



/*MYSQL*/

CREATE USER 'new_user'@'localhost' IDENTIFIED BY 'password';
GRANT ALL PRIVILEGES ON SELECT, DELETE TO 'new_user'@'localhost'; 
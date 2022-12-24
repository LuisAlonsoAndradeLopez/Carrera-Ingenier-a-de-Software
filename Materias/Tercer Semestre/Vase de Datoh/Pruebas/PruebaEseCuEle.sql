CREATE DATABASE PracticaBD; /*Crear base de datos*/

CREATE TABLE Regiones(
    IdRegion INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    PRIMARY KEY(IdRegion)
)

CREATE TABLE Facultades(
    IdFacultad INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    IdRegion INT,
    PRIMARY KEY(IdFacultad),
    FOREING KEY(IdRegion) REFERENCES Regiones(IdRegion)
)

/*
El identity (1,1) crea llaves partiendo del 1, y va aumentando de 1 en 1 las lavves ej:

1 Xalapa
2 Veracruz
*/


/*SI SE OLVIDARON Y NO CREARON LLAVES FORANEAS, HAY QUE HACER:*/

ALTER TABLE Facultades ADD FOREING KEY (IdRegion) REFERENCES Regiones(IdRegion)
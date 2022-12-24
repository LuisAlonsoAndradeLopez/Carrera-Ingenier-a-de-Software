INSERT INTO Estudiantes (Matricula, Nombre, Paterno, Materno) VALUE (101230351, Patty, Meza, Landa)

INSERT INTO Estudiantes VALUES (101230351, Patty, Meza, Landa)

DELETE FROM Estudiantes WHERE Nombre LIKE 'e%'
DELETE FROM Estudiantes WHERE Matricula IN (101230345, 101230341, 101230345)
DELETE FROM Estudiantes WHERE Matricula NOT IN (101230342, 101230350)
DELETE FROM Estudiantes WHERE Paterno LIKE '%z' AND Materno LIKE 'm%'
DELETE FROM Estudiantes WHERE Nombre LIKE 'e%' AND Paterno NOT LIKE 'c%'
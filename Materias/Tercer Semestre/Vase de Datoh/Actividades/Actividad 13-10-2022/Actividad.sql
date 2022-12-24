UPDATE Estudiantes SET Paterno = 'Martinez', Materno = 'Sánchez' WHERE Matricula = 101230344
UPDATE Estudiantes SET Materno = 'Landa' WHERE Matricula LIKE '%8'
UPDATE Estudiantes SET Nombre = 'Roberto' WHERE Paterno LIKE 'l%a'

SELECT * FROM Estudiantes
SELECT TOP 5 DISTINCT Nombre FROM Estudiantes
SELECT CONCAT(Nombre, ' ', Paterno, ' ', Materno) AS [Nombre Completo] FROM Estudiantes
SELECT ISNULL(Paterno, 'N/A'), Materno FROM Estudiantes
SELECT Nombre FROM Estudiantes WHERE Nombre = '%o'
SELECT Nombre, Paterno FROM Estudiantes WHERE (Matricula LIKE '%4') OR (Matriculas LIKE '%5')
SELECT Paterno FROM Estudiantes WHERE Paterno LIKE '%n%'
SELECT CONCAT(Nombre, " ", Paterno, " ", Materno) AS NombreCompleto, Matricula FROM Estudiantes

/*WHERE VA DESPUES DE LOS FROMS*/
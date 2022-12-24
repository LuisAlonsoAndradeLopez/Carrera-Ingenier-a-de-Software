CREATE DATABASE PracticaDB;

CREATE TABLE Semestres(
    IdSemestre INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    IdCicloEscolar INT,
    PRIMARY KEY (IdSemestre),
    FOREING KEY (IdRegion) REFERENCES Regiones(IdRegion)
);

CREATE TABLE Facultades(
    IdFacultad INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    IdRegion INT,
    PRIMARY KEY (IdFacultad),
    FOREING KEY (IdRegion) REFERENCES Regiones(IdRegion)
);

CREATE TABLE Instrumentos(
    IdInstrumento INT IDENTITY(1,1),
    FechaInicio DATE,
    FechaFin DATE,
    IdCicloEscolar INT,
    PRIMARY KEY (IdInstrumento),
    FOREING KEY (IdCicloEscolar) REFERENCES CiclosEscolares(IdCicloEscolar)
);

CREATE TABLE Regiones(
    IdRegion INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    PRIMARY KEY(IdRegion)
);

CREATE TABLE Escalas(
    IdEscala INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    IdValor INT,
    PRIMARY KEY(IdEscala),
    FOREING KEY (IdValor) REFERENCES Valores(IdValor)
);

CREATE TABLE DescripcionesPersonales(
    IdDescripcionPersonal INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    IdDocente INT,
    IdEstudiante INT,
    IdInstrumento INT,
    PRIMARY KEY(IdDescripcionPersonal),
    FOREING KEY (IdDocente) REFERENCES Docentes(IdDocente),
    FOREING KEY (IdEstudiante) REFERENCES Estudiantes(IdEstudiante),
    FOREING KEY (IdInstrumento) REFERENCES Instrumentos(IdInstrumento),
);

CREATE TABLE TiposPreguntas(
    IdTipoPregunta INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    PRIMARY KEY (IdTipoPregunta)
);

CREATE TABLE Preguntas(
    IdPregunta INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    IdTipoPregunta INT,
    IdInstrumento INT,
    PRIMARY KEY (IdPregunta),
    FOREING KEY (IdTipoPregunta) REFERENCES TiposPreguntas (IdTipoPregunta)
);

CREATE TABLE Estudiantes(
    IdEstudiante NVARCHAR(50) NOT NULL,
    Nombre NVARCHAR(20) NOT NULL,
    ApellidoPaterno NVARCHAR(20) NOT NULL,
    ApellidoMaterno NVARCHAR(20) NOT NULL,
    Correos NVARCHAR(30),
    IdFacultad INT,
    IdCarrera INT,
    PRIMARY KEY (IdEstudiante),
    FOREING KEY (IdFacultad) REFERENCES Facultades(IdFacultad),
    FOREING KEY (IdCarrera) REFERENCES Carreras(IdCarrera)
);

CREATE TABLE Profesionalizaciones(
    IdProfesionalizacion INT IDENTITY(1,1),
    Grado VARCHAR(50),
    FechaInicio DATE,
    FechaFin DATE,
    IdDocente INT,
    PRIMARY KEY (IdProfesionalizacion),
    FOREING KEY (IdDocente) REFERENCES Docentes (IdDocente)
);

CREATE TABLE Docentes(
    IdDocente INT IDENTITY(1,1),
    Nombre VARCHAR(20),
    ApellidoPaterno VARCHAR(20),
    ApellidoMaterno VARCHAR(20),
    Antigüedad NVARCHAR(20),
    IdRegion INT,
    PRIMARY KEY (IdDocente),
    FOREING KEY (IdRegion) REFERENCES Regiones(IdRegion)
);

CREATE TABLE Respuestas(
    IdRespuesta INT IDENTITY(1,1),
    Descripcion NVARCHAR(200),
    IdPregunta INT,
    IdEstudiante INT,
    PRIMARY KEY (IdRespuesta),
    FOREING KEY (IdPregunta) REFERENCES Preguntas(IdPregunta),
    FOREING KEY (IdEstudiante) REFERENCES Estudiantes(IdEstudiante)
);

CREATE TABLE Carreras(
    IdCarrera INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    IdFacultad INT,
    PRIMARY KEY (IdCarrera),
    FOREING KEY (IdFacultad) REFERENCES Carreras(IdCarrera)
);

CREATE TABLE Asignaturas(
    IdAsignatura INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    PRIMARY KEY (IdAsignatura)
);

CREATE TABLE CiclosEscolares(
    IdCicloEscolar INT IDENTITY(1,1),
    FechaInicio DATE,
    FechaFin DATE,
    IdInstrumento INT,
    PRIMARY KEY (IdCicloEscolar),
    FOREING KEY (IdInstrumento) REFERENCES Instrumentos(IdInstrumento)
);

CREATE TABLE Valores(
    IdValor INT IDENTITY(1,1),
    Descripcion NVARCHAR(50),
    IdEscala INT,
    PRIMARY KEY (IdValor),
    FOREING KEY (IdEscala) REFERENCES Escalas(IdEscala)
);

CREATE TABLE PreguntasEscalas(
    IdPreguntaEscala INT IDENTITY(1,1),
    IdPregunta INT,
    IdEscala INT,
    PRIMARY KEY (IdPreguntaEscala),
    FOREING KEY (IdPregunta) REFERENCES Preguntas(IdPregunta),
    FOREING KEY (IdEscala) REFERENCES Escalas(IdEscala)
);

CREATE TABLE InstrumentosDocentes(
    IdInstrumentoDocente INT IDENTITY(1,1),
    IdInstrumento INT,
    IdDocente INT,
    PRIMARY KEY (IdInstrumentoDocente),
    FOREING KEY (IdInstrumento) REFERENCES Instrumentos(IdInstrumento),
    FOREING KEY (IdDocente) REFERENCES Docentes(IdDocente)
);

CREATE TABLE InstrumentosEstudiantes(
    IdIntrumentoEstudiante INT IDENTITY(1,1),
    IdInstrumento INT,
    IdEstudiante INT,
    PRIMARY KEY (IdInstrumentoEstudiante),
    FOREING KEY (IdInstrumento) REFERENCES Instrumentos(IdInstrumento),
    FOREING KEY (IdEstudiante) REFERENCES Estudiantes(IdEstudiante)
);

CREATE TABLE CiclosEscolaresSemestres(
    IdCicloEscolarSemestre INT IDENTITY(1,1),
    IdCicloEscolar INT,
    IdSemestre INT,
    PRIMARY KEY (IdCicloEscolarSemestre),
    FOREING KEY (IdCicloEscolar) REFERENCES CiclosEscolares(IdCicloEscolar),
    FOREING KEY (IdSemestre) REFERENCES Semestres(IdSemestre)
);

CREATE TABLE EstudiantesSemestres(
    IdEstudianteSemestre INT IDENTITY(1,1),
    IdEstudiante NVARCHAR(50) NOT NULL,
    IdSemestre INT NOT NULL,
    PRIMARY KEY (IdEstudianteSemestre),
    FOREING KEY (IdEstudiante) REFERENCES Estudiantes(IdEstudiante),
    FOREING KEY (IdSemestre) REFERENCES Semestres(IdSemestre)
);

CREATE TABLE DocentesFacultades(
    IdDocenteFacultad INT IDENTITY(1,1),
    IdDocente INT,
    IdFacultad INT,
    PRIMARY KEY (IdDocenteFacultad),
    FOREING KEY (IdDocente) REFERENCES Docentes(IdDocente),
    FOREING KEY (IdFacultad) REFERENCES Facultades(IdFacultad)
);

CREATE TABLE SemestresAsignaturas(
    IdSemestreAsignatura INT IDENTITY(1,1),
    IdSemestre INT,
    IdAsignatura INT,
    PRIMARY KEY (IdSemestreAsignatura),
    FOREING KEY (IdSemestre) REFERENCES Semestres(IdSemestre),
    FOREING KEY (IdAsignatura) REFERENCES Asignaturas(IdAsignatura)
);

CREATE TABLE DocentesAsignaturas(
    IdDocenteAsignatura INT IDENTITY(1,1),
    IdDocente INT,
    IdAsignatura INT,
    PRIMARY KEY (IdDocenteAsignatura),
    FOREING KEY (IdDocente) REFERENCES Docentes(IdDocente),
    FOREING KEY (IdAsignatura) REFERENCES Asignaturas(IdAsignatura)
);

CREATE TABLE CarrerasDocentes(
    IdCarreraDocente INT IDENTITY(1,1),
    IdCarrera INT,
    IdDocente INT,
    PRIMARY KEY (IdCarreraDocente),
    FOREING KEY (IdCarrera) REFERENCES Carreras(IdCarrera),
    FOREING KEY (IdDocente) REFERENCES Docentes(IdDocente)
);

/*Parte 1*/
CREATE TABLE Testings(
    IdTestings INT(1,1),
    Descripcion NVARCHAR(200) NOT NULL,
    FechaModificacion DATE NOT NULL,
    PRIMARY KEY(IdTestings)
);

/*Parte 2*/
ALTER TABLE Testings ADD IdRegion INT NOT NULL ADD IdFacultad INT NOT NULL;
ALTER TABLE Testings ALTER COLUMN Descripcion NVARCHAR (200);
ALTER TABLE Testings ALTER COLUMN FechaModificacion NAME FModificacion;

/*Parte 3*/
ALTER TABLE Testings ADD CONSTRAINT Fk_TestingRegiones FOREIGN KEY (IdRegion) REFERENCES Regiones(IdRegion);
ALTER TABLE Testings ALTER IdFacultades REFERENCES Facultades(IdFacultad) ON CASCADE DELETE;
ALTER TABLE Testings DROP CONSTRAINT Fk_TestingRegiones;
ALTER TABLE Testingd ADD CONSTRAINT Fk_TestingRegiones FOREIGN KEY (IdRegion) REFERENCES Regiones(IdRegion) ON CASCADE DELETE;

/*ADD CONSTRAINT Para crear informacion para la llave foranea

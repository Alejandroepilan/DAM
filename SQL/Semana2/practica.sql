-- Crear tabla de clientes

CREATE TABLE clientes
(
  Identificador INT(10) NOT NULL AUTO_INCREMENT ,
  nombre VARCHAR(150) NOT NULL ,
  idfiscal VARCHAR(50) NOT NULL ,
  direccion VARCHAR(250) NOT NULL ,
  codigopostal VARCHAR(20) NOT NULL ,
  nombrepersonacontacto VARCHAR(250) NOT NULL ,
  emailpersonacontacto VARCHAR(100) NOT NULL ,
  imagen VARCHAR(100) NOT NULL ,
  PRIMARY KEY (Identificador)
)
ENGINE = InnoDB 
COMMENT = 'En esta tabla guardaremos los clientes';



-- Insertar datos en tabla

INSERT INTO clientes VALUES(
  NULL,
  'Nombre de la empresa 1',
  'C000001',
  'Dirección de la empresa 1',
  '46001',
  'Juan Lopez Matinez',
  'juanlopez@empresa1.com',
  'logoempresa1.jpg'
);



-- Insertar algunos datos en tabla 

INSERT INTO clientes
(
  nombre,
  idfiscal,
  direccion,
  codigopostal
)
VALUES(
  'Nombre de la empresa 2',
  'C000002',
  'Dirección de la empresa 2',
  '46002'
);




-- Actualizar datos en tabla

UPDATE clientes
SET
nombrepersonacontacto = 'Jorge Martínez García',
emailpersonacontacto = 'jorgemartinez@empresa2.com';




-- Actualizar datos en tabla con condiciones

UPDATE clientes
SET
nombrepersonacontacto = 'Jose Lopez',
emailpersonacontacto = 'joselopez@empresa1.com'
WHERE
Identificador = 1;




-- Eliminar datos en tabla

DELETE FROM clientes;




-- Eliminar datos en tabla con condiciones

DELETE FROM clientes
WHERE Identificador = 2;




-- Seleccionar datos

SELECT * FROM clientes




-- Seleccionar columnas

SELECT
nombre,
idfiscal,
direccion,
FROM clientes;




-- Seleccionar columnas con alias de campo

SELECT
nombre AS 'Nombre del cliente',
idfiscal AS 'Identificación fiscal',
direccion AS 'Dirección del cliente',
codigopostal AS 'Código postal'
FROM clientes;




-- Crear usuario

CREATE USER 'alejandro'@'localhost'
IDENTIFIED VIA
mysql_native_password
USING '*91FE71C2DC1A222A64D7CA439E60F18243EE6DE4';

-- Crear permisos

GRANT
SELECT,
SHOW VIEW
ON *.*
TO 'alejandro'@'localhost'
REQUIRE NONE 
WITH
MAX_QUERIES_PER_HOUR 100
MAX_CONNECTIONS_PER_HOUR 100
MAX_UPDATES_PER_HOUR 100
MAX_USER_CONNECTIONS 100;

-- Acceso a db

GRANT ALL PRIVILEGES ON
`empresa`.*
TO
'alejandro'@'localhost';
-- Crear base de datos

CREATE DATABASE empresa;




-- Eliminar base de datos

DROP DATABASE empresa;




-- Usar base de datos

USE empresa;




-- Crear tabla en la base de datos

CREATE TABLE `empresa`.`usuarios`
(
  `Identificador` INT(10) NOT NULL AUTO_INCREMENT ,
  `nombre` VARCHAR(50) NOT NULL ,
  `contrasena` VARCHAR(50) NOT NULL ,
  `nombrepropio` VARCHAR(50) NOT NULL ,
  `apellidos` VARCHAR(100) NOT NULL ,
  `email` VARCHAR(100) NOT NULL ,
  `telefono` VARCHAR(50) NOT NULL ,
  PRIMARY KEY (`Identificador`)
)
ENGINE = InnoDB 
COMMENT = 'En esta tabla guardaremos los usuarios';




-- Eliminar tabla en la base de datos

DROP TABLE usuarios;




-- Vaciar tabla

TRUNCATE TABLE usuarios;




-- Renombrar tabla

RENAME TABLE `empresa`.`usuarios`
TO
`empresa`.`misusuarios`;
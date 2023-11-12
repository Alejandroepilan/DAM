<?php

echo "Que sepas que el usuario que has enviado es" . $_POST['usuario'] . "<br>";
echo "Que sepas que el password que has enviado es" . $_POST['password'] . "<br>";

$enlace = mysqli_connect("localhost", "root", "", "basesdedatos");

$peticion = "
INSERT INTO usuarios
VALUES(NULL,
  '" . $_POST['usuario'] . "',
  '" . $_POST['password'] . "',
  '" . $_POST['nombre'] . "',
  '" . $_POST['apellidos'] . "',
  '" . $_POST['email'] . "',
  '" . $_POST['direccion'] . "',
  '" . $_POST['telefono'] . "')
";

mysqli_query($enlace, $peticion);
echo $peticion . "<br>";

mysqli_close($enlace);

echo "El registro se ha metido en la base de datos";

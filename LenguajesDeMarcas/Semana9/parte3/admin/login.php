<?php
session_start();
echo "Usuario: " . $_POST['usuario'] . "<br>";
echo "Contraseña: " . $_POST['contrasena'] . "<br>";

include "conexiondb.php";
$peticion = "
SELECT * FROM usuarios
WHERE usuario = '" . $_POST['usuario'] . "'
AND
password = '" . $_POST['contrasena'] . "'
LIMIT 1
";

$resultado = mysqli_query($enlace, $peticion);

$pasas = false;
$_SESSION['pasas'] = false;

if ($fila = $resultado->fetch_assoc()) {
  //echo $fila['nombre'] . " " . $fila['apellidos'] . "<br>";
  $pasas = true;
  $_SESSION['nombre'] = $fila['nombre'];
  $_SESSION['apellidos'] = $fila['apellidos'];
} else {
  //echo "No existe ese usuario";
  $pasas = false;
}

if ($pasas) {
  $_SESSION['pasas'] = true;
  echo "Si pasas";
  echo ' <meta http-equiv="refresh" content="5; url=paneldecontrol.php"> ';
} else {
  $_SESSION['pasas'] = false;
  echo "No pasas";
  echo ' <meta http-equiv="refresh" content="5; url=index.html"> ';
}

mysqli_close($enlace);

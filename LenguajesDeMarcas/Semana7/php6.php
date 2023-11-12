<?php

$enlace = mysqli_connect("localhost", "root", "", "basesdedatos");

$resultado = mysqli_query($enlace, "SELECT * FROM usuarios");

while ($fila = $resultado->fetch_assoc()) {
  echo $fila['nombre'] . " " . $fila['apellidos'] . "<br>";
}

mysqli_close($enlace);

<?php
$enlace = mysqli_connect("localhost", "root", "", "basesdedatos");
$peticion = "DELETE FROM usuarios WHERE Identificador = " . $_GET['id'] . "";
$resultado = mysqli_query($enlace, $peticion);

echo ' <meta http-equiv="refresh" content="1; url=paneldecontrol.php"> ';

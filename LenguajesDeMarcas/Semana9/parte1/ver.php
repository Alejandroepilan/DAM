<?php
include "conexiondb.php";
$peticion = "SELECT * FROM usuarios WHERE Identificador = '" . $_GET['id'] . "'";
$resultado = mysqli_query($enlace, $peticion);

while ($fila = $resultado->fetch_assoc()) {
  echo '
    Usuario: ' . $fila['usuario'] . ' <br>
    Contraseña: ' . $fila['password'] . ' <br>
    Nombre: ' . $fila['nombre'] . ' <br>
    Apellidos: ' . $fila['apellidos'] . ' <br>
  ';
}
?>
<a href="./paneldecontrol.php">Volver a la pagina anterior</a>
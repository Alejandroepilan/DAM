<?php

$edad = 42;
if ($edad < 30) {
  echo "Eres una persona joven <br>";
} else {
  echo "YA no eres una persona joven <br>";
}

$dia = "longaniza";
switch ($dia) {
  case "lunes":
    echo "Hoy es el peor dia de la semana";
    break;
  case "martes":
    echo "Hoy es el segundo peor dia de la semana";
    break;
  case "miercoles":
    echo "Hoy estamos en el medio de la semana";
    break;
  case "jueves":
    echo "Ya casi llegamos al viernes";
    break;
  case "viernes":
    echo "Por fin es viernes";
    break;
  case "sabado":
    echo "Hoy es el mejor dia de la semana";
    break;
  case "domingo":
    echo "Que horrible que mañana sea lunes";
    break;
  default:
    echo "Lo que has escrito no es un dia de la semana";
    break;
}

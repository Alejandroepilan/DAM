<?php

$o1 = 4;
$o2 = 3;
$o3 = "3";

echo "La suma de los dos operadores es " . ($o1 + $o2) . "<br>";
echo "La resta de los dos operadores es " . ($o1 - $o2) . "<br>";
echo "La multiplicacion de los dos operadores es " . ($o1 * $o2) . "<br>";
echo "La division de los dos operadores es " . ($o1 / $o2) . "<br>";
echo "La resto entero de la division de los dos operadores es " . ($o1 % $o2) . "<br>";

echo "Es cierto que los dos operandos son iguales? " . ($o2 == $o3) . "<br>";
echo "Es cierto que los dos operandos son exactamente iguales? " . ($o2 === $o3) . "<br>";
echo "Es cierto que los dos operandos NO son iguales? " . ($o1 != $o2) . "<br>";

$dia = "miercoles";
$mes = "agosto";

echo "Es cierto que las dos son ciertas " . ($dia == "miercoles" && $mes == "agosto") . "<br>";
echo "Es cierto que las dos son ciertas " . ($dia == "miercoles" && $mes == "octubre") . "<br>";
echo "Es cierto que alguna de las dos es cierta " . ($dia == "miercoles" || $mes == "octubre") . "<br>";
echo "Es cierto que alguna de las dos es cierta " . ($dia == "martes" || $mes == "octubre") . "<br>";

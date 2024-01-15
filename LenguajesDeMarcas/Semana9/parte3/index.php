<?php include "admin/conexiondb.php" ?>
<!DOCTYPE html>
<html lang="es">

<head>
  <meta charset="UTF-8" />
  <link rel="StyleSheet" href="estilo/estilo.css" />
  <script src="lib/jquery-3.7.1.min.js"></script>
  <script src="js/codigo.js"></script>
</head>

<body>
  <header>
    <h1>Logo</h1>
    <div id="destacado">
      <img src="photo/paisaje1.jpg" />
      <h2>Título</h2>
      <h3>Subtítulo</h3>
      <p>Descripción</p>
    </div>
  </header>
  <div id="container">
    <section>
      <h2>Cursos más vistos</h2>
      <div class="botones">
        <div class="botonredondo anterior">⭠</div>
        <div class="botonredondo posterior">⭢</div>
      </div>
      <div class="ribbon">

        <?php
        $peticion = "SELECT * FROM cursos ORDER BY visualizaciones LIMIT 7";
        $resultado = mysqli_query($enlace, $peticion);

        while ($fila = $resultado->fetch_assoc()) {
          echo '
          <article>
            <div class="contenido">
            <div class="identificador" identificador="' . $fila['id'] . '"></div>
              <img src="photo/paisaje1.jpg" />
              <h3>' . $fila['nombre'] . '</h3>
              <h4>' . $fila['frasedescriptiva'] . '</h4>
              <p>' . $fila['descripcion'] . '</p>
            </div>
          </article>';
        }
        ?>

      </div>
    </section>

    <div class="detalles">
      <img src="photo/paisaje1.jpg" />
      <h2>Título</h2>
      <h3>Subtítulo</h3>
      <p>Descripción</p>
      <div class="infocurso">Descripción</div>
      <button class="masinfo">Mas información</button>
    </div>

    <section>
      <h2>Ultimos estrenos</h2>
      <div class="botones">
        <div class="botonredondo anterior">⭠</div>
        <div class="botonredondo posterior">⭢</div>
      </div>
      <div class="ribbon">
        <?php
        $peticion = "SELECT * FROM cursos ORDER BY id DESC LIMIT 7";
        $resultado = mysqli_query($enlace, $peticion);

        while ($fila = $resultado->fetch_assoc()) {
          echo '
          <article>
            <div class="contenido">
              <div class="identificador" identificador="' . $fila['id'] . '"></div>
              <img src="photo/paisaje1.jpg" />
              <h3>' . $fila['nombre'] . '</h3>
              <h4>' . $fila['frasedescriptiva'] . '</h4>
              <p>' . $fila['descripcion'] . '</p>
            </div>
          </article>';
        }
        ?>
      </div>
    </section>
    <div class="detalles">
      <img src="photo/paisaje1.jpg" />
      <h2>Título</h2>
      <h3>Subtítulo</h3>
      <p>Descripción</p>
      <div class="infocurso">Descripción</div>
      <button class="masinfo">Mas información</button>
    </div>
    <section>
      <h2>Algunos cursos que te pueden interesar</h2>
      <div class="botones">
        <div class="botonredondo anterior">⭠</div>
        <div class="botonredondo posterior">⭢</div>
      </div>
      <div class="ribbon">
        <?php
        $peticion = "SELECT * FROM cursos ORDER BY RAND() LIMIT 7";
        $resultado = mysqli_query($enlace, $peticion);

        while ($fila = $resultado->fetch_assoc()) {
          echo '
          <article>
            <div class="contenido">
            <div class="identificador" identificador="' . $fila['id'] . '"></div>
              <img src="photo/paisaje1.jpg" />
              <h3>' . $fila['nombre'] . '</h3>
              <h4>' . $fila['frasedescriptiva'] . '</h4>
              <p>' . $fila['descripcion'] . '</p>
            </div>
          </article>';
        }
        ?>
      </div>
    </section>
    <div class="detalles">
      <img src="photo/paisaje1.jpg" />
      <h2>Título</h2>
      <h3>Subtítulo</h3>
      <p>Descripción</p>
      <div class="infocurso">Descripción</div>
      <button class="masinfo">Mas información</button>
    </div>
    <section>
      <h2>Ultimos estrenos</h2>
      <div class="botones">
        <div class="botonredondo anterior">⭠</div>
        <div class="botonredondo posterior">⭢</div>
      </div>
      <div class="ribbon">
        <?php
        $peticion = "SELECT * FROM cursos ORDER BY visualizaciones LIMIT 7";
        $resultado = mysqli_query($enlace, $peticion);

        while ($fila = $resultado->fetch_assoc()) {
          echo '
          <article>
            <div class="contenido">
            <div class="identificador" identificador="' . $fila['id'] . '"></div>
              <img src="photo/paisaje1.jpg" />
              <h3>' . $fila['nombre'] . '</h3>
              <h4>' . $fila['frasedescriptiva'] . '</h4>
              <p>' . $fila['descripcion'] . '</p>
            </div>
          </article>';
        }
        ?>
      </div>
    </section>
    <div class="detalles">
      <img src="photo/paisaje1.jpg" />
      <h2>Título</h2>
      <h3>Subtítulo</h3>
      <p>Descripción</p>
      <div class="infocurso">Descripción</div>
      <button class="masinfo">Mas información</button>
    </div>
  </div>
</body>

</html>
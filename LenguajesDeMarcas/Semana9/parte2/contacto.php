.<?php include "cabecera.php" ?>
<section id="contacto">
  Contacto

  <form>
    <input type="text" name="nombre" placeholder="Introduce tu nombre" />
    <br />
    <input type="email" name="email" placeholder="Introduce tu email" />
    <br />
    <select name="poblacion">
      <option>Introduce tu población</option>
      <option value="valencia">valencia</option>
      <option value="barcelona">barcelona</option>
      <option value="madrid">madrid</option>
    </select>
    <br />

    <p>Indica que eres?</p>
    <input type="radio" name="tipo" />Persona<br />
    <input type="radio" name="tipo" />Animal<br />
    <input type="radio" name="tipo" />Robot<br />

    <p>Indica que dia de la semana es hoy?</p>
    <input type="radio" name="dia" />Lunes<br />
    <input type="radio" name="dia" />Martes<br />
    <input type="radio" name="dia" />Miercoles<br />
    <input type="radio" name="dia" />Jueves<br />
    <input type="radio" name="dia" />Viernes<br />

    <p>Indica el motivo de tu consulta</p>
    <input type="checkbox" name="motivo" />Personal<br />
    <input type="checkbox" name="motivo" />Formativa<br />
    <input type="checkbox" name="motivo" />Laboral<br />

    <br />
    <input type="submit" value="Envia tu correo!" />
  </form>
</section>
<?php include "piedepagina.php" ?>
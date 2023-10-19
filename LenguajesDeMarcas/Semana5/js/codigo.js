$(document).ready(function () {
  $("section article").hover(function () {
    $(this).addClass("aumentado");
  });
  $("section article").mouseout(function () {
    $(this).removeClass("aumentado");
  });
  $(".anterior").click(function () {
    var midesfase = 0;
    $(this)
      .parent()
      .parent()
      .find(".ribbon")
      .each(function () {
        midesfase = $(this).css("left");
      });

    midesfase = Math.round((midesfase.replace("px", "") * 1) / 100) * 100;
    midesfase -= 200;

    $(this)
      .parent()
      .parent()
      .find(".ribbon")
      .each(function () {
        $(this).css("left", midesfase + "px");
      });
  });
  $(".posterior").click(function () {
    var midesfase = 0;
    $(this)
      .parent()
      .parent()
      .find(".ribbon")
      .each(function () {
        midesfase = $(this).css("left");
      });

    midesfase = Math.round((midesfase.replace("px", "") * 1) / 100) * 100;
    midesfase += 200;

    $(this)
      .parent()
      .parent()
      .find(".ribbon")
      .each(function () {
        $(this).css("left", midesfase + "px");
      });
  });

  $("article").click(function () {
    $(".detalles").removeClass("abierto");
    $(".detalles").removeClass("muyabierto");
    setTimeout(() => {
      $(".detalles").addClass("abierto");

      $(".detalles h2").text(titulo);
      $(".detalles h3").text(subtitulo);
      $(".detalles p").text(descripcion);
      $(".detalles img").attr("src", imagen);
    }, 500);

    var titulo = "";
    $(this)
      .find("h3")
      .each(function () {
        titulo = $(this).text();
      });
    var subtitulo = "";
    $(this)
      .find("h4")
      .each(function () {
        subtitulo = $(this).text();
      });
    var descripcion = "";
    $(this)
      .find("p")
      .each(function () {
        descripcion = $(this).text();
      });
    var imagen = "";
    $(this)
      .find("img")
      .each(function () {
        imagen = $(this).attr("src");
      });
  });

  $(".masinfo").click(function () {
    $(".detalles").addClass("muyabierto");
  });
});

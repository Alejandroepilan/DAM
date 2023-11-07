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
    $(this).parent().parent().next().removeClass("abierto");
    $(this).parent().parent().next().removeClass("muyabierto");
    var este = $(this);
    setTimeout(() => {
      este.parent().parent().next().find("h2").text(titulo);
      este.parent().parent().next().find("h3").text(subtitulo);
      este.parent().parent().next().find("p").text(descripcion);
      este.parent().parent().next().find("img").attr("src", imagen);

      este.parent().parent().next().addClass("abierto");
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
    $(this).parent().addClass("muyabierto");
  });
});

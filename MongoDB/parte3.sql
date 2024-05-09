-- Agrupar datos
db.productos.aggregate(
  [
    {
      $group: {
        _id: "$precio"
      }
    }
  ]
);

-- Agrupar con limite
db.productos.aggregate(
  [
    {
      $limit:1
    }
  ]
);

-- Agrupaciones encadenadas
db.productos.aggregate(
  [
    {
      $group: {
        _id: "$precio"
      }
    },
    {
      $limit:1
    }
  ]
);

-- Proyectar/Filtrar
db.productos.aggregate(
  [
    {
      $project:
      {"nombre":1}
    }
  ]
)

-- Sort de mayor a menor
db.productos.aggregate(
  [
    {
      $sort:
      {"nombre":-1}
    }
  ]
)

-- Count
db.productos.aggregate(
  [
    {
      $count:"nombre"
    }
  ]
)

-- Match
db.productos.aggregate(
  [
    {
      $match:{
        nombre:"producto 1"}
    }
  ]
)

-- Match y contar
db.productos.aggregate(
  [
    {
      $match:{
        nombre:"producto 1"}
    },
    {
      $count:"nombre"
    }
  ]
)

-- Añadir campos
db.productos.aggregate([
  {
    $addFields: {
      IVA: {
        $sum: {
          $map: {
            input: "$productos",
            as: "producto",
            in: {
              $multiply: ["$$producto.precio", 0.21]
            }
          }
        }
      }
    }
  }
])
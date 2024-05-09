db.createCollection("productos");

db.productos.insertMany(
  [
    {
      nombre: "producto 1",
      precio: 15,
      descripcion: "Esta es la descripcción del producto 1"
    },
    {
      nombre: "producto 2",
      precio: 25,
      descripcion: "Esta es la descripcción del producto 2"
    },
    {
      nombre: "producto 3",
      precio: 35,
      descripcion: "Esta es la descripcción del producto 3"
    },
    {
      nombre: "producto 4",
      precio: 45,
      descripcion: "Esta es la descripcción del producto 4"
    },
    {
      nombre: "producto 5",
      precio: 55,
      descripcion: "Esta es la descripcción del producto 5"
    }
  ]
)

--------------- OPERADORES DE COMPARACION ---------------

-- Igual a
db.productos.findOne({precio:{$eq:25}});


-- No igual a
db.productos.find({precio:{$ne:25}});


-- Greater
db.productos.find({precio:{$gt:25}});


-- Greater equal
db.productos.find({precio:{$gte:45}});


-- less
db.productos.find({precio:{$lt:45}});


-- less equal
db.productos.find({precio:{$lte:45}});


-- in (un array)
db.productos.find({precio:{$in:[20, 30, 45]}});

--------------- OPERADORES DE LOGICOS ---------------

db.productos.find(
  {
    $and: [
      {
        precio: {$gt:45}
      },
      {
        nombre: "producto 5"
      }
    ]
  }
)

db.productos.find(
  {
    $or: [
      {
        precio: {$gt:45}
      },
      {
        nombre: "producto 1"
      }
    ]
  }
)

db.productos.find(
  {
    $nor: [
      {
        precio: 45
      },
      {
        nombre: "producto 1"
      }
    ]
  }
)
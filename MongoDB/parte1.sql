-- Crear DB
use empresa;


-- Crear colleccion
db.createCollection("clientes");


-- Insertar datos
db.clientes.insertOne({
  nombre: "Alejandro",
  apellidos: "Epila",
  telefono: "123456789",
  email: "alejandroepilan@gmail.com"
})


-- Insertar datos con array
db.clientes.insertOne({
  nombre: "Alejandro",
  apellidos: "Epila",
  telefono: "123456789",
  email: "alejandroepilan@gmail.com",
  direcciones: [
    "direccion 1",
    "direccion 2"
  ]
})


-- Insertar muchos datos
db.clientes.insertMany(
  [
    {
      nombre: "Pedro",
      apellidos: "Epila",
      telefono: "123456789",
      email: "Pedro@gmail.com"
    },
    {
      nombre: "Paco",
      apellidos: "Epila",
      telefono: "123456789",
      email: "Paco@gmail.com"
    },
    {
      nombre: "Pablo",
      apellidos: "Epila",
      telefono: "123456789",
      email: "Pablo@gmail.com"
    }
  ]
)


-- Buscar datos
db.clientes.find()
db.clientes.find({nombre: 'Alejandro'})


-- Buscar datos en concreto
db.clientes.findOne()
db.clientes.findOne({nombre: 'Paco'})


-- Actualizar
db.clientes.updateOne(
  {nombre: 'Alejandro'},
  {
    $set:
    {email:"email@cambiado.com"}
  }
)


-- Actualizar muchos
db.clientes.updateMany(
  {telefono: '123456789'},
  {
    $set:
    {telefono:"333333333"}
  }
)


-- Borrar
db.clientes.deleteOne(
  {nombre: 'Alejandro'}
)


-- Borrar muchos
db.clientes.deleteMany(
  {nombre: 'Alejandro'}
)
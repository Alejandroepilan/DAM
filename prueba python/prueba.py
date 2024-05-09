import sqlite3 as lite
import sys

conexion = lite.connect("empresa.db")

cursor = conexion.cursor()






def calculadora():
  ## Indica la operacion

  print("Ahora elige la operación que vas a realizar"+
  "\n1." +
  "\n2."+
  "")

  operacion = int(input())

  ## Realiza la operacion

  if operacion == 1:
    cursor.execute("SELECT * from clientes;")
    datos = cursor.fetchall()
    for i in datos:
      print(i[1])

  if operacion == 2:
    cursor.execute("SELECT * from facturas;")
    datos = cursor.fetchall()
    for i in datos:
      print(i[1])

  calculadora()
  
calculadora()
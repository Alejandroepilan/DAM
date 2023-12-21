from tkinter import *

f = Frame(width=300, height=300)
f.pack(padx=30, pady=30)

titulo = Label(f, text = "Hola Jose V.")
titulo.pack(side=TOP)

f.mainloop() # Añadir este metodo para mantener la ventana abierta

import memento

# Crear el objeto originador/creador
creador = memento.Originator("Pedro", "Gil Mena")
# Crear el objeto gestor/vigilante del Memento
vigilante= memento.Caretaker()
# Crear el Memento y asociarlo al objeto gestor
vigilante.memento = creador.createMemento()
# Mostrar los datos del objeto
print("Nombre completo: [" + creador.nombre + " " + creador.apellidos + "]" )
# Modificar los datos del objeto
creador.nombre="María"
creador.apellidos="Mora Miró"
# Mostrar los datos del objeto
print("Nombre completo: [" + creador.nombre + " " + creador.apellidos + "]" )
# Restaurar los datos del objeto
creador.setMemento( vigilante.memento )
# Mostrar los datos del objeto
print("Nombre completo: [" + creador.nombre + " " + creador.apellidos + "]" )
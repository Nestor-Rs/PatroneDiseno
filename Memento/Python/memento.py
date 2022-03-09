class Memento:
    nombre=""
    apellidos=""

    def __init__(self,nombre="",apellidos=""):
        self.nombre=nombre
        self.apellidos=apellidos

class Originator:
    nombre=""
    apellidos=""

    def __init__(self,nombre,apellidos):
        self.nombre=nombre
        self.apellidos=apellidos
    
    def setMemento(self,m):
        self.nombre=m.nombre
        self.apellidos=m.apellidos

    def createMemento(self):
        return Memento(self.nombre,self.apellidos)

class Caretaker:
    memento=Memento()
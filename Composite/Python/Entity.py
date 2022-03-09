from abc import abstractclassmethod

#Interfaz(Aun que no existan en python)

class Entity:
    @abstractclassmethod
    def logic():
        pass

#Objeto contenido

class Ball(Entity):

    type=""

    def __init__(self,myType):
        super().__init__()
        self.type=myType

    @staticmethod
    def logic(self):
        print(self.type,"ball")

#Clase principal

class Enemy(Entity):
    
    myParts=[]

    def __init__(self,newParts):
        super().__init__()
        self.myParts=newParts

    @staticmethod
    def logic(self):
        print("Shoot:")
        object=self.getChild(0)
        object.logic(object)
        self.remove(0)

    def add(self,newPart):
        self.myParts.append(newPart)
    
    def remove(self,index):
        self.myParts.pop(index)
    
    def getChild(self,index):
        return self.myParts[index]
from abc import abstractclassmethod

class Iterador:
    @abstractclassmethod
    def primero():
        pass
    @abstractclassmethod
    def siguiente():
        pass
    @abstractclassmethod
    def hayMas():
        pass
    @abstractclassmethod
    def actual():
        pass

class IteradorConcretor(Iterador):

    def __init__(self,A=None):
        super().__init__()
        self.agregado=A
        self.posicionActual=0

    @staticmethod
    def primero(self):
        obj=None
        if len(self.agregado.aDato)>0:
            self.posicionActual=0
            obj=self.agregado.aDato[0]
        return obj

    @staticmethod
    def siguiente(self):
        obj=None
        if self.posicionActual < len(self.agregado.aDato):
            obj=self.agregado.aDato[self.posicionActual]
            self.posicionActual+=1
        return obj

    @staticmethod
    def hayMas(self):
        ok=False
        if self.posicionActual<len(self.agregado.aDato):
            ok=True
        return ok

    @staticmethod
    def actual(self):
        obj=None
        if self.posicionActual<len(self.agregado.aDato):
            obj=self.agregado.aDato[self.posicionActual]
        return obj
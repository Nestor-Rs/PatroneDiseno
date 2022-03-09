from abc import abstractclassmethod
import Iterator

class Agregado:
    @abstractclassmethod
    def getIterador():
        pass

class AgregadoConcreto(Agregado):
    aDato = []
    def __init__(self):
        super().__init__()
        self.llenar()

    @staticmethod
    def getIterador(self):
        return Iterator.IteradorConcretor(self)

    def llenar(self):
        self.aDato.append("Jose")
        self.aDato.append("Maria")
        self.aDato.append("Antonio")
        self.aDato.append("Romina")
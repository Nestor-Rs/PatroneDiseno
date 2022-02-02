from abc import abstractmethod
import copy


class Celular:
    @abstractmethod
    def Clonar():
        pass

class Samsung(Celular):
    Marca=''
    OSVersion=0.0

    def __init__(self,VersionOS):
        self.Marca="Samsung"
        self.OSVersion=VersionOS

    @staticmethod
    def Clonar(Phone):
        newPhone = copy.deepcopy(Phone)
        return newPhone
    
    def getMarca(self):
        return self.Marca

    def getOS(self):
        return self.OSVersion

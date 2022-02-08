from abc import abstractclassmethod
import Piezas

class AbstrasFactory:
    @abstractclassmethod
    def CreateScreen():
        pass
    @abstractclassmethod
    def CreateCamera():
        pass
    @abstractclassmethod
    def CreateCase():
        pass

class PhoneH(AbstrasFactory):
    @staticmethod
    def CreateScreen():
        return Piezas.ScreenOled()
    @staticmethod
    def CreateCamera():
        return Piezas.CameraUp()
    @staticmethod
    def CreateCase():
        return Piezas.CarcasaAcero()

class PhoneL(AbstrasFactory):
    @staticmethod
    def CreateScreen():
        return Piezas.ScreenLCD()
    @staticmethod
    def CreateCamera():
        return Piezas.CameraDown()
    @staticmethod
    def CreateCase():
        return Piezas.CarcasaPlastico()
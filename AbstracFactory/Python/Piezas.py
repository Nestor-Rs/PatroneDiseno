from abc import abstractclassmethod

#Pantallas
class Screen:
    @abstractclassmethod
    def Print():
        pass
class ScreenOled(Screen):
    @staticmethod
    def Print():
        print("Screen Oled")

class ScreenLCD(Screen):
    @staticmethod
    def Print():
        print("Screen LCD")

#Camaras
class Camera:
    @abstractclassmethod
    def Print():
        pass
class CameraUp(Camera):
    @staticmethod
    def Print():
        print("Camara 48MPX")

class CameraDown(Camera):
    @staticmethod
    def Print():
        print("Camara 4MPX")

#Carcasas
class Case:
    @abstractclassmethod
    def Print():
        pass
class CarcasaAcero(Case):
    @staticmethod
    def Print():
        print("Camara 48MPX")

class CarcasaPlastico(Case):
    @staticmethod
    def Print():
        print("Camara 4MPX")
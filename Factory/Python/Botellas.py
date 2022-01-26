from abc import abstractclassmethod

class Botellas:
    @abstractclassmethod
    def MiBotella():
        pass

class BotellaVidrio(Botellas):
    @staticmethod
    def MiBotella():
        print("Vidrio")

class BotellaPet(Botellas):
    @staticmethod
    def MiBotella():
        print("Pet")
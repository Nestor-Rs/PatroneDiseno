from abc import abstractclassmethod
import random

from Botellas import BotellaPet, BotellaVidrio, Botellas

class Fabrica:
    @abstractclassmethod
    def createBotella():
        pass

class FabricaPet(Fabrica):
    @staticmethod
    def createBotella():
        MiBote=BotellaPet()
        return MiBote

class FabricaVidrio(Fabrica):
    @staticmethod
    def createBotella():
        MiBote=BotellaVidrio()
        return MiBote

class FabricaMix(Fabrica):
    @staticmethod
    def createBotella():
        MiRand=random.randint(0, 1)
        if MiRand==1:
            MiBote=BotellaVidrio()
            return MiBote
        else:
            MiBote=BotellaPet()
            return MiBote
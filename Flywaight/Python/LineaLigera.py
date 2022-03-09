from abc import abstractclassmethod


class ILineaLigera:
    @abstractclassmethod
    def getColor():
        pass
    @abstractclassmethod
    def dibujar():
        pass

class Linea(ILineaLigera):
    Color:str
    def __init__(self,colo:str) -> None:
        self.Color=colo
    @staticmethod
    def getColor(self):
        return self.Color
    @staticmethod
    def dibujar(self,col,fil):
        print("Dibujando línea de color ["+self.Color+"] en ["+str(col)+", "+str(fil)+"]")

class FabricasDeLineas:
    lineas=[]
    def __init__(self) -> None:
        self.lineas.clear()
    
    def getLine(self,color:str):
        for i in self.lineas:
            if i.getColor(i)==color:
                print("Línea de color [" + color + "] encontrada, la devolvemos")
                return i
        print("Creando una línea de color [" + color + "]")
        self.lineas.append(Linea(color))
        return self.lineas[len(self.lineas)-1]
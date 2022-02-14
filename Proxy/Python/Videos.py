from abc import abstractclassmethod
import Video

class Ivideo:
    @abstractclassmethod
    def editarVideo(miVideo,Act):
        pass
    @abstractclassmethod
    def getCambio(miVideo):
        pass

class videoHD(Ivideo):
    @staticmethod
    def editarVideo(miVideo, Act):
        if Act==0:
            miVideo.setCambio("Sin edicion")
        else:
            miVideo.setCambio("Con edicion")
        return miVideo
    @staticmethod
    def getCambio(miVideo):
        print(miVideo.getCambio())

class videoProxy(Ivideo):
    videoReal=None 
    @staticmethod
    def editarVideo(self,miVideo,Act):
        if self.videoReal==None:
            self.videoReal=videoHD()
            return self.videoReal.editarVideo(miVideo,Act)
        else:
            return self.videoReal.editarVideo(miVideo,Act)

    @staticmethod
    def getCambio(self,miVideo):
        if self.videoReal==None:
            self.videoReal=videoHD()
            self.videoReal.getCambio(miVideo)
        else:
            self.videoReal.getCambio(miVideo)
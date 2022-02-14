package video;

import video.Ivideo;
import video.videoHD;

public class videoProxy implements Ivideo {

    private videoHD videoReal;

    @Override
    public Video editarVideo(Video miVideo, int Accion) {
        if(videoReal==null){
            videoReal= new videoHD();
            return videoReal.editarVideo(miVideo, Accion);
        }
        else{
            return videoReal.editarVideo(miVideo, Accion);
        }
    }

    @Override
    public void getCambio(Video miVideo) {
        if(videoReal==null){
            videoReal= new videoHD();
            videoReal.getCambio(miVideo);;
        }
        else{
            videoReal.getCambio(miVideo);;
        }
        
    }

    
}

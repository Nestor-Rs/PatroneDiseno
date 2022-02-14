package video;
import video.Ivideo;


public class videoHD implements Ivideo{

    @Override
    public Video editarVideo(Video miVideo, int Accion) {
        switch (Accion) {
            case 0:
                miVideo.setCambio("Sin edicion");
                break;
            case 1:
                miVideo.setCambio("Con edicion");
                break;
        }
        return miVideo;
    }

    @Override
    public void getCambio(Video miVideo) {
        System.out.println(miVideo.getCambio());
    }
    
}

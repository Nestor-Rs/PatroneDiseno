import video.Video;
import video.Ivideo;
import video.videoProxy;

public class App {
    public static void main(String[] args) {
        Video miVideoHD = new Video();

        Ivideo nubeVideo = new videoProxy();

        nubeVideo.editarVideo(miVideoHD, 0);
        nubeVideo.getCambio(miVideoHD);
        nubeVideo.editarVideo(miVideoHD, 1);
        nubeVideo.getCambio(miVideoHD);
    }
}

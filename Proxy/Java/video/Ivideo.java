package video;

import video.Video;

public interface Ivideo {
    Video editarVideo(Video miVideo,int Accion);
    void getCambio(Video miVideo);
}
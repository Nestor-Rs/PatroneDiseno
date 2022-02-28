import Concreciones.*;
import List.*;

public class app {
    public static void main(String[] args) {
        ListItemView miVideo, miStream;

        miVideo= new SoloTexto(new VideoViewModel());

        miVideo.render();

        miStream = new Miniatura(new StreamViewModel());

        miStream.render();


    }
}
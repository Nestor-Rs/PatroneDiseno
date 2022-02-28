package Concreciones;

import ViewModel.IViewModel;

public class VideoViewModel implements IViewModel{
    String video;
    
    public VideoViewModel(){
        this.video="Soy un video";
    }

    @Override
    public String title() {
        return this.video+": Lo mejor que veras";
    }

    @Override
    public String image() {
        return this.video+" con imagen";
    }

    

}

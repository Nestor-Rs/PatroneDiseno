package Concreciones;

import ViewModel.IViewModel;

public class StreamViewModel implements IViewModel{

    String Stream;

    public StreamViewModel(){
        this.Stream="Soy un stream";
    }

    @Override
    public String title() {
        return this.Stream+": Lo mejor que veras";
    }

    @Override
    public String image() {
        return this.Stream+": con imagen";
    }
    
}

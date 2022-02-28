package Concreciones;
import List.*;
import ViewModel.*;

public class Miniatura extends ListItemView{

    public Miniatura(IViewModel viewModel) {
        super(viewModel);
    }

    @Override
    public void render(){
        System.out.println("---------------");
        System.out.println("Increible lo que veras: "+super.viewModel.image());
        System.out.println("---------------");
    }
}
package Concreciones;
import List.*;
import ViewModel.*;

public class SoloTexto extends ListItemView{

    public SoloTexto(IViewModel viewModel) {
        super(viewModel);
    }

    @Override
    public void render(){
        System.out.println("---------------");
        System.out.println("Increible lo que veras: "+super.viewModel.title());
        System.out.println("---------------");
    }
}

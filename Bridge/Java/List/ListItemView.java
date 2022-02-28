package List;

import ViewModel.*;

public abstract class ListItemView {
    protected IViewModel viewModel;
    
    protected ListItemView(IViewModel viewModel){
        this.viewModel= viewModel;
    }

    public void render(){
        System.out.println("defautl abstract render");
    }

}

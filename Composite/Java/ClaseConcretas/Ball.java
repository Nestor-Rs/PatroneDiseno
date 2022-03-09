package ClaseConcretas;
import Entidad.*;

public class Ball implements Entity {
    
    String type;

    public Ball(String myType){
        type=myType;
    }

    public void logic(){
        System.out.println(type+"ball");
    }
}

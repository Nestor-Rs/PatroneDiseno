package ClaseConcretas;

import java.util.List;
import Entidad.*;

public class Enemy implements Entity {

    List<Entity> myParts;

    public Enemy( List<Entity> newParts){
        myParts=newParts;
    }

    public void logic(){
        System.out.println("Shoot:");
        getChild(0).logic();
        remove(0);
    }

    public void add(Entity newPart){
        myParts.add(newPart);
    }

    public void remove(int index){
        myParts.remove(index);
    }

    public Entity getChild(int index){
        return myParts.get(index);
    }
}

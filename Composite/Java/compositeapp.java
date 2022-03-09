import Entidad.*;

import java.util.ArrayList;
import java.util.List;
import ClaseConcretas.*;

public class compositeapp {
    public static void main(String[] args) {
        //declaracion de mi lista inicial
        List<Entity> initList = new ArrayList<Entity>();
        Enemy myNewEnemy; 
        //Añadiendo elementos
        initList.add(new Ball("Fire"));
        initList.add(new Ball("Stone"));
        initList.add(new Ball("Grass"));
        //Iniciando mi composite
        myNewEnemy=new Enemy(initList);
        myNewEnemy.logic();
        myNewEnemy.add(new Ball("Thunder"));
        for(int i=0;i<3;i++){
            myNewEnemy.logic();
        }
    }
}

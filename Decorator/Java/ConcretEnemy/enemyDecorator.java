package ConcretEnemy;

import Enemy.*;

public abstract class enemyDecorator extends enemy{
    enemy decoratedEnemy;

    enemyDecorator(enemy Decorado){
        this.decoratedEnemy=Decorado;
    }

    public abstract void print();

}
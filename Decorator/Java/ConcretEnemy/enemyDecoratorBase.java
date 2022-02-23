package ConcretEnemy;

import Enemy.enemy;

public class enemyDecoratorBase extends enemyDecorator{

    public enemyDecoratorBase(enemy Decorado) {
        super(Decorado);
    }

    public void print(){
        super.decoratedEnemy.print();
        System.out.println(" y Estoy Decorado");
    }
}
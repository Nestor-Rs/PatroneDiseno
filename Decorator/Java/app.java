import Enemy.*;
import ConcretEnemy.*;

public class app {
    public static void main(String[] args) {
        enemy EnemigoDesnudo = new enemyBase();

        enemy EnemigoDecorado = new enemyDecoratorBase(EnemigoDesnudo);

        EnemigoDecorado.print();

        enemy EnemigoDecoradoDoble = new enemyDecoratorBase(EnemigoDecorado);

        EnemigoDecoradoDoble.print();
    }
}
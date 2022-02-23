#include <bits/stdc++.h>
#include "enemyDecorator.cpp"


using namespace std;

int main() {
    enemy* EnemigoDesnudo = new enemyBase();

    enemy* EnemigoDecorado = new enemyDecoratorBase(EnemigoDesnudo);

    EnemigoDecorado->print();

    enemy* EnemigoDecoradoDoble = new enemyDecoratorBase(EnemigoDecorado);

    EnemigoDecoradoDoble->print();

    return 0;
}
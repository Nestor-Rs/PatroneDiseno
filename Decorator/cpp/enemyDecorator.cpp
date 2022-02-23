#include <bits/stdc++.h>
#include "enemy.cpp"


using namespace std;

class enemyDecorator:public enemy{
    private:
        
    public:
        enemy* decoratedEnemy;
        enemyDecorator(enemy* Decorado);
        virtual void print()=0;
};

enemyDecorator::enemyDecorator(enemy* Decorado){
    this->decoratedEnemy=Decorado;
}

class enemyDecoratorBase:public enemyDecorator{
    private:
        /* data */
    public:
        enemyDecoratorBase(enemy* Decorado);
        void print();
};

enemyDecoratorBase::enemyDecoratorBase(enemy* Decorado):enemyDecorator(Decorado){}

void enemyDecoratorBase::print(){
    decoratedEnemy->print();
    std::cout << "Soy un decorador" << std::endl;
}


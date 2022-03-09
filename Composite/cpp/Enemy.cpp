#include <bits/stdc++.h>
#include <list>
#include "Ball.cpp"

using namespace std;

class Enemy:public Entity{
    private:
        list<Entity*> myParts;
    public:
        Enemy(list<Entity*> newPars);
        virtual void logic();
        void add(Entity *newPart);
        void remove();
        Entity* getChild();
};

Enemy::Enemy(list<Entity*> newPars){
    myParts=newPars;
}

void Enemy::add(Entity *newPart){
    this->myParts.push_front(newPart);
}

void Enemy::remove(){
    this->myParts.pop_front();
}

Entity* Enemy::getChild(){
    return this->myParts.front();
}

void Enemy::logic(){
    cout << "Shoot:" << endl;
    this->getChild()->logic();
    this->remove();
}
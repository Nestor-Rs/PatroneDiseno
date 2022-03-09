#include <bits/stdc++.h>
#include "Enemy.cpp"


using namespace std;

int main() {
    
    //declaracion de mi lista inicial
        list<Entity*> initList;
        Enemy* myNewEnemy; 
        //Añadiendo elementos
        initList.push_front(new Ball("Fire"));
        initList.push_front(new Ball("Stone"));
        initList.push_front(new Ball("Grass"));
        //Iniciando mi composite
        myNewEnemy=new Enemy(initList);
        myNewEnemy->logic();
        myNewEnemy->add(new Ball("Thunder"));
        for(int i=0;i<3;i++){
            myNewEnemy->logic();
        }

    return 0;
}
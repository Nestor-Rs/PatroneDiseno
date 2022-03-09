#include <bits/stdc++.h>
#include "Entity.cpp"

using namespace std;

class Ball:public Entity{
    private:
        string type;
    public:
        Ball(string);
        virtual void logic();
};

Ball::Ball(string myType){
    type=myType;
}

void Ball::logic(){
    cout<<type+"ball"<<endl;
}

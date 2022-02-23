#include <bits/stdc++.h>

using namespace std;

class enemy{
    private:
        /* data */
    public:
        virtual void print()=0;
};

class enemyBase:public enemy{
    private:
        /* data */
    public:
        void print();
};

void enemyBase::print(){
    cout << "Son un enemigo" << endl;
}
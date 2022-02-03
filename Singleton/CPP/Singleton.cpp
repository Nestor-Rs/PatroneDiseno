#include <bits/stdc++.h>

using namespace std;

class Singleton{
    private:
        static Singleton* singleton;
        Singleton();
    public:
        static Singleton* getSingleton();
};

Singleton* Singleton::singleton=0;

Singleton::Singleton(){

}

Singleton* Singleton::getSingleton(){
    if (singleton == NULL){
        singleton = new Singleton();
    }
    return singleton;
}
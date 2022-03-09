#include <bits/stdc++.h>

using namespace std;

class Iterador{
    private:
        /* data */
    public:
        virtual string primero()=0;
        virtual string siguiente()=0;
        virtual bool hayMas()=0;
        virtual string actual()=0;
};

class Agregado{
    private:
        /* data */
    public:
        virtual Iterador* getIterator()=0;
};

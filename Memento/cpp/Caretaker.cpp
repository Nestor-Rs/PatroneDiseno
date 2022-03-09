#include <bits/stdc++.h>
#include "Originator.cpp"

using namespace std;

class Caretaker{
    private:
        Memento* memento;
    public:
        void setMemento(Memento*);
        Memento* getMemento();
};

void Caretaker::setMemento(Memento* memento){
    this->memento=memento;
}

Memento* Caretaker::getMemento(){
    return this->memento;
}

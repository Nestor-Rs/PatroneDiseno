#include <bits/stdc++.h>
#include "Memento.cpp"

using namespace std;



class Originator{
    private:
        string nombre;
        string apellidos;
    public:
        Originator(string,string);
        void setMemento(Memento*);
        Memento* createMemento();
        string getNombre();
        void setNombre(string);
        string getApellidos();
        void setApellidos(string);
};

Originator::Originator(string nombre, string apellidos){
    this->nombre = nombre;
    this->apellidos = apellidos;
}

void Originator::setMemento(Memento* m){
    this->nombre = m->getNombre();
    this->apellidos = m->getApellidos();
}

Memento* Originator::createMemento(){
    return new Memento(this->nombre,this->apellidos);
}

string Originator::getNombre(){
    return this->nombre;
}

void Originator::setNombre(string nombre){
    this->nombre=nombre;
}

string Originator::getApellidos(){
    return this->apellidos;
}

void Originator::setApellidos(string apellidos){
    this->apellidos=apellidos;
}
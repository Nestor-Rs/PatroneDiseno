#include <bits/stdc++.h>

using namespace std;

class Memento{
    private:
        string nombre;
        string apellidos;
    public:
        Memento(string,string);
        string getNombre();
        void setNombre(string);
        string getApellidos();
        void setApellidos(string);
};

Memento::Memento(string nombre, string apellidos){
    this->nombre=nombre;
    this->apellidos=apellidos;
}

string Memento::getNombre(){
    return this->nombre;
}
void Memento::setNombre(string nombre){
    this->nombre=nombre;
}
string Memento::getApellidos(){
    return this->apellidos;
}
void Memento::setApellidos(string apellidos){
    this->apellidos=apellidos;
}

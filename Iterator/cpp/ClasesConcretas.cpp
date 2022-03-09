#include <bits/stdc++.h>
#include "Interfaces.cpp"

using namespace std;


//Clase concreta de Agregado-------------------------------------
class AgregadoConcreto:public Agregado{
    private:

    public:
        list<string> aDatos;
        list<string>::iterator pos;
        void llenar();
        AgregadoConcreto(/* args */);
        virtual Iterador* getIterator();
};

//Clase concreta  de Iterador --------------------------------------------------

class IteradorConcreto:public Iterador{
    private:
        AgregadoConcreto* agregado;
        int posicionActual;
    public:
        IteradorConcreto(AgregadoConcreto*);
        virtual string primero();
        virtual string siguiente();
        virtual bool hayMas();
        virtual string actual();
};

//Funciones de clase concreta Agregado--------------------------
void AgregadoConcreto::llenar(){
    this->aDatos.push_back("Jose");
    this->aDatos.push_back("Marta");
    this->aDatos.push_back("Antonio");
    this->aDatos.push_back("Romina");
}

AgregadoConcreto::AgregadoConcreto(/* args */){
    this->aDatos.clear();
    this->llenar();
}

Iterador* AgregadoConcreto::getIterator(){
    Iterador* miIterator=new IteradorConcreto(this);
    return miIterator;
}

//Funciones de Iterador Concreto----------------------------------------

IteradorConcreto::IteradorConcreto(AgregadoConcreto* Agregado){
    this->posicionActual=0;
    this->agregado=Agregado;
}

string IteradorConcreto::primero(){
    string obj="";
    if(this->agregado->aDatos.empty()==false){
        this->posicionActual=0;
        this->agregado->pos=this->agregado->aDatos.begin();
        list<string>::iterator position = this->agregado->pos;
        obj = *position;
    }
    return obj;
}

string IteradorConcreto::siguiente(){
    string obj = "";
    list<string>::iterator position;
    if(this->posicionActual<this->agregado->aDatos.size()){
        position=this->agregado->pos;
        obj=*position;
        this->posicionActual++;
        this->agregado->pos++;
    }
    return obj;
}

bool IteradorConcreto::hayMas(){
    bool ok = false;
    if(this->posicionActual<this->agregado->aDatos.size()){
        ok=true;
    }
    return ok;
}

string IteradorConcreto::actual(){
    string obj="";
    list<string>::iterator position;
    if(this->posicionActual<this->agregado->aDatos.size()){
        position = this->agregado->pos;
        obj = *position;
    }
    return obj;
}
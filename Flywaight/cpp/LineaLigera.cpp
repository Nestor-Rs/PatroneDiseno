#include <bits/stdc++.h>

using namespace std;

//-----------------interfaz----------------
class IlineaLigera{
    private:
        /* data */
    public:
        virtual string getColor()=0;
        virtual void dibujar(int,int)=0;
};

//----------------clase concreta-----------

class Linea:public IlineaLigera{
    private:
        string Color;
    public:
        Linea(string c);
        virtual string getColor();
        virtual void dibujar(int,int);
};

Linea::Linea(string c){
    Color=c;
}

string Linea::getColor(){
    return this->Color;
}

void Linea::dibujar(int col, int fila){
    cout << "Dibujando línea de color ["<<this->Color<<"] en ["<<col<<", "<<fila<< "]" <<endl;
}
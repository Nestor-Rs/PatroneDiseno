#include <bits/stdc++.h>

using namespace std;

// Interfaz Celular------------------------------------------------
class Celular{
    private:
    
    public:
        virtual Celular* Clone()=0;
};

// Clase heredada de la implementacion-----------------------------
class Samsung : public Celular{
    private:
        string Marca;
        float OSVersion;
    public:
        Samsung(float VersionOS);
        virtual Samsung* Clone();
        string getMarca();
        float getVersionOS();
        void setVersionOS(float);
};

Samsung::Samsung(float VersionOS){
    Marca="Samsung";
    OSVersion=VersionOS;
}

Samsung* Samsung::Clone(){
    Samsung* newPhone= new Samsung(*this); 
    return newPhone;
}

string Samsung::getMarca(){
    return Marca;
}

float Samsung::getVersionOS(){
    return OSVersion;
}

void Samsung::setVersionOS(float VersionOS){
    OSVersion=VersionOS;
}
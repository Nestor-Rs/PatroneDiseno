#include <bits/stdc++.h>
#include "LineaLigera.cpp"

using namespace std;

class FabricaDeLineas{
    private:
        list<IlineaLigera*> lineas;
        list<IlineaLigera*>::iterator i;
    public:
        FabricaDeLineas();
        IlineaLigera* getLine( string color );

};

FabricaDeLineas::FabricaDeLineas(){
    lineas.clear();
    i=lineas.begin();
}

IlineaLigera* FabricaDeLineas::getLine( string color ){
    // Comprobar si hemos creado una línea con el color solicitado, y devolverla en tal caso
     for(i=lineas.begin();i!=lineas.end();i++){
        IlineaLigera* a=*i;
        if(a->getColor()==color){
            cout<<"Línea de color [" + color + "] encontrada, la devolvemos"<<endl;
            return a;
        }
    }
    // Si no ha sido creada la creamos ahora, la agregamos a la lista y la devolvemos
    cout<<"Creando una línea de color [" + color + "]"<<endl;
    IlineaLigera* linea = new Linea( color );
     this->lineas.push_front( linea );
    return linea;
}    
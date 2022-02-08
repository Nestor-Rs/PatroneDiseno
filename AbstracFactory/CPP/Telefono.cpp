#include <bits/stdc++.h>
#include "Fabricas.cpp"

using namespace std;

class Phone{
private:
    Screen *Pantalla=NULL;
    Camera *Camara=NULL;
    Case *Carcasa=NULL;
public:
    void setScreen(Screen *pantalla){
        Pantalla=pantalla;
    }

    void setCamera(Camera *camara){
        Camara=camara;
    }

    void setCase(Case *carcasa){
        Carcasa=carcasa;
    }

    Screen* getScreen(){
        return Pantalla;
    }

    Camera* getCamera(){
        return Camara;
    }

    Case* getCase(){
        return Carcasa;
    }
};


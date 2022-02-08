#include <bits/stdc++.h>
#include "Piezas.cpp"

using namespace std;

class Fabricas{
    private:

    public:
        virtual Screen* CreateScreen()=0;
        virtual Camera* CreateCamera()=0;
        virtual Case* CreateCase()=0;
};

// Clase de telefono 1 
class PhoneH:public Fabricas{
    private:

    public:
        virtual Screen* CreateScreen();
        virtual Camera* CreateCamera();
        virtual Case* CreateCase();
};

Screen* PhoneH::CreateScreen(){
    Screen* s=new ScreenOled();
    return s;
}
Camera* PhoneH::CreateCamera(){
    Camera* c=new CameraUp();
    return c;
}
Case* PhoneH::CreateCase(){
    Case* c=new CaseAcero();
    return c;
}

// Clase de telefono 2 
class PhoneL:public Fabricas{
    private:

    public:
        virtual Screen* CreateScreen();
        virtual Camera* CreateCamera();
        virtual Case* CreateCase();
};

Screen* PhoneL::CreateScreen(){
    Screen* s=new ScreenLCD();
    return s;
}
Camera* PhoneL::CreateCamera(){
    Camera* c=new CameraDown();
    return c;
}
Case* PhoneL::CreateCase(){
    Case* c=new CasePlastico();
    return c;
}
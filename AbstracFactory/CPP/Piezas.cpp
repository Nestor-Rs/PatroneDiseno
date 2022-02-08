#include <bits/stdc++.h>

using namespace std;

class Screen {
    private:
        
    public:
        virtual void print()=0;
};

class ScreenOled:public Screen{
    private:
    
    public:
        virtual void print(){
            cout<<"Screen Oled"<<endl;
        }
};
class ScreenLCD:public Screen{
    private:
    
    public:
        virtual void print(){
            cout<<"Screen LCD"<<endl;
        }
};

class Camera {
    private:
        
    public:
        virtual void print()=0;
};

class CameraUp:public Camera{
    private:
    
    public:
        virtual void print(){
            cout<<"Camera 48 MPX"<<endl;
        }
};
class CameraDown:public Camera{
    private:
    
    public:
        virtual void print(){
            cout<<"Camer 4 MPX"<<endl;
        }
};

class Case {
    private:
        
    public:
        virtual void print()=0;
};

class CaseAcero:public Case{
    private:
    
    public:
        virtual void print(){
            cout<<"Case Acero"<<endl;
        }
};
class CasePlastico:public Case{
    private:
    
    public:
        virtual void print(){
            cout<<"Case Plastico"<<endl;
        }
};
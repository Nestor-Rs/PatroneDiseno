#include <bits/stdc++.h>
#include "video.cpp"

using namespace std;
//Interfaz
class Ivideo{
    private:
        
    public:
        virtual video* editarVideo(video* miVideo,int Accion)=0;
        virtual void getCambio(video* miVideo)=0;
};
//Implementacion pero mas pesada
class videoHD:public Ivideo{
    private:
        
    public:
        virtual video* editarVideo(video* miVideo,int Accion);
        virtual void getCambio(video* miVideo);
};

video* videoHD::editarVideo(video* miVideo,int Accion){
    switch (Accion) {
            case 0:
                miVideo->setCambio("Sin edicion");
                break;
            case 1:
                miVideo->setCambio("Con edicion");
                break;
        }
        return miVideo;
}

void videoHD::getCambio(video* miVideo){
    cout<<miVideo->getCambio()<<endl;
}

//Proxy
class videoProxy:public Ivideo{
    private:
        videoHD* videoReal;
    public:
        virtual video* editarVideo(video* miVideo,int Accion);
        virtual void getCambio(video* miVideo);
};

video* videoProxy::editarVideo(video* miVideo,int Accion){
    if(videoReal==NULL){
        videoReal= new videoHD();
        return videoReal->editarVideo(miVideo, Accion);
    }
    else{
        return videoReal->editarVideo(miVideo, Accion);
    }
}
void videoProxy::getCambio(video* miVideo){
    if(videoReal==NULL){
        videoReal= new videoHD();
        videoReal->getCambio(miVideo);;
    }
    else{
        videoReal->getCambio(miVideo);;
    }
}
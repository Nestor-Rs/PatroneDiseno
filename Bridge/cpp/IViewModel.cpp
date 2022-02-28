#include <bits/stdc++.h>

using namespace std;

//Interfaz----------------------------------

class IViewModel{
    private:
        /* data */
    public:
        virtual string title()=0;
        virtual string image()=0;
};

//Clase concreta1---------------------------
class VideoViewModel:public IViewModel{
    private:
        string video;
    public:
        VideoViewModel();
        virtual string title();
        virtual string image();
        
};

VideoViewModel::VideoViewModel(){
    this->video="Soy un video";
}

string VideoViewModel::title(){
    return this->video+": Lo mejor que veras";
}

string VideoViewModel::image(){
    return this->video+": con imagen";
}



//Clase concreta2---------------------------

class StreamViewModel:public IViewModel{
    private:
        string Stream;
    public:
        StreamViewModel();
        virtual string title();
        virtual string image();
};

StreamViewModel::StreamViewModel(){
    this->Stream="Soy un stream";
}

string StreamViewModel::title(){
    return this->Stream+": Lo mejor que veras";
}

string StreamViewModel::image(){
    return this->Stream+": con imagen";
}




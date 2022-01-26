#include <bits/stdc++.h>

using namespace std;

//Interfaz inicial para el resto de clases-----------------------------------------
class Botellas{
    private:
    
    public:
        //virtual define la clase abstracta obligatoria
        virtual void MiBotella()=0;
};



//primera clase heredada de la interfaz--------------------------------------------
class BotellasPet : public Botellas{
    private:

    public:
        virtual void MiBotella();
};

void BotellasPet::MiBotella(){
    cout<<"Pet"<<endl;
}



//Segunta clase heredada de la interfaz--------------------------------------------
class BotellasVidrio : public Botellas{
    private:

    public:
        virtual void MiBotella();
};

void BotellasVidrio::MiBotella(){
    cout<<"Vidrio"<<endl;
}


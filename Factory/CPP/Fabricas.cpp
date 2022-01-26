#include <bits/stdc++.h>
#include "Botellas.cpp"

using namespace std;

//Interfaz de fabrica---------------------------------------------------------
class Fabrica{
    private:

    public:
        virtual Botellas* createBotella()=0;
};


//Primera clase heredada de la interfaz---------------------------------------

class FabricaPet: public Fabrica{
    private:

    public:
        virtual Botellas* createBotella();
};

Botellas * FabricaPet::createBotella(){
    Botellas* MiBotella = new BotellasPet();
    return MiBotella;
}

//Segunda clase heredada de la interfaz---------------------------------------

class FabricaVidrio: public Fabrica{
    private:

    public:
        virtual Botellas* createBotella();
};

Botellas * FabricaVidrio::createBotella(){
    Botellas* MiBotella = new BotellasVidrio();
    return MiBotella;
}


//Tercera clase heredada de la interfaz---------------------------------------

class FabricaMix: public Fabrica{
    private:

    public:
        virtual Botellas* createBotella();
};

Botellas * FabricaMix::createBotella(){
    int MiRand=rand()%2;
    Botellas* MiBotella=NULL;
    if(MiRand==1){
        MiBotella = new BotellasPet();
    }
    else{
        MiBotella = new BotellasVidrio();
    }
    return MiBotella;
}
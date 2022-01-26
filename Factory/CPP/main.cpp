#include <bits/stdc++.h>
#include "Fabricas.cpp"

using namespace std;

int main() {
    Botellas *Bote=NULL;
    FabricaPet *Fabrica1=new FabricaPet();
    FabricaVidrio *Fabrica2=new FabricaVidrio();
    FabricaMix *Fabrica3=new FabricaMix();

    Bote=Fabrica1->createBotella();
    Bote->MiBotella();

    Bote=Fabrica2->createBotella();
    Bote->MiBotella();

    Bote=Fabrica2->createBotella();
    Bote->MiBotella();

    return 0;
}
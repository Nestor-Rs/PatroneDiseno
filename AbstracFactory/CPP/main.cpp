#include <bits/stdc++.h>
#include "Telefono.cpp"

using namespace std;

int main() {
    
    Fabricas * fabrica1=new PhoneH();
    Fabricas * fabrica2=new PhoneL();

    Phone* myPhone1= new Phone();
    Phone* myPhone2= new Phone();

    myPhone1->setScreen(fabrica1->CreateScreen());
    myPhone1->setCamera(fabrica1->CreateCamera());
    myPhone1->setCase(fabrica1->CreateCase());

    myPhone1->getScreen()->print();
    myPhone1->getCamera()->print();
    myPhone1->getCase()->print();

    cout<<endl;

    myPhone2->setScreen(fabrica2->CreateScreen());
    myPhone2->setCamera(fabrica2->CreateCamera());
    myPhone2->setCase(fabrica2->CreateCase());

    myPhone2->getScreen()->print();
    myPhone2->getCamera()->print();
    myPhone2->getCase()->print();

    return 0;
}
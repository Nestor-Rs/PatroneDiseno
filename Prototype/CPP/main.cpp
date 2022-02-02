#include <bits/stdc++.h>
#include "Celular.cpp"

using namespace std;

int main() {
    
    Samsung *Galaxy = new Samsung((float) 0.1);
    Samsung *GalaxyTab = Galaxy->Clone();

    if(GalaxyTab!=NULL){
        cout<<GalaxyTab->getMarca()<<endl;
        cout<<GalaxyTab->getVersionOS()<<endl;
    }
    string resu=(Galaxy==GalaxyTab)?"True":"False";
    cout<<resu<<endl;
    return 0;
}